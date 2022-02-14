
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 TYPE_1__* VAR_12 ;
 unsigned int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct mm_struct*,unsigned long,unsigned long,unsigned long,unsigned long) ;
 struct mm_struct VAR_13 ;

int FUNC_2(unsigned long VAR_14, unsigned long VAR_15, unsigned long VAR_16,
  unsigned long VAR_17)
{
 unsigned long VAR_18 = VAR_8 | VAR_10;
 unsigned long VAR_19 = 0;
 struct mm_struct *VAR_20 = VAR_12->mm;
 unsigned int VAR_21 = FUNC_0(VAR_15);

 if ((VAR_21 == VAR_6) || (VAR_21 == VAR_3))
  VAR_20 = &VAR_13;

 if (VAR_16 & VAR_1)
  VAR_19 |= VAR_2;

 if (VAR_16 & VAR_0)
  VAR_18 |= VAR_11;
 VAR_18 |= VAR_9;
 if ((VAR_17 & VAR_4) || (VAR_21 == VAR_5))
  VAR_18 &= ~VAR_9;

 if (VAR_14 == 0x400)
  VAR_18 |= VAR_7;

 return FUNC_1(VAR_20, VAR_15, VAR_18, VAR_14, VAR_19);
}
