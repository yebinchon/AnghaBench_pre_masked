
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_du_crtc {size_t sources_count; char const* const* sources; } ;
struct drm_crtc {int dummy; } ;


 struct rcar_du_crtc* FUNC_0 (struct drm_crtc*) ;

__attribute__((used)) static const char *const *
FUNC_1(struct drm_crtc *VAR_0, size_t *VAR_1)
{
 struct rcar_du_crtc *VAR_2 = FUNC_0(VAR_0);

 *VAR_1 = VAR_2->sources_count;
 return VAR_2->sources;
}
