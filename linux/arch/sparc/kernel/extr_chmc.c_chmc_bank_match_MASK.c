
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmc_bank_info {scalar_t__ valid; unsigned long um; unsigned long uk; unsigned long lm; unsigned long lk; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;

__attribute__((used)) static int FUNC_0(struct chmc_bank_info *VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6 = (VAR_5 & VAR_2) >> VAR_3;
 unsigned long VAR_7 = (VAR_5 & VAR_0) >> VAR_1;


 if (VAR_4->valid == 0)
  return 0;


 VAR_6 ^= VAR_4->um;
 VAR_6 = ~VAR_6;
 VAR_6 |= VAR_4->uk;
 VAR_6 = ~VAR_6;

 if (VAR_6)
  return 0;


 VAR_7 ^= VAR_4->lm;
 VAR_7 = ~VAR_7;
 VAR_7 |= VAR_4->lk;
 VAR_7 = ~VAR_7;

 if (VAR_7)
  return 0;


 return 1;
}
