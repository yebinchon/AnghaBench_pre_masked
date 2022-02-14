
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;
struct TYPE_3__ {int ddc; } ;
struct analogix_dp_device {TYPE_2__* plat_data; int connector; int dev; TYPE_1__ aux; } ;
struct TYPE_4__ {scalar_t__ (* get_modes ) (TYPE_2__*,struct drm_connector*) ;scalar_t__ panel; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct analogix_dp_device*,int,int) ;
 scalar_t__ FUNC_2 (int *,struct edid*) ;
 int FUNC_3 (int *,struct edid*) ;
 struct edid* FUNC_4 (struct drm_connector*,int *) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct edid*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_2__*,struct drm_connector*) ;
 struct analogix_dp_device* FUNC_10 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_11(struct drm_connector *VAR_0)
{
 struct analogix_dp_device *VAR_1 = FUNC_10(VAR_0);
 struct edid *VAR_2;
 int VAR_3, VAR_4 = 0;

 if (VAR_1->plat_data->panel) {
  VAR_4 += FUNC_5(VAR_1->plat_data->panel);
 } else {
  VAR_3 = FUNC_1(VAR_1, 1, 0);
  if (VAR_3) {
   FUNC_0("Failed to prepare panel (%d)\n", VAR_3);
   return 0;
  }

  FUNC_7(VAR_1->dev);
  VAR_2 = FUNC_4(VAR_0, &VAR_1->aux.ddc);
  FUNC_8(VAR_1->dev);
  if (VAR_2) {
   FUNC_3(&VAR_1->connector,
          VAR_2);
   VAR_4 += FUNC_2(&VAR_1->connector, VAR_2);
   FUNC_6(VAR_2);
  }

  VAR_3 = FUNC_1(VAR_1, 0, 0);
  if (VAR_3)
   FUNC_0("Failed to unprepare panel (%d)\n", VAR_3);
 }

 if (VAR_1->plat_data->get_modes)
  VAR_4 += VAR_1->plat_data->get_modes(VAR_1->plat_data, VAR_0);

 return VAR_4;
}
