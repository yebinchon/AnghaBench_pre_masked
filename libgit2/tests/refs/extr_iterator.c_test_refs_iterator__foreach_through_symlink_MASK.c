
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_vector ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int *,int,int *) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_8(void)
{
 git_vector VAR_4;





 FUNC_2(FUNC_5(&VAR_4, 32, &VAR_0));

 FUNC_2(FUNC_6("refs", 0777));
 FUNC_1("refs/a", "1234567890123456789012345678901234567890");
 FUNC_1("refs/b", "1234567890123456789012345678901234567890");
 FUNC_1("refs/c", "1234567890123456789012345678901234567890");
 FUNC_1("refs/d", "1234567890123456789012345678901234567890");

 FUNC_2(FUNC_7("../../../refs", "testrepo.git/refs/heads/link"));

 FUNC_2(FUNC_4(VAR_3, VAR_2, &VAR_4));
 FUNC_0(VAR_1, &VAR_4);
}
