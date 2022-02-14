
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdi_device {int vdds_sdi_reg; TYPE_1__* dss; int output; } ;
struct omap_dss_device {int dummy; } ;
struct TYPE_2__ {int dispc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 struct sdi_device* FUNC_3 (struct omap_dss_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct omap_dss_device *VAR_0)
{
 struct sdi_device *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(&VAR_1->output);

 FUNC_2(VAR_1->dss);

 FUNC_0(VAR_1->dss->dispc);

 FUNC_4(VAR_1->vdds_sdi_reg);
}
