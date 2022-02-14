
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_vou_hw {int dummy; } ;
struct zx_crtc {struct zx_vou_hw* vou; } ;
struct drm_crtc {int dummy; } ;


 struct zx_crtc* FUNC_0 (struct drm_crtc*) ;

__attribute__((used)) static inline struct zx_vou_hw *FUNC_1(struct drm_crtc *VAR_0)
{
 struct zx_crtc *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->vou;
}
