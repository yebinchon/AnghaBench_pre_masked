
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int encoder; } ;
struct drm_connector {int interlace_allowed; int polled; } ;
struct tda998x_priv {TYPE_1__ bridge; struct drm_connector connector; TYPE_2__* hdmi; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_connector*,int ) ;
 int FUNC_1 (struct drm_connector*,int *) ;
 int FUNC_2 (struct drm_device*,struct drm_connector*,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct tda998x_priv *VAR_6,
      struct drm_device *VAR_7)
{
 struct drm_connector *VAR_8 = &VAR_6->connector;
 int VAR_9;

 VAR_8->interlace_allowed = 1;

 if (VAR_6->hdmi->irq)
  VAR_8->polled = VAR_2;
 else
  VAR_8->polled = VAR_0 |
   VAR_1;

 FUNC_1(VAR_8, &VAR_5);
 VAR_9 = FUNC_2(VAR_7, VAR_8, &VAR_4,
     VAR_3);
 if (VAR_9)
  return VAR_9;

 FUNC_0(&VAR_6->connector,
         VAR_6->bridge.encoder);

 return 0;
}
