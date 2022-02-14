
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sig_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 (int ,int ) ;
 size_t FUNC_6 (char*) ;
 int VAR_6 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static char
FUNC_8(char *VAR_7)
{
 char VAR_8;
 sig_t VAR_9;
 size_t VAR_10;
 int VAR_11 = 0;

 VAR_9 = FUNC_5(VAR_2, VAR_5);
 VAR_4 = 0;



 do {
  if (FUNC_4(VAR_6)) {
   FUNC_5(VAR_2, VAR_9);
   return (0);
  }
  FUNC_0(FUNC_1(FUNC_7(VAR_0)));
  FUNC_3(VAR_1, &VAR_8, 1);
  FUNC_0(0);
  VAR_8 &= 0177;



  for (VAR_10 = 0; VAR_10 < FUNC_6(VAR_7); VAR_10++)
   if (VAR_8 == VAR_7[VAR_10])
    VAR_11 = VAR_8;
 } while (VAR_11 == 0);
 FUNC_5(VAR_2, VAR_3);



 return (VAR_11);
}
