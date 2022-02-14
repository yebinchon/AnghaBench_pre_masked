
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(u16 *VAR_1)
{
 u8 VAR_2;
 u8 VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_3 += ((VAR_1[0] >> 8) + (VAR_1[0] & 0xFF));

 return (VAR_3 == 0);
}
