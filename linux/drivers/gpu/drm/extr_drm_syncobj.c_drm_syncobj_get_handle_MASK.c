
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_syncobj {int dummy; } ;
struct drm_file {int syncobj_table_lock; int syncobj_idr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_syncobj*) ;
 int FUNC_1 (struct drm_syncobj*) ;
 int FUNC_2 (int *,struct drm_syncobj*,int,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct drm_file *VAR_2,
      struct drm_syncobj *VAR_3, u32 *VAR_4)
{
 int VAR_5;


 FUNC_0(VAR_3);

 FUNC_3(VAR_0);
 FUNC_5(&VAR_2->syncobj_table_lock);
 VAR_5 = FUNC_2(&VAR_2->syncobj_idr, VAR_3, 1, 0, VAR_1);
 FUNC_6(&VAR_2->syncobj_table_lock);

 FUNC_4();

 if (VAR_5 < 0) {
  FUNC_1(VAR_3);
  return VAR_5;
 }

 *VAR_4 = VAR_5;
 return 0;
}
