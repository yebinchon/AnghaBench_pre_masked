
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;





 int VAR_2 ;

 int VAR_3 ;
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
 int FUNC_10 (int*) ;
 int FUNC_11 (char*,int,int) ;

u_int
FUNC_12(u_int VAR_4, u_int VAR_5, u_int VAR_6, u_int VAR_7[])
{
 u_int VAR_8, VAR_9;
 u_int VAR_10;


 FUNC_0(sizeof(int) == 4);

 FUNC_10(VAR_7);

 VAR_10=VAR_7[VAR_1];

 VAR_8 = FUNC_6(VAR_4);
 if (VAR_8 == 1) {
  if (VAR_10 & VAR_2)
   VAR_9 = FUNC_9(VAR_4);
  else
   VAR_9 = FUNC_8(VAR_4);
 }
 else
  VAR_9 = FUNC_7(VAR_4);

 if (VAR_0) FUNC_11("class %d subop %d\n", VAR_8, VAR_9);

 switch (VAR_5) {
  case 132:
  case 128:
   return(FUNC_2(VAR_4,VAR_8,VAR_9,VAR_7));
  case 131:
   return(FUNC_3(VAR_4,VAR_8,VAR_9,VAR_7));
  case 133:
   return(FUNC_1(VAR_4,VAR_7));
  case 130:
   return(FUNC_4(VAR_4,VAR_7));
  case 129:
   return(FUNC_5(VAR_4,VAR_7));
  default:
   return(VAR_3);
 }
}
