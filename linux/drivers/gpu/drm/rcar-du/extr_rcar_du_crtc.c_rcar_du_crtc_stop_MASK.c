
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc {int dummy; } ;
struct rcar_du_crtc {int group; int dev; struct drm_crtc crtc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (struct rcar_du_crtc*) ;
 int FUNC_2 (struct rcar_du_crtc*,int ,int ) ;
 int FUNC_3 (struct rcar_du_crtc*) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (struct rcar_du_crtc*) ;

__attribute__((used)) static void FUNC_7(struct rcar_du_crtc *VAR_4)
{
 struct drm_crtc *VAR_5 = &VAR_4->crtc;
 FUNC_1(VAR_4);






 FUNC_3(VAR_4);
 FUNC_0(VAR_5);


 if (FUNC_5(VAR_4->dev, VAR_3))
  FUNC_6(VAR_4);
 if (FUNC_5(VAR_4->dev, VAR_2))
  FUNC_2(VAR_4, VAR_0,
        VAR_1);

 FUNC_4(VAR_4->group, 0);
}
