
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;

u32 FUNC_2(void)
{
 u32 VAR_9 = 0;
 u16 VAR_10;

 VAR_10 = FUNC_1(FUNC_0(VAR_0));

 if (VAR_10 & (1 << VAR_4))
  VAR_9 |= 1 << VAR_6;
 if (VAR_10 & (1 << VAR_2))
  VAR_9 |= 1 << VAR_5;
 if (VAR_10 & (1 << VAR_1))
  VAR_9 |= 1 << VAR_8;
 if (VAR_10 & (1 << VAR_3))
  VAR_9 |= 1 << VAR_7;

 return VAR_9;
}
