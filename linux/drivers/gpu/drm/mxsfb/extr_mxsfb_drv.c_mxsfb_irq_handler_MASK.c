
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int crtc; } ;
struct mxsfb_drm_private {scalar_t__ base; TYPE_1__ pipe; } ;
struct drm_device {struct mxsfb_drm_private* dev_private; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mxsfb_drm_private*) ;
 int FUNC_2 (struct mxsfb_drm_private*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct drm_device *VAR_6 = VAR_5;
 struct mxsfb_drm_private *VAR_7 = VAR_6->dev_private;
 u32 VAR_8;

 FUNC_2(VAR_7);

 VAR_8 = FUNC_3(VAR_7->base + VAR_2);

 if (VAR_8 & VAR_0)
  FUNC_0(&VAR_7->pipe.crtc);

 FUNC_4(VAR_0, VAR_7->base + VAR_2 + VAR_3);

 FUNC_1(VAR_7);

 return VAR_1;
}
