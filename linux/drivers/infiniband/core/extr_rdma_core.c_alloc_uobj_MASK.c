
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uverbs_api_object {TYPE_1__* type_attrs; } ;
struct ib_uverbs_file {int dummy; } ;
struct ib_uobject {int ref; int usecnt; struct uverbs_api_object const* uapi_object; int list; struct ib_ucontext* context; struct ib_uverbs_file* ufile; } ;
struct ib_ucontext {int dummy; } ;
struct TYPE_2__ {int obj_size; } ;


 int VAR_0 ;
 struct ib_uobject* FUNC_0 (struct ib_ucontext*) ;
 struct ib_uobject* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct ib_ucontext*) ;
 int FUNC_4 (int *,int) ;
 struct ib_ucontext* FUNC_5 (struct ib_uverbs_file*) ;
 int FUNC_6 (int *) ;
 struct ib_uobject* FUNC_7 (int ,int ) ;

__attribute__((used)) static struct ib_uobject *FUNC_8(struct ib_uverbs_file *VAR_2,
         const struct uverbs_api_object *VAR_3)
{
 struct ib_uobject *VAR_4;
 struct ib_ucontext *VAR_5;

 VAR_5 = FUNC_5(VAR_2);
 if (FUNC_3(VAR_5))
  return FUNC_0(VAR_5);

 VAR_4 = FUNC_7(VAR_3->type_attrs->obj_size, VAR_1);
 if (!VAR_4)
  return FUNC_1(-VAR_0);




 VAR_4->ufile = VAR_2;
 VAR_4->context = VAR_5;
 FUNC_2(&VAR_4->list);
 VAR_4->uapi_object = VAR_3;





 FUNC_4(&VAR_4->usecnt, -1);
 FUNC_6(&VAR_4->ref);

 return VAR_4;
}
