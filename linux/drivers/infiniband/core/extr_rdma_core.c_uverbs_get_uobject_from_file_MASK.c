
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct uverbs_attr_bundle {TYPE_2__* ufile; } ;
struct uverbs_api_object {int dummy; } ;
struct ib_uobject {int dummy; } ;
typedef int s64 ;
typedef enum uverbs_obj_access { ____Placeholder_uverbs_obj_access } uverbs_obj_access ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_4__ {int uapi; } ;


 int VAR_0 ;
 struct ib_uobject* FUNC_0 (int ) ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 struct ib_uobject* FUNC_2 (struct uverbs_api_object const*,TYPE_2__*,struct uverbs_attr_bundle*) ;
 struct ib_uobject* FUNC_3 (struct uverbs_api_object const*,TYPE_2__*,int ,int ,struct uverbs_attr_bundle*) ;
 struct uverbs_api_object* FUNC_4 (int ,int ) ;

struct ib_uobject *
FUNC_5(u16 VAR_4, enum uverbs_obj_access VAR_5,
        s64 VAR_6, struct uverbs_attr_bundle *VAR_7)
{
 const struct uverbs_api_object *VAR_8 =
  FUNC_4(VAR_7->ufile->device->uapi, VAR_4);

 switch (VAR_5) {
 case 129:
  return FUNC_3(VAR_8, VAR_7->ufile, VAR_6,
            VAR_2, VAR_7);
 case 131:

  return FUNC_3(VAR_8, VAR_7->ufile, VAR_6,
            VAR_1, VAR_7);
 case 128:
  return FUNC_3(VAR_8, VAR_7->ufile, VAR_6,
            VAR_3, VAR_7);
 case 130:
  return FUNC_2(VAR_8, VAR_7->ufile, VAR_7);
 default:
  FUNC_1(1);
  return FUNC_0(-VAR_0);
 }
}
