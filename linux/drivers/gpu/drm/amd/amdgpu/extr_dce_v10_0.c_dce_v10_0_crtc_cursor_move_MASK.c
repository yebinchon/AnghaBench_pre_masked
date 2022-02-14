
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc {int dummy; } ;


 int FUNC_0 (struct drm_crtc*,int,int) ;
 int FUNC_1 (struct drm_crtc*,int) ;

__attribute__((used)) static int FUNC_2(struct drm_crtc *VAR_0,
          int VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_0, 1);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_0, 0);

 return VAR_3;
}
