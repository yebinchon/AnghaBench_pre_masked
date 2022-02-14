
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * VAR_3 ;
 int * FUNC_2 (char*,char*) ;
 int * VAR_4 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*,int) ;
 int * VAR_5 ;
 int FUNC_5 (int ,int ) ;
 int VAR_6 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_8(int VAR_7)
{
 char VAR_8, VAR_9[256];
 char *VAR_10 = VAR_9;
 char VAR_11;

 FUNC_4(VAR_3[0], &VAR_8, 1);
 while (VAR_8 != '\n' && (size_t)(VAR_10 - VAR_9) < sizeof(VAR_9)) {
  *VAR_10++ = VAR_8;
  FUNC_4(VAR_3[0], &VAR_8, 1);
 }
 *VAR_10 = '\0';
 if (FUNC_0(FUNC_6(VAR_1)) && VAR_4 != ((void*)0))
  FUNC_1(VAR_4);
 if (VAR_10 == VAR_9) {
  FUNC_5(FUNC_6(VAR_1), VAR_0);
  VAR_11 = 'y';
 } else {
  if ((VAR_4 = FUNC_2(VAR_9, "a")) == ((void*)0))
   VAR_11 = 'n';
  else {
   VAR_11 = 'y';
   FUNC_5(FUNC_6(VAR_1), VAR_2);
  }
 }
 FUNC_7(VAR_5[1], &VAR_11, 1);
 FUNC_3(VAR_6, 1);
}
