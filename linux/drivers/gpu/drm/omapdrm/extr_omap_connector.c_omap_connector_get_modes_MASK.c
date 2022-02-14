
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_dss_device {TYPE_1__* ops; } ;
struct omap_connector {TYPE_2__* output; } ;
struct drm_connector {int name; } ;
struct TYPE_4__ {scalar_t__ panel; } ;
struct TYPE_3__ {int (* get_modes ) (struct omap_dss_device*,struct drm_connector*) ;} ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 struct omap_dss_device* FUNC_2 (struct drm_connector*,int ) ;
 int FUNC_3 (struct drm_connector*,struct omap_dss_device*) ;
 int FUNC_4 (struct omap_dss_device*,struct drm_connector*) ;
 struct omap_connector* FUNC_5 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_6(struct drm_connector *VAR_2)
{
 struct omap_connector *VAR_3 = FUNC_5(VAR_2);
 struct omap_dss_device *VAR_4;

 FUNC_0("%s", VAR_2->name);





 VAR_4 = FUNC_2(VAR_2,
         VAR_0);
 if (VAR_4)
  return FUNC_3(VAR_2, VAR_4);





 VAR_4 = FUNC_2(VAR_2,
         VAR_1);
 if (VAR_4)
  return VAR_4->ops->get_modes(VAR_4, VAR_2);





 if (VAR_3->output->panel)
  return FUNC_1(VAR_3->output->panel);






 return 0;
}
