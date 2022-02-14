
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct komeda_crtc_state {int dummy; } ;
struct komeda_crtc {int master; int slave; } ;
struct drm_crtc_state {scalar_t__ active; } ;
struct drm_crtc {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_crtc_state*) ;
 int FUNC_1 (struct komeda_crtc*,struct komeda_crtc_state*) ;
 int FUNC_2 (struct komeda_crtc_state*) ;
 int FUNC_3 (int ,struct komeda_crtc_state*) ;
 struct komeda_crtc* FUNC_4 (struct drm_crtc*) ;
 struct komeda_crtc_state* FUNC_5 (struct drm_crtc_state*) ;

__attribute__((used)) static int
FUNC_6(struct drm_crtc *VAR_0,
    struct drm_crtc_state *VAR_1)
{
 struct komeda_crtc *VAR_2 = FUNC_4(VAR_0);
 struct komeda_crtc_state *VAR_3 = FUNC_5(VAR_1);
 int VAR_4;

 if (FUNC_0(VAR_1))
  FUNC_2(VAR_3);

 if (VAR_1->active) {
  VAR_4 = FUNC_1(VAR_2, VAR_3);
  if (VAR_4)
   return VAR_4;
 }


 VAR_4 = FUNC_3(VAR_2->slave, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_2->master, VAR_3);
 if (VAR_4)
  return VAR_4;

 return 0;
}
