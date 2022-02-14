
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uverbs_attr_bundle {int context; } ;
struct uverbs_api_object {TYPE_2__* type_class; struct uverbs_api_object const* uapi_object; int context; } ;
struct ib_uverbs_file {TYPE_1__* device; } ;
typedef struct ib_uobject {TYPE_2__* type_class; struct ib_uobject const* uapi_object; int context; } const ib_uobject ;
typedef int s64 ;
typedef enum rdma_lookup_mode { ____Placeholder_rdma_lookup_mode } rdma_lookup_mode ;
struct TYPE_4__ {int (* lookup_put ) (struct uverbs_api_object const*,int) ;struct uverbs_api_object* (* lookup_get ) (struct uverbs_api_object const*,struct ib_uverbs_file*,int ,int) ;} ;
struct TYPE_3__ {int disassociate_srcu; int ib_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct uverbs_api_object const* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct uverbs_api_object const*) ;
 int VAR_3 ;
 struct uverbs_api_object* FUNC_2 (int *,struct ib_uverbs_file*,int ,int) ;
 int FUNC_3 (int ,int *) ;
 struct uverbs_api_object* FUNC_4 (struct uverbs_api_object const*,struct ib_uverbs_file*,int ,int) ;
 int FUNC_5 (struct uverbs_api_object const*,int) ;
 int FUNC_6 (struct uverbs_api_object const*,int) ;
 int FUNC_7 (struct uverbs_api_object const*) ;

struct ib_uobject *FUNC_8(const struct uverbs_api_object *VAR_4,
        struct ib_uverbs_file *VAR_5, s64 VAR_6,
        enum rdma_lookup_mode VAR_7,
        struct uverbs_attr_bundle *VAR_8)
{
 struct ib_uobject *VAR_9;
 int VAR_10;

 if (VAR_4 == FUNC_0(-VAR_2)) {

  VAR_9 = FUNC_2(((void*)0), VAR_5, VAR_6, VAR_7);
  if (FUNC_1(VAR_9))
   return VAR_9;
 } else {
  if (FUNC_1(VAR_4))
   return FUNC_0(-VAR_0);

  VAR_9 = VAR_4->type_class->lookup_get(VAR_4, VAR_5, VAR_6, VAR_7);
  if (FUNC_1(VAR_9))
   return VAR_9;

  if (VAR_9->uapi_object != VAR_4) {
   VAR_10 = -VAR_0;
   goto free;
  }
 }





 if (VAR_7 != VAR_3 &&
     !FUNC_3(VAR_5->device->ib_dev,
         &VAR_5->device->disassociate_srcu)) {
  VAR_10 = -VAR_1;
  goto free;
 }

 VAR_10 = FUNC_6(VAR_9, VAR_7);
 if (VAR_10)
  goto free;
 if (VAR_8)
  VAR_8->context = VAR_9->context;

 return VAR_9;
free:
 VAR_9->uapi_object->type_class->lookup_put(VAR_9, VAR_7);
 FUNC_7(VAR_9);
 return FUNC_0(VAR_10);
}
