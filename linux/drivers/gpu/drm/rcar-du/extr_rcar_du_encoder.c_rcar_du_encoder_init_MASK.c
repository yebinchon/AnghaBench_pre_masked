
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rcar_du_encoder {int output; } ;
struct rcar_du_device {int dev; int ddev; TYPE_1__* info; struct rcar_du_encoder** encoders; } ;
struct drm_panel {int dummy; } ;
struct drm_encoder {TYPE_2__* funcs; scalar_t__ name; } ;
typedef struct drm_panel drm_bridge ;
struct device_node {int dummy; } ;
typedef enum rcar_du_output { ____Placeholder_rcar_du_output } rcar_du_output ;
struct TYPE_4__ {int (* destroy ) (struct drm_encoder*) ;} ;
struct TYPE_3__ {int gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct drm_panel*) ;
 int FUNC_1 (struct drm_panel*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,char*,struct device_node*,int) ;
 struct drm_panel* FUNC_3 (int ,struct drm_panel*,int ) ;
 int FUNC_4 (int ,struct rcar_du_encoder*) ;
 struct rcar_du_encoder* FUNC_5 (int ,int,int ) ;
 int FUNC_6 (struct drm_encoder*,struct drm_panel*,int *) ;
 int FUNC_7 (struct drm_encoder*) ;
 int FUNC_8 (struct drm_encoder*,int *) ;
 int FUNC_9 (int ,struct drm_encoder*,int *,int ,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 struct drm_panel* FUNC_10 (struct device_node*) ;
 struct drm_panel* FUNC_11 (struct device_node*) ;
 int FUNC_12 (struct device_node*) ;
 struct drm_encoder* FUNC_13 (struct rcar_du_encoder*) ;
 scalar_t__ FUNC_14 (struct drm_panel*) ;
 int FUNC_15 (struct drm_encoder*) ;

int FUNC_16(struct rcar_du_device *VAR_11,
    enum rcar_du_output VAR_12,
    struct device_node *VAR_13)
{
 struct rcar_du_encoder *VAR_14;
 struct drm_encoder *VAR_15;
 struct drm_bridge *VAR_16;
 int VAR_17;

 VAR_14 = FUNC_5(VAR_11->dev, sizeof(*VAR_14), VAR_5);
 if (VAR_14 == ((void*)0))
  return -VAR_3;

 VAR_11->encoders[VAR_12] = VAR_14;
 VAR_14->output = VAR_12;
 VAR_15 = FUNC_13(VAR_14);

 FUNC_2(VAR_11->dev, "initializing encoder %pOF for output %u\n",
  VAR_13, VAR_12);






 if ((VAR_12 == VAR_6 ||
      VAR_12 == VAR_7) &&
     FUNC_12(VAR_13) == 1) {
  struct drm_panel *VAR_18 = FUNC_11(VAR_13);

  if (FUNC_0(VAR_18)) {
   VAR_17 = FUNC_1(VAR_18);
   goto done;
  }

  VAR_16 = FUNC_3(VAR_11->dev, VAR_18,
         VAR_0);
  if (FUNC_0(VAR_16)) {
   VAR_17 = FUNC_1(VAR_16);
   goto done;
  }
 } else {
  VAR_16 = FUNC_10(VAR_13);
  if (!VAR_16) {
   VAR_17 = -VAR_4;
   goto done;
  }
 }





 if (VAR_11->info->gen >= 3 && VAR_12 == VAR_8) {
  if (FUNC_14(VAR_16)) {
   VAR_17 = -VAR_2;
   goto done;
  }
 }

 VAR_17 = FUNC_9(VAR_11->ddev, VAR_15, &VAR_9,
          VAR_1, ((void*)0));
 if (VAR_17 < 0)
  goto done;

 FUNC_8(VAR_15, &VAR_10);





 VAR_17 = FUNC_6(VAR_15, VAR_16, ((void*)0));
 if (VAR_17) {
  FUNC_7(VAR_15);
  return VAR_17;
 }

done:
 if (VAR_17 < 0) {
  if (VAR_15->name)
   VAR_15->funcs->destroy(VAR_15);
  FUNC_4(VAR_11->dev, VAR_14);
 }

 return VAR_17;
}
