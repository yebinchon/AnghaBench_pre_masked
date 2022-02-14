
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,scalar_t__,scalar_t__) ;
 int FUNC_1 (int,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(u8 VAR_3, u8 VAR_4, u16 VAR_5, u16 VAR_6)
{
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6 + VAR_2);
 VAR_7 &= ~VAR_0;
 VAR_7 |= VAR_3 << VAR_1;
 FUNC_1(VAR_7, VAR_4, VAR_5, VAR_6 + VAR_2);
}
