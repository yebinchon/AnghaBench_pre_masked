
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {struct aspeed_gfx* dev_private; } ;
struct aspeed_gfx {int connector; int pipe; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_device*,int *,int *,int ,int ,int *,int *) ;

int FUNC_2(struct drm_device *VAR_2)
{
 struct aspeed_gfx *VAR_3 = VAR_2->dev_private;

 return FUNC_1(VAR_2, &VAR_3->pipe, &VAR_1,
         VAR_0,
         FUNC_0(VAR_0),
         ((void*)0),
         &VAR_3->connector);
}
