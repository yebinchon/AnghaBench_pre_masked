
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dss_device {int dispc_channel; struct dss_device* dss; } ;
struct dss_device {int mgr_ops_priv; TYPE_1__* mgr_ops; } ;
struct TYPE_2__ {int (* register_framedone_handler ) (int ,int ,void (*) (void*),void*) ;} ;


 int FUNC_0 (int ,int ,void (*) (void*),void*) ;

int FUNC_1(struct omap_dss_device *VAR_0,
  void (*VAR_1)(void *), void *VAR_2)
{
 struct dss_device *VAR_3 = VAR_0->dss;

 return VAR_3->mgr_ops->register_framedone_handler(VAR_3->mgr_ops_priv,
       VAR_0->dispc_channel,
       VAR_1, VAR_2);
}
