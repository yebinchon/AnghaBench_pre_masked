
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct tsl2563_lux_coeff {unsigned long ch_ratio; unsigned long ch0_coeff; unsigned long ch1_coeff; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 struct tsl2563_lux_coeff* VAR_2 ;

__attribute__((used)) static unsigned int FUNC_0(u32 VAR_3, u32 VAR_4)
{
 const struct tsl2563_lux_coeff *VAR_5 = VAR_2;
 unsigned long VAR_6, VAR_7, VAR_8 = VAR_3, VAR_9 = VAR_4;

 VAR_6 = VAR_8 ? ((VAR_9 << VAR_0) / VAR_8) : VAR_1;

 while (VAR_5->ch_ratio < VAR_6)
  VAR_5++;

 VAR_7 = VAR_8 * VAR_5->ch0_coeff - VAR_9 * VAR_5->ch1_coeff;

 return (unsigned int) (VAR_7 >> VAR_0);
}
