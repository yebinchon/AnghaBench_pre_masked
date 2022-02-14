
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_syncobj {int dummy; } ;
struct drm_file {int syncobj_table_lock; int syncobj_idr; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_syncobj*) ;
 struct drm_syncobj* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct drm_file *VAR_1,
          u32 VAR_2)
{
 struct drm_syncobj *VAR_3;

 FUNC_2(&VAR_1->syncobj_table_lock);
 VAR_3 = FUNC_1(&VAR_1->syncobj_idr, VAR_2);
 FUNC_3(&VAR_1->syncobj_table_lock);

 if (!VAR_3)
  return -VAR_0;

 FUNC_0(VAR_3);
 return 0;
}
