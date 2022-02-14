
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int table_lock; int object_idr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (int ,struct drm_gem_object*,struct drm_file*) ;
 int FUNC_2 (int *,int ) ;
 struct drm_gem_object* FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct drm_file *VAR_1, u32 VAR_2)
{
 struct drm_gem_object *VAR_3;

 FUNC_4(&VAR_1->table_lock);


 VAR_3 = FUNC_3(&VAR_1->object_idr, ((void*)0), VAR_2);
 FUNC_5(&VAR_1->table_lock);
 if (FUNC_0(VAR_3))
  return -VAR_0;


 FUNC_1(VAR_2, VAR_3, VAR_1);


 FUNC_4(&VAR_1->table_lock);
 FUNC_2(&VAR_1->object_idr, VAR_2);
 FUNC_5(&VAR_1->table_lock);

 return 0;
}
