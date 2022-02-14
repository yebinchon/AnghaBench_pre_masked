
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dss_device {int name; } ;
struct dsi_data {TYPE_1__* vc; } ;
struct TYPE_2__ {struct omap_dss_device* dssdev; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 struct dsi_data* FUNC_2 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_3(struct omap_dss_device *VAR_1, int *VAR_2)
{
 struct dsi_data *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3->vc); VAR_4++) {
  if (!VAR_3->vc[VAR_4].dssdev) {
   VAR_3->vc[VAR_4].dssdev = VAR_1;
   *VAR_2 = VAR_4;
   return 0;
  }
 }

 FUNC_1("cannot get VC for display %s", VAR_1->name);
 return -VAR_0;
}
