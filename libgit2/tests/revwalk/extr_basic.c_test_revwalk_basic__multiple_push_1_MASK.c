
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

void FUNC_8(void)
{
 int VAR_1 = 0;
 git_oid VAR_2;

 FUNC_7(((void*)0));

 FUNC_1(FUNC_6(VAR_0));

 FUNC_1(FUNC_3(VAR_0, "refs/heads/packed-test"));

 FUNC_1(FUNC_2(&VAR_2, "5b5b025afb0b4c913b4c338a42934a3863bf3644"));
 FUNC_1(FUNC_5(VAR_0, &VAR_2));

 while (FUNC_4(&VAR_2, VAR_0) == 0)
  VAR_1++;

 FUNC_0(VAR_1, 4);
}
