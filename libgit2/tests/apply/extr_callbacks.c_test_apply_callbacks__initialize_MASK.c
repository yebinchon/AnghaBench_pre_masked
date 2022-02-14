
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_object ;
typedef int git_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,int *,int ,int *) ;
 int VAR_2 ;

void FUNC_6(void)
{
 git_oid VAR_3;
 git_commit *VAR_4;

 VAR_2 = FUNC_1(VAR_1);

 FUNC_4(&VAR_3, "539bd011c4822c560c1d17cab095006b7a10f707");
 FUNC_0(FUNC_3(&VAR_4, VAR_2, &VAR_3));
 FUNC_0(FUNC_5(VAR_2, (git_object *)VAR_4, VAR_0, ((void*)0)));
 FUNC_2(VAR_4);
}
