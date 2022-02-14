
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct arch_hw_breakpoint {unsigned long address; int type; int len; } ;
struct TYPE_2__ {int (* set_dawr ) (unsigned long,unsigned long) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,unsigned long) ;
 TYPE_1__ VAR_6 ;
 int FUNC_1 (unsigned long,unsigned long) ;

int FUNC_2(struct arch_hw_breakpoint *VAR_7)
{
 unsigned long VAR_8, VAR_9, VAR_10;

 VAR_8 = VAR_7->address;

 VAR_9 = (VAR_7->type & (VAR_1 | VAR_3))
  << (63 - 58);
 VAR_9 |= ((VAR_7->type & (VAR_2)) >> 2) << (63 - 59);
 VAR_9 |= (VAR_7->type & (VAR_0)) >> 3;







 VAR_10 = ((VAR_7->len + 7) >> 3) - 1;
 VAR_9 |= (VAR_10 & 0x3f) << (63 - 53);

 if (VAR_6.set_dawr)
  return VAR_6.set_dawr(VAR_8, VAR_9);

 FUNC_0(VAR_4, VAR_8);
 FUNC_0(VAR_5, VAR_9);

 return 0;
}
