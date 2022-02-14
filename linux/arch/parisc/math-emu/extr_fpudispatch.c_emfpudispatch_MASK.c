
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (int,int,int,int*) ;
 int FUNC_3 (int,int,int,int*) ;
 int FUNC_4 (int,int*) ;
 int FUNC_5 (int,int*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;

u_int
FUNC_11(u_int VAR_3, u_int VAR_4, u_int VAR_5, u_int VAR_6[])
{
 u_int VAR_7, VAR_8, VAR_9;
 u_int VAR_10;


 FUNC_0(sizeof(int) == 4);

 VAR_10=VAR_6[VAR_0];

 VAR_9 = FUNC_7(VAR_3);
 VAR_7 = FUNC_6(VAR_3);
 if (VAR_7 == 1) {
  if (VAR_10 & VAR_1)
   VAR_8 = FUNC_10(VAR_3);
  else
   VAR_8 = FUNC_9(VAR_3);
 }
 else
  VAR_8 = FUNC_8(VAR_3);
 switch (VAR_9) {
  case 0x0C:
   return(FUNC_2(VAR_3,VAR_7,VAR_8,VAR_6));
  case 0x0E:
   return(FUNC_3(VAR_3,VAR_7,VAR_8,VAR_6));
  case 0x06:
   return(FUNC_1(VAR_3,VAR_6));
  case 0x26:
   return(FUNC_4(VAR_3,VAR_6));
  case 0x2E:
   return(FUNC_5(VAR_3,VAR_6));
  default:
   return(VAR_2);
 }
}
