
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_fb_helper {int lock; } ;


 int FUNC_0 (struct drm_fb_helper*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

int FUNC_2(struct drm_fb_helper *VAR_1, int VAR_2)
{
 int VAR_3;

 if (!VAR_0)
  return 0;

 FUNC_1(&VAR_1->lock);
 VAR_3 = FUNC_0(VAR_1, VAR_2);

 return VAR_3;
}
