
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uverbs_api_object {int dummy; } ;
struct ib_uverbs_file {int idr; } ;
struct ib_uobject {int id; TYPE_1__* context; int cg_obj; } ;
struct TYPE_2__ {int device; } ;


 struct ib_uobject* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ib_uobject*) ;
 int VAR_0 ;
 struct ib_uobject* FUNC_2 (struct ib_uverbs_file*,struct uverbs_api_object const*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct ib_uobject*) ;
 int FUNC_5 (struct ib_uobject*) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static struct ib_uobject *
FUNC_7(const struct uverbs_api_object *VAR_1,
   struct ib_uverbs_file *VAR_2)
{
 int VAR_3;
 struct ib_uobject *VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_1);
 if (FUNC_1(VAR_4))
  return VAR_4;

 VAR_3 = FUNC_4(VAR_4);
 if (VAR_3)
  goto uobj_put;

 VAR_3 = FUNC_3(&VAR_4->cg_obj, VAR_4->context->device,
       VAR_0);
 if (VAR_3)
  goto remove;

 return VAR_4;

remove:
 FUNC_6(&VAR_2->idr, VAR_4->id);
uobj_put:
 FUNC_5(VAR_4);
 return FUNC_0(VAR_3);
}
