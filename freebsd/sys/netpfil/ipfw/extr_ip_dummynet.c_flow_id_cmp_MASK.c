
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipfw_flow_id {scalar_t__ dst_ip; scalar_t__ src_ip; scalar_t__ dst_port; scalar_t__ src_port; scalar_t__ proto; scalar_t__ extra; scalar_t__ flow_id6; int src_ip6; int dst_ip6; } ;


 int FUNC_0 (struct ipfw_flow_id*) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_2(struct ipfw_flow_id *VAR_0, struct ipfw_flow_id *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0);

 if (!VAR_2) {
     if (FUNC_0(VAR_1))
  return 1;

     return (VAR_0->dst_ip == VAR_1->dst_ip &&
      VAR_0->src_ip == VAR_1->src_ip &&
      VAR_0->dst_port == VAR_1->dst_port &&
      VAR_0->src_port == VAR_1->src_port &&
      VAR_0->proto == VAR_1->proto &&
      VAR_0->extra == VAR_1->extra) ? 0 : 1;
 }

 return (
     !FUNC_1(&VAR_0->dst_ip6,&VAR_1->dst_ip6, sizeof(VAR_0->dst_ip6)) &&
     !FUNC_1(&VAR_0->src_ip6,&VAR_1->src_ip6, sizeof(VAR_0->src_ip6)) &&
     VAR_0->dst_port == VAR_1->dst_port &&
     VAR_0->src_port == VAR_1->src_port &&
     VAR_0->proto == VAR_1->proto &&
     VAR_0->extra == VAR_1->extra &&
     VAR_0->flow_id6 == VAR_1->flow_id6) ? 0 : 1;
}
