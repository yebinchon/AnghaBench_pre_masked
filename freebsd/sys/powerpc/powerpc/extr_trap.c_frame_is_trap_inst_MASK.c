
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int esr; } ;
struct TYPE_4__ {TYPE_1__ booke; } ;
struct trapframe {scalar_t__ exc; int srr1; TYPE_2__ cpu; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline bool
FUNC_0(struct trapframe *VAR_3)
{



 return ((VAR_3->cpu.booke.esr & VAR_0) != 0);

}
