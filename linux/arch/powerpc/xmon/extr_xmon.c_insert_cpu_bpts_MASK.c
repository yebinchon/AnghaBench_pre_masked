
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct arch_hw_breakpoint {int type; int len; int address; } ;
struct TYPE_4__ {int enabled; int address; } ;
struct TYPE_3__ {int address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct arch_hw_breakpoint*) ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct arch_hw_breakpoint VAR_4;

 if (VAR_2.enabled) {
  VAR_4.address = VAR_2.address;
  VAR_4.type = (VAR_2.enabled & VAR_0) | VAR_1;
  VAR_4.len = 8;
  FUNC_0(&VAR_4);
 }

 if (VAR_3)
  FUNC_1(VAR_3->address);
}
