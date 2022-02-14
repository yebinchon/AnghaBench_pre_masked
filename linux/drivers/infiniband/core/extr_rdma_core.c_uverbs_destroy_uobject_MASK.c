
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uverbs_attr_bundle {struct ib_uverbs_file* ufile; } ;
struct ib_uverbs_file {int uobjects_lock; int hw_destroy_rwsem; } ;
struct ib_uobject {int list; TYPE_2__* uapi_object; int usecnt; int * context; int * object; int id; } ;
typedef enum rdma_remove_reason { ____Placeholder_rdma_remove_reason } rdma_remove_reason ;
struct TYPE_4__ {TYPE_1__* type_class; } ;
struct TYPE_3__ {int (* destroy_hw ) (struct ib_uobject*,int,struct uverbs_attr_bundle*) ;int (* remove_handle ) (struct ib_uobject*) ;int (* alloc_abort ) (struct ib_uobject*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ib_uobject*,int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int,int,struct ib_uobject*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct ib_uobject*,int,struct uverbs_attr_bundle*) ;
 int FUNC_11 (struct ib_uobject*) ;
 int FUNC_12 (struct ib_uobject*) ;
 int FUNC_13 (struct ib_uobject*) ;

__attribute__((used)) static int FUNC_14(struct ib_uobject *VAR_3,
      enum rdma_remove_reason VAR_4,
      struct uverbs_attr_bundle *VAR_5)
{
 struct ib_uverbs_file *VAR_6 = VAR_5->ufile;
 unsigned long VAR_7;
 int VAR_8;

 FUNC_7(&VAR_6->hw_destroy_rwsem);
 FUNC_2(VAR_3, VAR_2);

 if (VAR_3->object) {
  VAR_8 = VAR_3->uapi_object->type_class->destroy_hw(VAR_3, VAR_4,
        VAR_5);
  if (VAR_8) {
   if (FUNC_4(VAR_8, VAR_4, VAR_3))
    return VAR_8;


   FUNC_0(1,
        "ib_uverbs: failed to remove uobject id %d, driver err=%d",
        VAR_3->id, VAR_8);
  }

  VAR_3->object = ((void*)0);
 }

 if (VAR_4 == VAR_0) {
  FUNC_1(!FUNC_6(&VAR_3->list));
  FUNC_1(!VAR_3->context);
  VAR_3->uapi_object->type_class->alloc_abort(VAR_3);
 }

 VAR_3->context = ((void*)0);






 if (VAR_4 != VAR_1)
  FUNC_3(&VAR_3->usecnt, 0);
 else
  VAR_3->uapi_object->type_class->remove_handle(VAR_3);

 if (!FUNC_6(&VAR_3->list)) {
  FUNC_8(&VAR_6->uobjects_lock, VAR_7);
  FUNC_5(&VAR_3->list);
  FUNC_9(&VAR_6->uobjects_lock, VAR_7);





  FUNC_13(VAR_3);
 }





 if (VAR_4 == VAR_0)
  FUNC_13(VAR_3);

 return 0;
}
