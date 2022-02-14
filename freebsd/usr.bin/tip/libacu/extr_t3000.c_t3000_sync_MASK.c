
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char*,char) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int
FUNC_8(void)
{
 int VAR_6 = 0;
 int VAR_7;
 char VAR_8[40];

 while (VAR_6++ < VAR_2) {
  FUNC_7(VAR_0, VAR_3);
  FUNC_6(VAR_0, "\rAT Z\r", 6);
  FUNC_0(VAR_8, sizeof(VAR_8));
  FUNC_4(2);
  FUNC_1(VAR_0, VAR_1, &VAR_7);

if (VAR_7 == 0) VAR_7 = 1;

  if (VAR_7) {
   VAR_7 = FUNC_3(VAR_0, VAR_8, sizeof(VAR_8));




   if (FUNC_5(VAR_8, '0') ||
         (FUNC_5(VAR_8, 'O') && FUNC_5(VAR_8, 'K')))
    return(1);
  }




  FUNC_4(1);
  FUNC_6(VAR_0, "+++", 3);
  FUNC_4(1);




  FUNC_1(VAR_0, VAR_4, 0);
  FUNC_4(1);
  FUNC_1(VAR_0, VAR_5, 0);
 }
 FUNC_6(VAR_0, "\rAT Z\r", 6);
 return (0);
}
