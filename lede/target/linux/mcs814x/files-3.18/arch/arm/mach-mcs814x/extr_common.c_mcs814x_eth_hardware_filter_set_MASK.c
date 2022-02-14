
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(u8 VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_1 + VAR_0);
 if (VAR_2)
  VAR_3 |= 0x80;
 else
  VAR_3 &= ~0x80;
 FUNC_1(VAR_3, VAR_1 + VAR_0);
}
