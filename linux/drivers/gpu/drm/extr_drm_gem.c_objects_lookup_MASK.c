
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int table_lock; int object_idr; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_gem_object*) ;
 struct drm_gem_object* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct drm_file *VAR_1, u32 *VAR_2, int VAR_3,
     struct drm_gem_object **VAR_4)
{
 int VAR_5, VAR_6 = 0;
 struct drm_gem_object *VAR_7;

 FUNC_2(&VAR_1->table_lock);

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {

  VAR_7 = FUNC_1(&VAR_1->object_idr, VAR_2[VAR_5]);
  if (!VAR_7) {
   VAR_6 = -VAR_0;
   break;
  }
  FUNC_0(VAR_7);
  VAR_4[VAR_5] = VAR_7;
 }
 FUNC_3(&VAR_1->table_lock);

 return VAR_6;
}
