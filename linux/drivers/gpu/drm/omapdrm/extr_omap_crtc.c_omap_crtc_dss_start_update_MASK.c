
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_drm_private {int dispc; TYPE_1__* dispc_ops; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
struct TYPE_2__ {int (* mgr_enable ) (int ,int,int) ;} ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct omap_drm_private *VAR_0,
           enum omap_channel VAR_1)
{
 VAR_0->dispc_ops->mgr_enable(VAR_0->dispc, VAR_1, 1);
}
