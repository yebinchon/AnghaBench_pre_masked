
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ip_fw {int set; } ;
struct dyn_ipv4_state {int type; int proto; TYPE_6__* data; int sport; int dport; int src; int dst; int kidx; TYPE_3__* limit; } ;
struct TYPE_8__ {int addr_type; scalar_t__ extra; scalar_t__ flow_id6; int src_ip6; int dst_ip6; scalar_t__ _flags; int proto; int fib; int src_port; int dst_port; int src_ip; int dst_ip; } ;
struct TYPE_9__ {TYPE_1__ id; } ;
typedef TYPE_2__ ipfw_dyn_rule ;
struct TYPE_11__ {int fibnum; struct ip_fw* parent; } ;
struct TYPE_10__ {struct ip_fw* parent; } ;


 int VAR_0 ;

 int FUNC_0 (TYPE_6__*,int ,int,int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,int ,int ,TYPE_2__*) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_3(const struct dyn_ipv4_state *VAR_1, ipfw_dyn_rule *VAR_2)
{
 struct ip_fw *VAR_3;

 switch (VAR_1->type) {
 case 128:
  VAR_3 = VAR_1->limit->parent;
  FUNC_1(VAR_1->limit, VAR_1->kidx, VAR_3->set, VAR_2);
  break;
 default:
  VAR_3 = VAR_1->data->parent;
  if (VAR_1->type == VAR_0)
   VAR_3 = ((struct dyn_ipv4_state *)VAR_3)->limit->parent;
  FUNC_0(VAR_1->data, VAR_1->kidx, VAR_1->type, VAR_3->set, VAR_2);
 }

 VAR_2->id.dst_ip = VAR_1->dst;
 VAR_2->id.src_ip = VAR_1->src;
 VAR_2->id.dst_port = VAR_1->dport;
 VAR_2->id.src_port = VAR_1->sport;
 VAR_2->id.fib = VAR_1->data->fibnum;
 VAR_2->id.proto = VAR_1->proto;
 VAR_2->id._flags = 0;
 VAR_2->id.addr_type = 4;

 FUNC_2(&VAR_2->id.dst_ip6, 0, sizeof(VAR_2->id.dst_ip6));
 FUNC_2(&VAR_2->id.src_ip6, 0, sizeof(VAR_2->id.src_ip6));
 VAR_2->id.flow_id6 = VAR_2->id.extra = 0;
}
