
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

int FUNC_1(void)
{
 u32 VAR_3 = FUNC_0(VAR_0);
 int VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_5 = (VAR_3 >> VAR_2) & 0xf;
 VAR_6 = (VAR_3 >> VAR_1) & 0x3;

 VAR_4 = (300 + ((VAR_5 / 3) * 100) + ((VAR_5 % 3) * 33)) >> VAR_6;

 return VAR_4;
}
