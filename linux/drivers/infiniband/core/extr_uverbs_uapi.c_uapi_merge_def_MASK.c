
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct uverbs_api_object {int dummy; } ;
struct uverbs_api {int dummy; } ;
struct TYPE_3__ {int object_id; } ;
struct uapi_definition {TYPE_1__ object_start; int (* func_is_supported ) (struct ib_device*) ;int needs_fn_offset; TYPE_2__* chain_obj_tree; struct uapi_definition* chain; int kind; } ;
struct ib_device {int ops; } ;
typedef enum uapi_definition_kind { ____Placeholder_uapi_definition_kind } uapi_definition_kind ;
struct TYPE_4__ {int id; } ;


 int VAR_0 ;
 int FUNC_0 (struct uverbs_api_object*) ;
 int FUNC_1 (struct uverbs_api_object*) ;







 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ib_device*) ;
 struct uverbs_api_object* FUNC_4 (struct uverbs_api*,int ,int,int*) ;
 int FUNC_5 (struct uverbs_api*,struct ib_device*,struct uapi_definition const*,int ,int *) ;
 int FUNC_6 (struct uverbs_api*,struct uapi_definition const*,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct uverbs_api*,TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_9(struct uverbs_api *VAR_2, struct ib_device *VAR_3,
     const struct uapi_definition *VAR_4,
     bool VAR_5)
{
 const struct uapi_definition *VAR_6 = VAR_4;
 u32 VAR_7 = VAR_1;
 u32 VAR_8 = VAR_1;
 bool VAR_9;
 int VAR_10;

 if (!VAR_4)
  return 0;

 for (;; VAR_6++) {
  switch ((enum uapi_definition_kind)VAR_6->kind) {
  case 134:
   VAR_10 = FUNC_9(VAR_2, VAR_3, VAR_6->chain, VAR_5);
   if (VAR_10)
    return VAR_10;
   continue;

  case 133:
   if (FUNC_2(VAR_6->object_start.object_id !=
        VAR_6->chain_obj_tree->id))
    return -VAR_0;

   VAR_7 = FUNC_7(VAR_6->object_start.object_id);
   VAR_10 = FUNC_8(VAR_2, VAR_6->chain_obj_tree,
       VAR_5);
   if (VAR_10)
    return VAR_10;
   continue;

  case 132:
   return 0;

  case 131: {
   void **VAR_11 =
    (void *)(&VAR_3->ops) + VAR_6->needs_fn_offset;

   if (*VAR_11)
    continue;
   VAR_10 = FUNC_6(
    VAR_2, VAR_6, VAR_7, VAR_8);
   if (VAR_10)
    return VAR_10;
   continue;
  }

  case 130:
   if (VAR_6->func_is_supported(VAR_3))
    continue;
   VAR_10 = FUNC_6(
    VAR_2, VAR_6, VAR_7, VAR_8);
   if (VAR_10)
    return VAR_10;
   continue;

  case 129: {
   struct uverbs_api_object *VAR_12;

   VAR_7 = FUNC_7(VAR_6->object_start.object_id);
   VAR_12 = FUNC_4(VAR_2, VAR_7,
         sizeof(*VAR_12), &VAR_9);
   if (FUNC_0(VAR_12))
    return FUNC_1(VAR_12);
   continue;
  }

  case 128:
   VAR_10 = FUNC_5(
    VAR_2, VAR_3, VAR_6, VAR_7, &VAR_8);
   if (VAR_10)
    return VAR_10;
   continue;
  }
  FUNC_2(1);
  return -VAR_0;
 }
}
