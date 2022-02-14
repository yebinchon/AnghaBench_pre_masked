
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char*,scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,char*,int) ;

__attribute__((used)) static int
FUNC_7(int VAR_5)
{
 int VAR_6 = 0, VAR_7;
 char VAR_8[60];
 FUNC_1(VAR_0, VAR_3, 0);
 FUNC_5(1);
 FUNC_1(VAR_0, VAR_4, 0);
 while (VAR_6 < VAR_2) {





  FUNC_6(VAR_5, "\r", 1);
  FUNC_0(1,10);
  FUNC_6(VAR_5, "\r", 1);
  FUNC_5(2);
  if (FUNC_1(VAR_5, VAR_1, (caddr_t)&VAR_7) < 0) {
   FUNC_3("tip: ioctl");
   continue;
  }
  while (VAR_7 > 0) {
   FUNC_4(VAR_5, VAR_8, FUNC_2(VAR_7, 60));
   if ((VAR_8[VAR_7 - 1] & 0177) == '$')
    return (1);
   VAR_7 -= FUNC_2(VAR_7, 60);
  }
  FUNC_5(1);
  VAR_6++;
 }
 return (0);
}
