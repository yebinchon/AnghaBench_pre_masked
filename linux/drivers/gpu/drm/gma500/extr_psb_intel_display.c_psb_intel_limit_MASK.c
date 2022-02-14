
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gma_limit_t {int dummy; } ;
struct drm_crtc {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct drm_crtc*,int ) ;
 struct gma_limit_t* VAR_3 ;

__attribute__((used)) static const struct gma_limit_t *FUNC_1(struct drm_crtc *VAR_4,
       int VAR_5)
{
 const struct gma_limit_t *VAR_6;

 if (FUNC_0(VAR_4, VAR_2))
  VAR_6 = &VAR_3[VAR_0];
 else
  VAR_6 = &VAR_3[VAR_1];
 return VAR_6;
}
