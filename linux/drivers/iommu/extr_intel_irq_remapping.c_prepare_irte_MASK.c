
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irte {int present; int vector; int redir_hint; int dest_id; int dlvry_mode; scalar_t__ trigger_mode; int dst_mode; } ;
struct TYPE_2__ {int irq_delivery_mode; int irq_dest_mode; } ;


 int FUNC_0 (unsigned int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct irte*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct irte *VAR_1, int VAR_2, unsigned int VAR_3)
{
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->present = 1;
 VAR_1->dst_mode = VAR_0->irq_dest_mode;







 VAR_1->trigger_mode = 0;
 VAR_1->dlvry_mode = VAR_0->irq_delivery_mode;
 VAR_1->vector = VAR_2;
 VAR_1->dest_id = FUNC_0(VAR_3);
 VAR_1->redir_hint = 1;
}
