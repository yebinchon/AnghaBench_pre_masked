
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int polled; } ;
struct sii902x {TYPE_2__ connector; TYPE_1__* i2c; } ;
struct drm_device {int dummy; } ;
struct drm_bridge {int encoder; struct drm_device* dev; } ;
struct TYPE_5__ {scalar_t__ irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sii902x* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (struct drm_device*,TYPE_2__*,int *,int ) ;
 int FUNC_5 (struct drm_device*,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_6(struct drm_bridge *VAR_7)
{
 struct sii902x *VAR_8 = FUNC_0(VAR_7);
 struct drm_device *VAR_9 = VAR_7->dev;
 int VAR_10;

 FUNC_3(&VAR_8->connector,
     &VAR_6);

 if (!FUNC_5(VAR_9, VAR_0)) {
  FUNC_1(&VAR_8->i2c->dev,
   "sii902x driver is only compatible with DRM devices supporting atomic updates\n");
  return -VAR_4;
 }

 VAR_10 = FUNC_4(VAR_9, &VAR_8->connector,
     &VAR_5,
     VAR_3);
 if (VAR_10)
  return VAR_10;

 if (VAR_8->i2c->irq > 0)
  VAR_8->connector.polled = VAR_2;
 else
  VAR_8->connector.polled = VAR_1;

 FUNC_2(&VAR_8->connector, VAR_7->encoder);

 return 0;
}
