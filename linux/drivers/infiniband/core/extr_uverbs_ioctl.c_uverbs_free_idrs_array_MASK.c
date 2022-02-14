
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uverbs_objs_arr_attr {size_t len; int * uobjects; } ;
struct TYPE_3__ {int access; } ;
struct TYPE_4__ {TYPE_1__ objs_arr; } ;
struct uverbs_attr_spec {TYPE_2__ u2; } ;
struct uverbs_attr_bundle {int dummy; } ;
struct uverbs_api_attr {struct uverbs_attr_spec spec; } ;


 int FUNC_0 (int ,int ,int,struct uverbs_attr_bundle*) ;

__attribute__((used)) static int FUNC_1(const struct uverbs_api_attr *VAR_0,
      struct uverbs_objs_arr_attr *VAR_1,
      bool VAR_2, struct uverbs_attr_bundle *VAR_3)
{
 const struct uverbs_attr_spec *VAR_4 = &VAR_0->spec;
 int VAR_5;
 int VAR_6 = 0;
 size_t VAR_7;

 for (VAR_7 = 0; VAR_7 != VAR_1->len; VAR_7++) {
  VAR_5 = FUNC_0(VAR_1->uobjects[VAR_7],
           VAR_4->u2.objs_arr.access,
           VAR_2, VAR_3);
  if (!VAR_6)
   VAR_6 = VAR_5;
 }

 return VAR_6;
}
