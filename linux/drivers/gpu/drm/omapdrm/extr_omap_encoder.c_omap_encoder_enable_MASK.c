
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_encoder {struct omap_dss_device* output; } ;
struct omap_dss_device {scalar_t__ type; scalar_t__ panel; int next; int state; TYPE_1__* ops; int name; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dev; } ;
struct TYPE_2__ {int (* enable ) (struct omap_dss_device*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct omap_dss_device*) ;
 struct omap_encoder* FUNC_6 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_7(struct drm_encoder *VAR_2)
{
 struct omap_encoder *VAR_3 = FUNC_6(VAR_2);
 struct omap_dss_device *VAR_4 = VAR_3->output;
 struct drm_device *VAR_5 = VAR_2->dev;

 FUNC_0(VAR_5->dev, "enable(%s)\n", VAR_4->name);


 FUNC_4(VAR_4->next);






 if (VAR_4->type != VAR_0) {
  VAR_4->ops->enable(VAR_4);
  VAR_4->state = VAR_1;
 }





 FUNC_3(VAR_4->next);


 if (VAR_4->panel) {
  FUNC_2(VAR_4->panel);
  FUNC_1(VAR_4->panel);
 }
}
