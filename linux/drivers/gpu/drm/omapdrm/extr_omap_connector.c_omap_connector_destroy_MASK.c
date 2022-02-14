
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dss_device {TYPE_1__* ops; } ;
struct omap_connector {struct omap_dss_device* output; struct omap_dss_device* hpd; } ;
struct drm_connector {int name; } ;
struct TYPE_2__ {int (* unregister_hpd_cb ) (struct omap_dss_device*) ;} ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct omap_connector*) ;
 int FUNC_4 (struct omap_dss_device*) ;
 int FUNC_5 (struct omap_dss_device*) ;
 struct omap_connector* FUNC_6 (struct drm_connector*) ;

__attribute__((used)) static void FUNC_7(struct drm_connector *VAR_0)
{
 struct omap_connector *VAR_1 = FUNC_6(VAR_0);

 FUNC_0("%s", VAR_0->name);

 if (VAR_1->hpd) {
  struct omap_dss_device *VAR_2 = VAR_1->hpd;

  VAR_2->ops->unregister_hpd_cb(VAR_2);
  FUNC_4(VAR_2);
  VAR_1->hpd = ((void*)0);
 }

 FUNC_2(VAR_0);
 FUNC_1(VAR_0);

 FUNC_4(VAR_1->output);

 FUNC_3(VAR_1);
}
