
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

int FUNC_3(int VAR_4)
{
 int VAR_5 = FUNC_0(VAR_4);
 int VAR_6 = FUNC_1(VAR_4);

 switch (VAR_5) {
  case 128:
   if (!FUNC_2(VAR_0))
    return -VAR_2;


  case 131:
   if (VAR_6 >= VAR_3 || VAR_6 < 0)
    return -VAR_1;

   break;
  case 130:
   break;
  case 129:
   if (VAR_6)
    return -VAR_1;
   break;
  default:
   return -VAR_1;
 }

 return 0;
}
