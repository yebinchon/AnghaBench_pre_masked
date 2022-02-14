
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int dummy; } ;
struct object_id {int dummy; } ;
struct checkout_opts {struct tree* source_tree; } ;
struct branch_info {char const* name; int commit; int * path; } ;


 int FUNC_0 (int *,int ) ;
 struct tree* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct object_id*,int) ;
 int FUNC_3 (struct object_id*,struct object_id*) ;
 int FUNC_4 (int ) ;
 struct tree* FUNC_5 (struct object_id*) ;
 int FUNC_6 (int *,struct object_id*) ;
 int FUNC_7 (struct branch_info*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_8(
 struct branch_info *VAR_1,
 struct checkout_opts *VAR_2,
 struct object_id *VAR_3,
 const char *VAR_4)
{
 struct tree **VAR_5 = &VAR_2->source_tree;
 struct object_id VAR_6;

 VAR_1->name = VAR_4;
 FUNC_7(VAR_1);

 if (!FUNC_0(VAR_1->path, 0) &&
     !FUNC_6(VAR_1->path, &VAR_6))
  FUNC_3(VAR_3, &VAR_6);
 else
  VAR_1->path = ((void*)0);

 VAR_1->commit = FUNC_2(VAR_0, VAR_3, 1);
 if (!VAR_1->commit) {

  *VAR_5 = FUNC_5(VAR_3);
 } else {
  FUNC_4(VAR_1->commit);
  *VAR_5 = FUNC_1(VAR_1->commit);
 }
}
