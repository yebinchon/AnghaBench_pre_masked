
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mcde {scalar_t__ regs; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct drm_simple_display_pipe {struct drm_crtc crtc; } ;
struct drm_device {struct mcde* dev_private; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct drm_simple_display_pipe *VAR_7)
{
 struct drm_crtc *VAR_8 = &VAR_7->crtc;
 struct drm_device *VAR_9 = VAR_8->dev;
 struct mcde *VAR_10 = VAR_9->dev_private;
 u32 VAR_11;


 VAR_11 = VAR_1 |
  VAR_2 |
  VAR_5 |
  VAR_6 |
  VAR_3 |
  VAR_4;
 FUNC_0(VAR_11, VAR_10->regs + VAR_0);

 return 0;
}
