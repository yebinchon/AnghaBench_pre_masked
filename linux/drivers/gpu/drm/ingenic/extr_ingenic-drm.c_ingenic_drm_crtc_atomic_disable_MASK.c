
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ingenic_drm {int map; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ingenic_drm* FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (int ,int ,unsigned int,unsigned int,int,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_4,
         struct drm_crtc_state *VAR_5)
{
 struct ingenic_drm *VAR_6 = FUNC_0(VAR_4);
 unsigned int VAR_7;

 FUNC_1(VAR_4);

 FUNC_3(VAR_6->map, VAR_2,
      VAR_0, VAR_0);

 FUNC_2(VAR_6->map, VAR_3, VAR_7,
     VAR_7 & VAR_1,
     1000, 0);
}
