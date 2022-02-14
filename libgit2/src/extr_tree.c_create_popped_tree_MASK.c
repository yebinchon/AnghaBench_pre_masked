
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int bld; scalar_t__ tree; int name; } ;
typedef TYPE_1__ tree_stack_entry ;
typedef int git_tree_entry ;
typedef int git_oid ;
struct TYPE_9__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int ,char*) ;
 int * FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (int const*) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ,int ,int *,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static int FUNC_13(tree_stack_entry *VAR_3, tree_stack_entry *VAR_4, git_buf *VAR_5)
{
 int VAR_6;
 git_oid VAR_7;

 FUNC_7(VAR_4->tree);


 if (FUNC_8(VAR_4->bld) == 0) {
  FUNC_9(VAR_4->bld);
  VAR_6 = FUNC_11(VAR_3->bld, VAR_4->name);
  FUNC_1(VAR_4->name);
  return VAR_6;
 }

 VAR_6 = FUNC_12(&VAR_7, VAR_4->bld);
 FUNC_9(VAR_4->bld);

 if (VAR_6 < 0) {
  FUNC_1(VAR_4->name);
  return VAR_6;
 }


 FUNC_2(VAR_5);
 FUNC_3(VAR_5, VAR_4->name);
 FUNC_1(VAR_4->name);

 FUNC_0(VAR_5->ptr);


 if (VAR_3->tree) {
  const git_tree_entry *VAR_8;
  VAR_8 = FUNC_5(VAR_3->tree, VAR_5->ptr);
  if (VAR_8 && FUNC_6(VAR_8) != VAR_2) {
   FUNC_4(VAR_0, "D/F conflict when updating tree");
   return -1;
  }
 }

 return FUNC_10(((void*)0), VAR_3->bld, VAR_5->ptr, &VAR_7, VAR_1);
}
