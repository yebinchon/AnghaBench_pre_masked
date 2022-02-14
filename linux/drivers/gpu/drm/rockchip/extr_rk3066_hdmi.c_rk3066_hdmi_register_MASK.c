
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int polled; } ;
struct drm_encoder {scalar_t__ possible_crtcs; } ;
struct rk3066_hdmi {TYPE_1__ connector; struct device* dev; struct drm_encoder encoder; } ;
struct drm_device {int dummy; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,struct drm_encoder*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (struct drm_device*,TYPE_1__*,int *,int ) ;
 int FUNC_3 (struct drm_encoder*,int *) ;
 int FUNC_4 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 scalar_t__ FUNC_5 (struct drm_device*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_6(struct drm_device *VAR_8, struct rk3066_hdmi *VAR_9)
{
 struct drm_encoder *VAR_10 = &VAR_9->encoder;
 struct device *VAR_11 = VAR_9->dev;

 VAR_10->possible_crtcs =
  FUNC_5(VAR_8, VAR_11->of_node);







 if (VAR_10->possible_crtcs == 0)
  return -VAR_3;

 FUNC_3(VAR_10, &VAR_7);
 FUNC_4(VAR_8, VAR_10, &VAR_6,
    VAR_2, ((void*)0));

 VAR_9->connector.polled = VAR_0;

 FUNC_1(&VAR_9->connector,
     &VAR_5);
 FUNC_2(VAR_8, &VAR_9->connector,
      &VAR_4,
      VAR_1);

 FUNC_0(&VAR_9->connector, VAR_10);

 return 0;
}
