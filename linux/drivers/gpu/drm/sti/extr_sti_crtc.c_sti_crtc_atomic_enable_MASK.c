
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_mixer {int status; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_crtc*) ;
 struct sti_mixer* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_1,
       struct drm_crtc_state *VAR_2)
{
 struct sti_mixer *VAR_3 = FUNC_2(VAR_1);

 FUNC_0("\n");

 VAR_3->status = VAR_0;

 FUNC_1(VAR_1);
}
