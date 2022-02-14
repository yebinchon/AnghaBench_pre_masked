
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference_iterator ;


 size_t VAR_0 ;
 int FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ) ;
 int FUNC_6 (char const**,int *) ;
 int FUNC_7 (int ,char const*) ;
 int VAR_1 ;

void FUNC_8(void)
{
 git_reference_iterator *VAR_2;
 size_t VAR_3 = 0, VAR_4 = 0;
 const char *VAR_5;
 int VAR_6;

 FUNC_2();
 VAR_1 = FUNC_3("testrepo");

 FUNC_1(FUNC_5(&VAR_2, VAR_1));
 while ((VAR_6 = FUNC_6(&VAR_5, VAR_2)) == 0) {
  VAR_3++;
 }

 FUNC_4(VAR_2);
 FUNC_0(VAR_0, VAR_6);

 FUNC_1(FUNC_5(&VAR_2, VAR_1));
 while ((VAR_6 = FUNC_6(&VAR_5, VAR_2)) == 0) {
  FUNC_1(FUNC_7(VAR_1, VAR_5));
  VAR_4++;
 }

 FUNC_4(VAR_2);
 FUNC_0(VAR_0, VAR_6);

 FUNC_0(VAR_3, VAR_4);
}
