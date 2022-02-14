
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 scalar_t__ VAR_1 ;

void FUNC_2(int VAR_2, bool VAR_3)
{
 u32 VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_1 + VAR_0);
 VAR_5 = 1 << (31 - VAR_2);
 if (VAR_3)
  VAR_4 |= VAR_5;
 else
  VAR_4 &= ~VAR_5;
 FUNC_1(VAR_4, VAR_1 + VAR_0);
}
