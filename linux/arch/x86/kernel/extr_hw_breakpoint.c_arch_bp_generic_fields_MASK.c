
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;


 int FUNC_0 (int) ;

int FUNC_1(int VAR_5, int VAR_6,
      int *VAR_7, int *VAR_8)
{
 int VAR_9;


 switch (VAR_6) {
 case 130:
  if (VAR_5 != VAR_4)
   return -VAR_0;

  *VAR_8 = VAR_3;
  *VAR_7 = sizeof(long);
  return 0;
 case 128:
  *VAR_8 = VAR_2;
  break;
 case 129:
  *VAR_8 = VAR_2 | VAR_1;
  break;
 default:
  return -VAR_0;
 }


 VAR_9 = FUNC_0(VAR_5);
 if (VAR_9 < 0)
  return -VAR_0;
 *VAR_7 = VAR_9;

 return 0;
}
