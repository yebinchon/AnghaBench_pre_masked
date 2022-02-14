
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdlcd_drm_private {int dummy; } ;
struct drm_crtc {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct hdlcd_drm_private* FUNC_0 (struct drm_crtc*) ;
 unsigned int FUNC_1 (struct hdlcd_drm_private*,int ) ;
 int FUNC_2 (struct hdlcd_drm_private*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_2)
{
 struct hdlcd_drm_private *VAR_3 = FUNC_0(VAR_2);
 unsigned int VAR_4 = FUNC_1(VAR_3, VAR_1);

 FUNC_2(VAR_3, VAR_1, VAR_4 & ~VAR_0);
}
