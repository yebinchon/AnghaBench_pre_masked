
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct object_info {unsigned long* sizep; int* typep; } ;
struct TYPE_3__ {int oid; } ;
struct object_entry {int delta_idx; unsigned int delta_child_idx; unsigned int delta_sibling_idx; TYPE_1__ idx; int in_pack_offset; scalar_t__ depth; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_4__ {struct object_entry* objects; } ;


 int FUNC_0 (struct object_entry*) ;
 struct object_info VAR_0 ;
 int FUNC_1 (struct object_entry*,int *) ;
 int FUNC_2 (struct object_entry*,unsigned long) ;
 int FUNC_3 (struct object_entry*,int) ;
 int FUNC_4 (int ,int *,unsigned long*) ;
 scalar_t__ FUNC_5 (int ,int ,int ,struct object_info*) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void FUNC_6(struct object_entry *VAR_3)
{
 unsigned *VAR_4 = &VAR_2.objects[VAR_3->delta_idx - 1].delta_child_idx;
 struct object_info VAR_5 = VAR_0;
 enum object_type VAR_6;
 unsigned long VAR_7;

 while (*VAR_4) {
  struct object_entry *VAR_8 = &VAR_2.objects[*VAR_4 - 1];

  if (VAR_8 == VAR_3)
   *VAR_4 = VAR_8->delta_sibling_idx;
  else
   VAR_4 = &VAR_8->delta_sibling_idx;
 }
 FUNC_1(VAR_3, ((void*)0));
 VAR_3->depth = 0;

 VAR_5.sizep = &VAR_7;
 VAR_5.typep = &VAR_6;
 if (FUNC_5(VAR_1, FUNC_0(VAR_3), VAR_3->in_pack_offset, &VAR_5) < 0) {






  FUNC_3(VAR_3,
       FUNC_4(VAR_1, &VAR_3->idx.oid, &VAR_7));
 } else {
  FUNC_3(VAR_3, VAR_6);
 }
 FUNC_2(VAR_3, VAR_7);
}
