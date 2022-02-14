
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {char* old_name; char* new_name; unsigned int ws_rule; unsigned int inaccurate_eof; scalar_t__ is_binary; struct fragment* fragments; } ;
struct image {int dummy; } ;
struct fragment {char* oldpos; int rejected; struct fragment* next; } ;
struct apply_state {int apply_with_reject; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct apply_state*,struct image*,struct patch*) ;
 scalar_t__ FUNC_2 (struct apply_state*,struct image*,struct fragment*,unsigned int,unsigned int,int) ;
 int FUNC_3 (int ,char const*,char*) ;

__attribute__((used)) static int FUNC_4(struct apply_state *VAR_0, struct image *VAR_1, struct patch *VAR_2)
{
 struct fragment *VAR_3 = VAR_2->fragments;
 const char *VAR_4 = VAR_2->old_name ? VAR_2->old_name : VAR_2->new_name;
 unsigned VAR_5 = VAR_2->ws_rule;
 unsigned VAR_6 = VAR_2->inaccurate_eof;
 int VAR_7 = 0;

 if (VAR_2->is_binary)
  return FUNC_1(VAR_0, VAR_1, VAR_2);

 while (VAR_3) {
  VAR_7++;
  if (FUNC_2(VAR_0, VAR_1, VAR_3, VAR_6, VAR_5, VAR_7)) {
   FUNC_3(FUNC_0("patch failed: %s:%ld"), VAR_4, VAR_3->oldpos);
   if (!VAR_0->apply_with_reject)
    return -1;
   VAR_3->rejected = 1;
  }
  VAR_3 = VAR_3->next;
 }
 return 0;
}
