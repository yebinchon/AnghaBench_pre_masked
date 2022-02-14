
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vkms_output {int composer_enabled; int lock; } ;
struct drm_crtc {int dummy; } ;


 struct vkms_output* FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,int*) ;

int FUNC_4(struct drm_crtc *VAR_0, const char *VAR_1)
{
 struct vkms_output *VAR_2 = FUNC_0(VAR_0);
 bool VAR_3 = 0;
 int VAR_4 = 0;

 VAR_4 = FUNC_3(VAR_1, &VAR_3);

 FUNC_1(&VAR_2->lock);
 VAR_2->composer_enabled = VAR_3;
 FUNC_2(&VAR_2->lock);

 return VAR_4;
}
