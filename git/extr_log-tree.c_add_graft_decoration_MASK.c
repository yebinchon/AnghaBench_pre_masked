
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_graft {int oid; } ;
struct commit {int object; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *) ;
 struct commit* FUNC_1 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(const struct commit_graft *VAR_2, void *VAR_3)
{
 struct commit *VAR_4 = FUNC_1(VAR_1, &VAR_2->oid);
 if (!VAR_4)
  return 0;
 FUNC_0(VAR_0, "grafted", &VAR_4->object);
 return 0;
}
