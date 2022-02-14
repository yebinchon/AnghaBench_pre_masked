
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct has_commit_data {int path; int result; int repo; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;




 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,struct object_id const*,int *) ;
 int FUNC_3 (struct object_id const*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(const struct object_id *VAR_0, void *VAR_1)
{
 struct has_commit_data *VAR_2 = VAR_1;

 enum object_type VAR_3 = FUNC_2(VAR_2->repo, VAR_0, ((void*)0));

 switch (VAR_3) {
 case 128:
  return 0;
 case 129:




  VAR_2->result = 0;
  return 0;
 default:
  FUNC_1(FUNC_0("submodule entry '%s' (%s) is a %s, not a commit"),
      VAR_2->path, FUNC_3(VAR_0), FUNC_4(VAR_3));
 }
}
