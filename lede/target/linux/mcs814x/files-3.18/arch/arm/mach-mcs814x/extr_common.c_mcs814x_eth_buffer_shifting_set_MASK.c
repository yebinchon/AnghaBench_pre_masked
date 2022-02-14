
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(u8 VAR_3)
{
 u8 VAR_4;

 VAR_4 = FUNC_0(VAR_2 + VAR_1);
 if (VAR_3)
  VAR_4 |= VAR_0;
 else
  VAR_4 &= ~VAR_0;
 FUNC_1(VAR_4, VAR_2 + VAR_1);
}
