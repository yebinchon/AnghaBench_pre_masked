
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dn_pipe8 {int dummy; } ;
struct dn_flow_set {int dummy; } ;
struct dn_flow_queue8 {int dummy; } ;
struct TYPE_2__ {int schk_count; int fsk_count; int si_count; int queue_count; } ;


 TYPE_1__ VAR_0 ;

int
FUNC_0(void)
{
 int VAR_1 = 0;







 VAR_1 += VAR_0.schk_count * sizeof(struct dn_pipe8) / 2;
 VAR_1 += VAR_0.fsk_count * sizeof(struct dn_flow_set);
 VAR_1 += VAR_0.si_count * sizeof(struct dn_flow_queue8);
 VAR_1 += VAR_0.queue_count * sizeof(struct dn_flow_queue8);

 return VAR_1;
}
