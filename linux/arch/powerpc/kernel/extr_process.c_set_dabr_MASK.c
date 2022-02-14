
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct arch_hw_breakpoint {unsigned long address; unsigned long type; } ;
struct TYPE_2__ {int (* set_dabr ) (unsigned long,unsigned long) ;} ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (unsigned long,unsigned long) ;

__attribute__((used)) static inline int FUNC_2(struct arch_hw_breakpoint *VAR_2)
{
 unsigned long VAR_3, VAR_4;

 VAR_3 = VAR_2->address | (VAR_2->type & VAR_0);
 VAR_4 = ((VAR_2->type >> 3) & 0x7);

 if (VAR_1.set_dabr)
  return VAR_1.set_dabr(VAR_3, VAR_4);

 return FUNC_0(VAR_3, VAR_4);
}
