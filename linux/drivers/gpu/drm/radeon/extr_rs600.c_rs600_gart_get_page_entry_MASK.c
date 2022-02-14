
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

uint64_t FUNC_0(uint64_t VAR_9, uint32_t VAR_10)
{
 VAR_9 = VAR_9 & 0xFFFFFFFFFFFFF000ULL;
 VAR_9 |= VAR_2;
 if (VAR_10 & VAR_7)
  VAR_9 |= VAR_3;
 if (VAR_10 & VAR_5)
  VAR_9 |= VAR_0;
 if (VAR_10 & VAR_8)
  VAR_9 |= VAR_4;
 if (VAR_10 & VAR_6)
  VAR_9 |= VAR_1;
 return VAR_9;
}
