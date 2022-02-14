
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panfrost_gem_object {int node; scalar_t__ is_mapped; } ;
struct panfrost_file_priv {int mm_lock; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {struct panfrost_file_priv* driver_priv; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct panfrost_gem_object*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct panfrost_gem_object* FUNC_5 (struct drm_gem_object*) ;

__attribute__((used)) static void FUNC_6(struct drm_gem_object *VAR_0, struct drm_file *VAR_1)
{
 struct panfrost_gem_object *VAR_2 = FUNC_5(VAR_0);
 struct panfrost_file_priv *VAR_3 = VAR_1->driver_priv;

 if (VAR_2->is_mapped)
  FUNC_2(VAR_2);

 FUNC_3(&VAR_3->mm_lock);
 if (FUNC_0(&VAR_2->node))
  FUNC_1(&VAR_2->node);
 FUNC_4(&VAR_3->mm_lock);
}
