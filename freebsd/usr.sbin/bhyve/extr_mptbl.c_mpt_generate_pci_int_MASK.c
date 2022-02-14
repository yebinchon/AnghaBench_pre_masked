
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* int_entry_ptr ;
struct TYPE_3__ {int src_bus_id; int src_bus_irq; int dst_apic_int; int dst_apic_id; int int_type; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_1(int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6,
    void *VAR_7)
{
 int_entry_ptr *VAR_8, VAR_9;

 VAR_8 = VAR_7;
 VAR_9 = *VAR_8;
 FUNC_0(VAR_9, 0, sizeof(*VAR_9));





 VAR_9->type = VAR_1;
 VAR_9->int_type = VAR_0;
 VAR_9->src_bus_id = VAR_2;
 VAR_9->src_bus_irq = VAR_3 << 2 | (VAR_4 - 1);
 VAR_9->dst_apic_id = VAR_9[-1].dst_apic_id;
 VAR_9->dst_apic_int = VAR_6;

 *VAR_8 = VAR_9 + 1;
}
