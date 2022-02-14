
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dpms; } ;
struct drm_encoder {int dummy; } ;
struct imx_parallel_display {TYPE_1__ connector; TYPE_5__* dev; int bridge; scalar_t__ panel; struct drm_encoder encoder; } ;
struct drm_device {int dummy; } ;
struct TYPE_7__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,char*,int) ;
 int FUNC_1 (struct drm_encoder*,int ,int *) ;
 int FUNC_2 (TYPE_1__*,struct drm_encoder*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (struct drm_device*,TYPE_1__*,int *,int ) ;
 int FUNC_5 (struct drm_encoder*,int *) ;
 int FUNC_6 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 int FUNC_7 (scalar_t__,TYPE_1__*) ;
 int FUNC_8 (struct drm_device*,struct drm_encoder*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_9(struct drm_device *VAR_7,
 struct imx_parallel_display *VAR_8)
{
 struct drm_encoder *VAR_9 = &VAR_8->encoder;
 int VAR_10;

 VAR_10 = FUNC_8(VAR_7, VAR_9, VAR_8->dev->of_node);
 if (VAR_10)
  return VAR_10;






 VAR_8->connector.dpms = VAR_1;

 FUNC_5(VAR_9, &VAR_6);
 FUNC_6(VAR_7, VAR_9, &VAR_5,
    VAR_2, ((void*)0));

 if (!VAR_8->bridge) {
  FUNC_3(&VAR_8->connector,
    &VAR_4);
  FUNC_4(VAR_7, &VAR_8->connector,
       &VAR_3,
       VAR_0);
 }

 if (VAR_8->panel)
  FUNC_7(VAR_8->panel, &VAR_8->connector);

 if (VAR_8->bridge) {
  VAR_10 = FUNC_1(VAR_9, VAR_8->bridge, ((void*)0));
  if (VAR_10 < 0) {
   FUNC_0(VAR_8->dev, "failed to attach bridge: %d\n",
    VAR_10);
   return VAR_10;
  }
 } else {
  FUNC_2(&VAR_8->connector, VAR_9);
 }

 return 0;
}
