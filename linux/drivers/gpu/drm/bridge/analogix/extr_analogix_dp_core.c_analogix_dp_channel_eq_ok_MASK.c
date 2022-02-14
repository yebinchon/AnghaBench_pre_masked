
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int) ;

__attribute__((used)) static int FUNC_1(u8 VAR_3[2], u8 VAR_4,
         int VAR_5)
{
 int VAR_6;
 u8 VAR_7;

 if ((VAR_4 & VAR_1) == 0)
  return -VAR_2;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_7 = FUNC_0(VAR_3, VAR_6);
  VAR_7 &= VAR_0;
  if (VAR_7 != VAR_0)
   return -VAR_2;
 }

 return 0;
}
