
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvrdma_global_route {int traffic_class; int hop_limit; int sgid_index; int flow_label; int dgid; } ;
struct ib_global_route {int traffic_class; int hop_limit; int sgid_index; int flow_label; int dgid; } ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(struct pvrdma_global_route *VAR_0,
          const struct ib_global_route *VAR_1)
{
 FUNC_0(&VAR_0->dgid, &VAR_1->dgid);
 VAR_0->flow_label = VAR_1->flow_label;
 VAR_0->sgid_index = VAR_1->sgid_index;
 VAR_0->hop_limit = VAR_1->hop_limit;
 VAR_0->traffic_class = VAR_1->traffic_class;
}
