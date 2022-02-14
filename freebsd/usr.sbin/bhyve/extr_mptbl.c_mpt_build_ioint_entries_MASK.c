
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* int_entry_ptr ;
struct TYPE_5__ {int src_bus_id; int dst_apic_id; int dst_apic_int; int src_bus_irq; int int_flags; void* int_type; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_6 ;
 int FUNC_1 (int,int ,TYPE_1__**) ;

__attribute__((used)) static void
FUNC_2(int_entry_ptr VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;
 for (VAR_9 = 0; VAR_9 < 16; VAR_9++) {
  FUNC_0(VAR_7, 0, sizeof(*VAR_7));
  VAR_7->type = VAR_4;
  VAR_7->src_bus_id = 1;
  VAR_7->dst_apic_id = VAR_8;





  VAR_7->dst_apic_int = VAR_9;
  switch (VAR_9) {
  case 0:

   VAR_7->int_type = VAR_2;
   break;
  case 2:

   VAR_7->int_type = VAR_3;
   VAR_7->src_bus_irq = 0;
   break;
  case 128:

   VAR_7->int_flags = VAR_0 |
       VAR_1;
   VAR_7->int_type = VAR_3;
   VAR_7->src_bus_irq = 128;
   break;
  default:

   VAR_7->int_type = VAR_3;
   VAR_7->src_bus_irq = VAR_9;
   break;
  }
  VAR_7++;
 }


 for (VAR_10 = 0; VAR_10 <= VAR_5; VAR_10++)
  FUNC_1(VAR_10, VAR_6, &VAR_7);
}
