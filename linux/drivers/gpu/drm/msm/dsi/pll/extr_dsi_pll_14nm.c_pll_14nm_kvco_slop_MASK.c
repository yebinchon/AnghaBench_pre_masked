
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static u32 FUNC_0(u32 VAR_2)
{
 u32 VAR_3 = 0;

 if (VAR_2 > VAR_1 && VAR_2 <= 1800000000UL)
  VAR_3 = 600;
 else if (VAR_2 > 1800000000UL && VAR_2 < 2300000000UL)
  VAR_3 = 400;
 else if (VAR_2 > 2300000000UL && VAR_2 < VAR_0)
  VAR_3 = 280;

 return VAR_3;
}
