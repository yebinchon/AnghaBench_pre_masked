
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_crtc {int irq; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (int ) ;
 struct ipu_crtc* FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_2(struct drm_crtc *VAR_0)
{
 struct ipu_crtc *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->irq);

 return 0;
}
