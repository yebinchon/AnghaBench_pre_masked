
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status; int polled; } ;
struct mcde_dsi {TYPE_1__ connector; int dev; int bridge_out; } ;
struct drm_device {int dummy; } ;
struct drm_bridge {int encoder; struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mcde_dsi* FUNC_0 (struct drm_bridge*) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,struct drm_bridge*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (struct drm_device*,TYPE_1__*,int *,int ) ;
 int FUNC_6 (struct drm_device*,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(struct drm_bridge *VAR_7)
{
 struct mcde_dsi *VAR_8 = FUNC_0(VAR_7);
 struct drm_device *VAR_9 = VAR_7->dev;
 int VAR_10;

 FUNC_4(&VAR_8->connector,
     &VAR_6);

 if (!FUNC_6(VAR_9, VAR_0)) {
  FUNC_1(VAR_8->dev, "we need atomic updates\n");
  return -VAR_3;
 }

 VAR_10 = FUNC_5(VAR_9, &VAR_8->connector,
     &VAR_5,
     VAR_2);
 if (VAR_10) {
  FUNC_1(VAR_8->dev, "failed to initialize DSI bridge connector\n");
  return VAR_10;
 }
 VAR_8->connector.polled = VAR_1;

 FUNC_3(&VAR_8->connector, VAR_7->encoder);

 VAR_10 = FUNC_2(VAR_7->encoder, VAR_8->bridge_out, VAR_7);
 if (VAR_10) {
  FUNC_1(VAR_8->dev, "failed to attach the DSI bridge\n");
  return VAR_10;
 }
 VAR_8->connector.status = VAR_4;

 return 0;
}
