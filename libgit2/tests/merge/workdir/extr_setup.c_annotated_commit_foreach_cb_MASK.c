
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct annotated_commit_cb_data {size_t i; int * oid_str; } ;
typedef int git_oid ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int const*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(const git_oid *VAR_0, void *VAR_1)
{
 git_oid VAR_2;
 struct annotated_commit_cb_data *VAR_3 = VAR_1;

 FUNC_2(&VAR_2, VAR_3->oid_str[VAR_3->i]);
 FUNC_0(FUNC_1(&VAR_2, VAR_0) == 0);
 VAR_3->i++;
 return 0;
}
