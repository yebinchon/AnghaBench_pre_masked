
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {struct aspeed_gfx* dev_private; } ;
struct TYPE_2__ {int crtc; } ;
struct aspeed_gfx {scalar_t__ base; TYPE_1__ pipe; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct drm_device *VAR_6 = VAR_5;
 struct aspeed_gfx *VAR_7 = VAR_6->dev_private;
 u32 VAR_8;

 VAR_8 = FUNC_1(VAR_7->base + VAR_0);

 if (VAR_8 & VAR_1) {
  FUNC_0(&VAR_7->pipe.crtc);
  FUNC_2(VAR_8, VAR_7->base + VAR_0);
  return VAR_2;
 }

 return VAR_3;
}
