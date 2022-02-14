
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (size_t*,int *,int ,int *) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;

void FUNC_7(void)
{
 git_oid VAR_3;
 size_t VAR_4;
 git_object_t VAR_5;


 FUNC_4();


 if (!FUNC_3("GITTEST_INVASIVE_FS_SIZE") ||
  !FUNC_3("GITTEST_SLOW"))
  FUNC_4();

 FUNC_6(&VAR_3);
 FUNC_2(FUNC_5(&VAR_4, &VAR_5, VAR_2, &VAR_3));

 FUNC_1(VAR_1, VAR_4);
 FUNC_0(VAR_0, VAR_5);
}
