
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_annotated_commit ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ,int *) ;
 int FUNC_3 (int ,int const**,int,int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(void)
{
 git_oid VAR_2;
 git_annotated_commit *VAR_3;

 FUNC_0(FUNC_4(&VAR_2, VAR_0));
 FUNC_0(FUNC_2(&VAR_3, VAR_1, &VAR_2));

 FUNC_0(FUNC_3(VAR_1, (const git_annotated_commit **)&VAR_3,
  1, ((void*)0), ((void*)0)));

 FUNC_1(VAR_3);
}
