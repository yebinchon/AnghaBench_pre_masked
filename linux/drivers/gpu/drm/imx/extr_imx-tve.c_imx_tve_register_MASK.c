
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imx_tve {scalar_t__ mode; int encoder; int connector; int ddc; TYPE_1__* dev; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct drm_device*,int *,int *,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct drm_device*,int *,int *,int,int *) ;
 int FUNC_5 (struct drm_device*,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_6(struct drm_device *VAR_8, struct imx_tve *VAR_9)
{
 int VAR_10;
 int VAR_11;

 VAR_10 = VAR_9->mode == VAR_3 ?
    VAR_1 : VAR_2;

 VAR_11 = FUNC_5(VAR_8, &VAR_9->encoder, VAR_9->dev->of_node);
 if (VAR_11)
  return VAR_11;

 FUNC_3(&VAR_9->encoder, &VAR_7);
 FUNC_4(VAR_8, &VAR_9->encoder, &VAR_6,
    VAR_10, ((void*)0));

 FUNC_1(&VAR_9->connector,
   &VAR_5);
 FUNC_2(VAR_8, &VAR_9->connector,
        &VAR_4,
        VAR_0,
        VAR_9->ddc);

 FUNC_0(&VAR_9->connector, &VAR_9->encoder);

 return 0;
}
