
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ifi_iqdrops; int ifi_opackets; int ifi_ipackets; int ifi_mtu; } ;
struct TYPE_4__ {TYPE_1__ ifmd_data; } ;
struct mibif {TYPE_2__ mib; } ;
struct bridge_port {int in_drops; int out_frames; int in_frames; int max_info; } ;



void
FUNC_0(struct mibif *VAR_0, struct bridge_port *VAR_1)
{
 VAR_1->max_info = VAR_0->mib.ifmd_data.ifi_mtu;
 VAR_1->in_frames = VAR_0->mib.ifmd_data.ifi_ipackets;
 VAR_1->out_frames = VAR_0->mib.ifmd_data.ifi_opackets;
 VAR_1->in_drops = VAR_0->mib.ifmd_data.ifi_iqdrops;
}
