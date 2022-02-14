
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int possible_crtcs; } ;
struct TYPE_9__ {int dpms; } ;
struct tegra_output {TYPE_1__ encoder; int dev; TYPE_3__ connector; } ;
struct tegra_dc {int base; struct tegra_output* rgb; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (struct drm_device*,TYPE_3__*,int *,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (struct drm_device*,TYPE_1__*,int *,int ,int *) ;
 int FUNC_8 (struct drm_device*,struct tegra_output*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_9(struct drm_device *VAR_8, struct tegra_dc *VAR_9)
{
 struct tegra_output *VAR_10 = VAR_9->rgb;
 int VAR_11;

 if (!VAR_9->rgb)
  return -VAR_3;

 FUNC_3(VAR_8, &VAR_10->connector, &VAR_4,
      VAR_0);
 FUNC_2(&VAR_10->connector,
     &VAR_5);
 VAR_10->connector.dpms = VAR_1;

 FUNC_7(VAR_8, &VAR_10->encoder, &VAR_6,
    VAR_2, ((void*)0));
 FUNC_6(&VAR_10->encoder,
          &VAR_7);

 FUNC_1(&VAR_10->connector,
       &VAR_10->encoder);
 FUNC_4(&VAR_10->connector);

 VAR_11 = FUNC_8(VAR_8, VAR_10);
 if (VAR_11 < 0) {
  FUNC_0(VAR_10->dev, "failed to initialize output: %d\n", VAR_11);
  return VAR_11;
 }






 VAR_10->encoder.possible_crtcs = FUNC_5(&VAR_9->base);

 return 0;
}
