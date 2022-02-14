
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dc_state {int base; } ;
struct drm_crtc {scalar_t__ state; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_crtc*,int *) ;
 int FUNC_1 (struct drm_crtc*) ;
 struct tegra_dc_state* FUNC_2 (int,int ) ;
 int FUNC_3 (struct drm_crtc*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_1)
{
 struct tegra_dc_state *VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);

 if (VAR_1->state)
  FUNC_3(VAR_1, VAR_1->state);

 FUNC_0(VAR_1, &VAR_2->base);
 FUNC_1(VAR_1);
}
