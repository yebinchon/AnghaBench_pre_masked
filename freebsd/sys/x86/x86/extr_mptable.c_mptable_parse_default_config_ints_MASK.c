
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct INTENTRY {int int_flags; int dst_apic_id; int dst_apic_int; int src_bus_irq; void* int_type; scalar_t__ src_bus_id; int type; } ;
struct TYPE_2__ {int config_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int * VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (struct INTENTRY*) ;

__attribute__((used)) static void
FUNC_2(void)
{
 struct INTENTRY VAR_7;
 int VAR_8;





 VAR_7.type = VAR_4;
 VAR_7.int_flags = VAR_0 |
     VAR_1;
 VAR_7.src_bus_id = 0;
 VAR_7.dst_apic_id = 2;


 for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {
  VAR_7.dst_apic_int = VAR_8;
  switch (VAR_8) {
  case 0:

   VAR_7.int_type = VAR_2;
   break;
  case 2:

   VAR_7.int_type = VAR_3;
   VAR_7.src_bus_irq = 0;
   break;
  default:

   VAR_7.int_type = VAR_3;
   VAR_7.src_bus_irq = VAR_8;
   break;
  }
  FUNC_1(&VAR_7);
 }


 if (VAR_6->config_type == 7)
  FUNC_0(VAR_5[2], 0);
 if (VAR_6->config_type == 2) {
  FUNC_0(VAR_5[2], 2);
  FUNC_0(VAR_5[2], 13);
 }
}
