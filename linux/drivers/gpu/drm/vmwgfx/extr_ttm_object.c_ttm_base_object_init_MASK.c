
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_object_file {struct ttm_object_device* tdev; } ;
struct ttm_object_device {int object_lock; int idr; } ;
struct ttm_base_object {int shareable; void (* refcount_release ) (struct ttm_base_object**) ;void (* ref_obj_release ) (struct ttm_base_object*,int) ;int object_type; int handle; int refcount; int tfile; } ;
typedef enum ttm_object_type { ____Placeholder_ttm_object_type } ttm_object_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct ttm_base_object*,int,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ttm_base_object**) ;
 int FUNC_8 (struct ttm_object_file*) ;
 int FUNC_9 (struct ttm_object_file*,struct ttm_base_object*,int ,int *,int) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct ttm_object_file *VAR_3,
    struct ttm_base_object *VAR_4,
    bool VAR_5,
    enum ttm_object_type VAR_6,
    void (*VAR_7) (struct ttm_base_object **),
    void (*VAR_8) (struct ttm_base_object *,
        enum ttm_ref_type VAR_9))
{
 struct ttm_object_device *VAR_10 = VAR_3->tdev;
 int VAR_11;

 VAR_4->shareable = VAR_5;
 VAR_4->tfile = FUNC_8(VAR_3);
 VAR_4->refcount_release = VAR_7;
 VAR_4->ref_obj_release = VAR_8;
 VAR_4->object_type = VAR_6;
 FUNC_4(&VAR_4->refcount);
 FUNC_1(VAR_0);
 FUNC_5(&VAR_10->object_lock);
 VAR_11 = FUNC_0(&VAR_10->idr, VAR_4, 1, 0, VAR_1);
 FUNC_6(&VAR_10->object_lock);
 FUNC_2();
 if (VAR_11 < 0)
  return VAR_11;

 VAR_4->handle = VAR_11;
 VAR_11 = FUNC_9(VAR_3, VAR_4, VAR_2, ((void*)0), 0);
 if (FUNC_10(VAR_11 != 0))
  goto out_err1;

 FUNC_7(&VAR_4);

 return 0;
out_err1:
 FUNC_5(&VAR_10->object_lock);
 FUNC_3(&VAR_10->idr, VAR_4->handle);
 FUNC_6(&VAR_10->object_lock);
 return VAR_11;
}
