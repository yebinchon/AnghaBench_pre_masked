
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct videomode {int dummy; } ;
struct omap_dss_device {int dispc_channel; TYPE_2__* dss; } ;
struct TYPE_4__ {int mgr_ops_priv; TYPE_1__* mgr_ops; } ;
struct TYPE_3__ {int (* set_timings ) (int ,int ,struct videomode const*) ;} ;


 int FUNC_0 (int ,int ,struct videomode const*) ;

void FUNC_1(struct omap_dss_device *VAR_0,
    const struct videomode *VAR_1)
{
 VAR_0->dss->mgr_ops->set_timings(VAR_0->dss->mgr_ops_priv,
       VAR_0->dispc_channel, VAR_1);
}
