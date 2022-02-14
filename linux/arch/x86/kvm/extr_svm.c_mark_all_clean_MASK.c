
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clean; } ;
struct vmcb {TYPE_1__ control; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct vmcb *VAR_2)
{
 VAR_2->control.clean = ((1 << VAR_1) - 1)
          & ~VAR_0;
}
