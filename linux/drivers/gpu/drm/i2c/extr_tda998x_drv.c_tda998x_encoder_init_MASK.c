
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int possible_crtcs; } ;
struct tda998x_priv {TYPE_1__ encoder; int bridge; } ;
struct drm_device {int dummy; } ;
struct device {scalar_t__ of_node; } ;


 int VAR_0 ;
 struct tda998x_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (TYPE_1__*,int *,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct drm_device*,TYPE_1__*,int *,int ,int *) ;
 int FUNC_5 (struct drm_device*,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2, struct drm_device *VAR_3)
{
 struct tda998x_priv *VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5 = 0;
 int VAR_6;

 if (VAR_2->of_node)
  VAR_5 = FUNC_5(VAR_3, VAR_2->of_node);


 if (VAR_5 == 0) {
  FUNC_1(VAR_2, "Falling back to first CRTC\n");
  VAR_5 = 1 << 0;
 }

 VAR_4->encoder.possible_crtcs = VAR_5;

 VAR_6 = FUNC_4(VAR_3, &VAR_4->encoder, &VAR_1,
          VAR_0, ((void*)0));
 if (VAR_6)
  goto err_encoder;

 VAR_6 = FUNC_2(&VAR_4->encoder, &VAR_4->bridge, ((void*)0));
 if (VAR_6)
  goto err_bridge;

 return 0;

err_bridge:
 FUNC_3(&VAR_4->encoder);
err_encoder:
 return VAR_6;
}
