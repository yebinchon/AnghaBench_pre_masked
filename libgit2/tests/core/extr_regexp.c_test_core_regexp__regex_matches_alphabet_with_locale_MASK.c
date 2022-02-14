
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;

void FUNC_5(void)
{
 char VAR_3, VAR_4[2];





 FUNC_4(VAR_0);
 FUNC_4(VAR_1);

 FUNC_0(FUNC_2(&VAR_2, "[[:alpha:]]", 0));

 VAR_4[1] = '\0';
 for (VAR_3 = 'a'; VAR_3 <= 'z'; VAR_3++) {
     VAR_4[0] = VAR_3;
     FUNC_0(FUNC_3(&VAR_2, VAR_4));
 }
 for (VAR_3 = 'A'; VAR_3 <= 'Z'; VAR_3++) {
     VAR_4[0] = VAR_3;
     FUNC_0(FUNC_3(&VAR_2, VAR_4));
 }
}
