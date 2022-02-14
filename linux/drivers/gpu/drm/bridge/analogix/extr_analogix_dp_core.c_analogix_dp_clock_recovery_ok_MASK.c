
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int) ;

__attribute__((used)) static int FUNC_1(u8 VAR_2[2], int VAR_3)
{
 int VAR_4;
 u8 VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_5 = FUNC_0(VAR_2, VAR_4);
  if ((VAR_5 & VAR_0) == 0)
   return -VAR_1;
 }
 return 0;
}
