
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ng_netflow_v9info {int mtu; int templ_packets; int templ_time; } ;
typedef TYPE_1__* priv_p ;
struct TYPE_3__ {int mtu; int templ_packets; int templ_time; } ;



void
FUNC_0(priv_p VAR_0, struct ng_netflow_v9info *VAR_1)
{

 VAR_1->templ_time = VAR_0->templ_time;
 VAR_1->templ_packets = VAR_0->templ_packets;
 VAR_1->mtu = VAR_0->mtu;
}
