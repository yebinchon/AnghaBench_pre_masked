
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sig_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char) ;
 int FUNC_5 (int ,char*,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_6 ;
 int FUNC_7 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(char *VAR_9)
{
 sig_t VAR_10;
 char VAR_11;

 VAR_10 = FUNC_7(VAR_2, VAR_6);
 VAR_5 = 0;
 do {
  if (*VAR_9 =='\0') {
   FUNC_7(VAR_2, VAR_10);
   return (1);
  }
  if (FUNC_6(VAR_8)) {
   FUNC_7(VAR_2, VAR_10);
   return (0);
  }
  FUNC_0(FUNC_3(FUNC_8(VAR_0)));
  FUNC_5(VAR_1, &VAR_11, 1);
  FUNC_0(0);
  VAR_11 &= 0177;




 } while (VAR_11 == *VAR_9++);




 FUNC_7(VAR_2, VAR_3);
 return (0);
}
