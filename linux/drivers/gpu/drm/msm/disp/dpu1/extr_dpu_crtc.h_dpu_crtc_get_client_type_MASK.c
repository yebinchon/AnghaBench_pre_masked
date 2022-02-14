
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc {scalar_t__ state; } ;
typedef enum dpu_crtc_client_type { ____Placeholder_dpu_crtc_client_type } dpu_crtc_client_type ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline enum dpu_crtc_client_type FUNC_0(
      struct drm_crtc *VAR_2)
{
 return VAR_2 && VAR_2->state ? VAR_1 : VAR_0;
}
