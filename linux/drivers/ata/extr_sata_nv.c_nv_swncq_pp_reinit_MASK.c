
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct defer_queue {scalar_t__ defer_bits; scalar_t__ tail; scalar_t__ head; } ;
struct nv_swncq_port_priv {int last_issue_tag; scalar_t__ qc_active; struct defer_queue defer_queue; } ;
struct ata_port {struct nv_swncq_port_priv* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_port*) ;

__attribute__((used)) static void FUNC_1(struct ata_port *VAR_1)
{
 struct nv_swncq_port_priv *VAR_2 = VAR_1->private_data;
 struct defer_queue *VAR_3 = &VAR_2->defer_queue;

 VAR_3->head = 0;
 VAR_3->tail = 0;
 VAR_3->defer_bits = 0;
 VAR_2->qc_active = 0;
 VAR_2->last_issue_tag = VAR_0;
 FUNC_0(VAR_1);
}
