
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_odb_object ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;

void FUNC_6(void)
{
 git_oid VAR_1;
 git_odb_object *VAR_2 = ((void*)0);





 if (!FUNC_1("GITTEST_INVASIVE_FS_SIZE") ||
  !FUNC_1("GITTEST_INVASIVE_MEMORY") ||
  !FUNC_1("GITTEST_SLOW"))
  FUNC_2();

 FUNC_5(&VAR_1);
 FUNC_0(FUNC_4(&VAR_2, VAR_0, &VAR_1));

 FUNC_3(VAR_2);
}
