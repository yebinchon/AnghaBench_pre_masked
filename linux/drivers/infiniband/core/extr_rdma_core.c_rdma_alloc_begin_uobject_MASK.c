
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uverbs_attr_bundle {int context; } ;
struct uverbs_api_object {int context; TYPE_1__* type_class; } ;
struct ib_uverbs_file {int hw_destroy_rwsem; } ;
typedef struct ib_uobject {int context; TYPE_1__* type_class; } const ib_uobject ;
struct TYPE_2__ {struct uverbs_api_object* (* alloc_begin ) (struct uverbs_api_object const*,struct ib_uverbs_file*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct uverbs_api_object const* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct uverbs_api_object const*) ;
 int FUNC_2 (int *) ;
 struct uverbs_api_object* FUNC_3 (struct uverbs_api_object const*,struct ib_uverbs_file*) ;
 int FUNC_4 (int *) ;

struct ib_uobject *FUNC_5(const struct uverbs_api_object *VAR_2,
         struct ib_uverbs_file *VAR_3,
         struct uverbs_attr_bundle *VAR_4)
{
 struct ib_uobject *VAR_5;

 if (FUNC_1(VAR_2))
  return FUNC_0(-VAR_0);






 if (!FUNC_2(&VAR_3->hw_destroy_rwsem))
  return FUNC_0(-VAR_1);

 VAR_5 = VAR_2->type_class->alloc_begin(VAR_2, VAR_3);
 if (FUNC_1(VAR_5)) {
  FUNC_4(&VAR_3->hw_destroy_rwsem);
  return VAR_5;
 }
 if (VAR_4)
  VAR_4->context = VAR_5->context;
 return VAR_5;
}
