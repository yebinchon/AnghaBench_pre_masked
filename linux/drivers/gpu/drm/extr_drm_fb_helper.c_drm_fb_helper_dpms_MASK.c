
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {struct drm_fb_helper* par; } ;
struct drm_fb_helper {int lock; int client; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_0, int VAR_1)
{
 struct drm_fb_helper *VAR_2 = VAR_0->par;

 FUNC_1(&VAR_2->lock);
 FUNC_0(&VAR_2->client, VAR_1);
 FUNC_2(&VAR_2->lock);
}
