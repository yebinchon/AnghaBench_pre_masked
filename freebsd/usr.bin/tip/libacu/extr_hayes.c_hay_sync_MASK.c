
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char*,char) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_7(void)
{
 int VAR_7, VAR_8 = 0;

 while (VAR_8++ <= VAR_3) {
  FUNC_6(VAR_1, "AT\r", 3);
  FUNC_4(1);
  FUNC_0(VAR_1, VAR_2, &VAR_7);
  if (VAR_7) {
   VAR_7 = FUNC_3(VAR_1, VAR_6, FUNC_1(VAR_7, VAR_0));
   if (FUNC_5(VAR_6, '0') ||
      (FUNC_5(VAR_6, 'O') && FUNC_5(VAR_6, 'K')))
    return(1);




  }
  FUNC_0(VAR_1, VAR_4, 0);
  FUNC_0(VAR_1, VAR_5, 0);
 }
 FUNC_2("Cannot synchronize with hayes...\n\r");
 return(0);
}
