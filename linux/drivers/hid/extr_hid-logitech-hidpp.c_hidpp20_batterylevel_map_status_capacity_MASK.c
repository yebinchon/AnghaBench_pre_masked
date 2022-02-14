
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(u8 VAR_6[3], int *VAR_7,
          int *VAR_8,
          int *VAR_9)
{
 int VAR_10;

 *VAR_7 = VAR_6[0];
 *VAR_8 = VAR_6[1];
 *VAR_9 = VAR_1;




 switch (VAR_6[2]) {
  case 0:
   VAR_10 = VAR_3;
   *VAR_9 = FUNC_0(*VAR_7);
   break;
  case 1:
   VAR_10 = VAR_2;
   break;
  case 2:
   VAR_10 = VAR_2;
   break;
  case 3:
   VAR_10 = VAR_4;
   *VAR_9 = VAR_0;
   *VAR_7 = 100;
   break;
  case 4:
   VAR_10 = VAR_2;
   break;



  default:
   VAR_10 = VAR_5;
   break;
 }

 return VAR_10;
}
