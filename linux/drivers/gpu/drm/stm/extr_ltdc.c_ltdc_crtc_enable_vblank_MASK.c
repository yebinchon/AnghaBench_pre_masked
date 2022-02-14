
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltdc_device {int regs; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ltdc_device* FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct drm_crtc *VAR_2)
{
 struct ltdc_device *VAR_3 = FUNC_1(VAR_2);

 FUNC_0("\n");
 FUNC_2(VAR_3->regs, VAR_1, VAR_0);

 return 0;
}
