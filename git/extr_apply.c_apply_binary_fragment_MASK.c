
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {scalar_t__ old_name; scalar_t__ new_name; struct fragment* fragments; } ;
struct image {unsigned long len; void* buf; } ;
struct fragment {int binary_patch_method; unsigned long size; int patch; struct fragment* next; } ;
struct apply_state {scalar_t__ apply_in_reverse; } ;




 int FUNC_0 (char*) ;
 int FUNC_1 (struct image*) ;
 int FUNC_2 (int ,scalar_t__) ;
 void* FUNC_3 (void*,unsigned long,int ,unsigned long,unsigned long*) ;
 void* FUNC_4 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct apply_state *VAR_0,
     struct image *VAR_1,
     struct patch *VAR_2)
{
 struct fragment *VAR_3 = VAR_2->fragments;
 unsigned long VAR_4;
 void *VAR_5;

 if (!VAR_3)
  return FUNC_2(FUNC_0("missing binary patch data for '%s'"),
        VAR_2->new_name ?
        VAR_2->new_name :
        VAR_2->old_name);


 if (VAR_0->apply_in_reverse) {
  if (!VAR_3->next)
   return FUNC_2(FUNC_0("cannot reverse-apply a binary patch "
           "without the reverse hunk to '%s'"),
         VAR_2->new_name
         ? VAR_2->new_name : VAR_2->old_name);
  VAR_3 = VAR_3->next;
 }
 switch (VAR_3->binary_patch_method) {
 case 129:
  VAR_5 = FUNC_3(VAR_1->buf, VAR_1->len, VAR_3->patch,
      VAR_3->size, &VAR_4);
  if (!VAR_5)
   return -1;
  FUNC_1(VAR_1);
  VAR_1->buf = VAR_5;
  VAR_1->len = VAR_4;
  return 0;
 case 128:
  FUNC_1(VAR_1);
  VAR_1->len = VAR_3->size;
  VAR_1->buf = FUNC_4(VAR_3->patch, VAR_1->len);
  return 0;
 }
 return -1;
}
