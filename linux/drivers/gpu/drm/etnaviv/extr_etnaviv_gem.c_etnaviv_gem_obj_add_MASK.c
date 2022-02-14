
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_gem_object {int gem_node; } ;
struct etnaviv_drm_private {int gem_lock; int gem_list; } ;
struct drm_gem_object {int dummy; } ;
struct drm_device {struct etnaviv_drm_private* dev_private; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct etnaviv_gem_object* FUNC_3 (struct drm_gem_object*) ;

void FUNC_4(struct drm_device *VAR_0, struct drm_gem_object *VAR_1)
{
 struct etnaviv_drm_private *VAR_2 = VAR_0->dev_private;
 struct etnaviv_gem_object *VAR_3 = FUNC_3(VAR_1);

 FUNC_1(&VAR_2->gem_lock);
 FUNC_0(&VAR_3->gem_node, &VAR_2->gem_list);
 FUNC_2(&VAR_2->gem_lock);
}
