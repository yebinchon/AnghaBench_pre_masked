
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int* bus_formats; scalar_t__ num_bus_formats; } ;
struct TYPE_5__ {TYPE_1__ display_info; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_6__ {struct drm_crtc crtc; } ;
struct mxsfb_drm_private {scalar_t__ base; TYPE_2__ connector; TYPE_3__ pipe; } ;
struct drm_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct mxsfb_drm_private *VAR_5)
{
 struct drm_crtc *VAR_6 = &VAR_5->pipe.crtc;
 struct drm_device *VAR_7 = VAR_6->dev;
 u32 VAR_8 = 128;
 u32 VAR_9;

 VAR_9 = FUNC_2(VAR_5->base + VAR_1);

 if (VAR_5->connector.display_info.num_bus_formats)
  VAR_8 = VAR_5->connector.display_info.bus_formats[0];

 VAR_9 &= ~VAR_0;
 switch (VAR_8) {
 case 130:
  VAR_9 |= FUNC_0(VAR_2);
  break;
 case 129:
  VAR_9 |= FUNC_0(VAR_3);
  break;
 case 128:
  VAR_9 |= FUNC_0(VAR_4);
  break;
 default:
  FUNC_1(VAR_7->dev, "Unknown media bus format %d\n", VAR_8);
  break;
 }
 FUNC_3(VAR_9, VAR_5->base + VAR_1);
}
