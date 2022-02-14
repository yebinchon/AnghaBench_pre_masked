
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fd {TYPE_1__* file; } ;
struct drm_syncobj {int dummy; } ;
struct drm_file {int syncobj_table_lock; int syncobj_idr; } ;
struct TYPE_2__ {struct drm_syncobj* private_data; int * f_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_syncobj*) ;
 int FUNC_1 (struct drm_syncobj*) ;
 struct fd FUNC_2 (int) ;
 int FUNC_3 (struct fd) ;
 int FUNC_4 (int *,struct drm_syncobj*,int,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct drm_file *VAR_4,
        int VAR_5, u32 *VAR_6)
{
 struct drm_syncobj *VAR_7;
 struct fd VAR_8 = FUNC_2(VAR_5);
 int VAR_9;

 if (!VAR_8.file)
  return -VAR_0;

 if (VAR_8.file->f_op != &VAR_3) {
  FUNC_3(VAR_8);
  return -VAR_0;
 }


 VAR_7 = VAR_8.file->private_data;
 FUNC_0(VAR_7);

 FUNC_5(VAR_1);
 FUNC_7(&VAR_4->syncobj_table_lock);
 VAR_9 = FUNC_4(&VAR_4->syncobj_idr, VAR_7, 1, 0, VAR_2);
 FUNC_8(&VAR_4->syncobj_table_lock);
 FUNC_6();

 if (VAR_9 > 0) {
  *VAR_6 = VAR_9;
  VAR_9 = 0;
 } else
  FUNC_1(VAR_7);

 FUNC_3(VAR_8);
 return VAR_9;
}
