
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (char*) ;

void FUNC_9(void)
{
 git_oid VAR_2, VAR_3, VAR_4;

 FUNC_8("testrepo.git");

 FUNC_2(FUNC_3(&VAR_2, "bd758010071961f28336333bc41e9c64c9a64866"));
 FUNC_2(FUNC_7(VAR_1, &VAR_2));

 FUNC_2(FUNC_3(&VAR_3, "b91e763008b10db366442469339f90a2b8400d0a"));
 FUNC_2(FUNC_5(VAR_1, &VAR_3));

 FUNC_2(FUNC_6(&VAR_4, VAR_1));
 FUNC_0(!FUNC_4(&VAR_4, "bd758010071961f28336333bc41e9c64c9a64866"));

 FUNC_1(VAR_0, FUNC_6(&VAR_4, VAR_1));
}
