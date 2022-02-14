
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {struct aspeed_gfx* dev_private; } ;
struct TYPE_3__ {scalar_t__ polled; int dpms; } ;
struct aspeed_gfx {TYPE_1__ connector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (struct drm_device*,TYPE_1__*,int *,int ) ;

int FUNC_2(struct drm_device *VAR_4)
{
 struct aspeed_gfx *VAR_5 = VAR_4->dev_private;
 int VAR_6;

 VAR_5->connector.dpms = VAR_1;
 VAR_5->connector.polled = 0;
 FUNC_0(&VAR_5->connector,
     &VAR_3);
 VAR_6 = FUNC_1(VAR_4, &VAR_5->connector,
     &VAR_2,
     VAR_0);
 return VAR_6;
}
