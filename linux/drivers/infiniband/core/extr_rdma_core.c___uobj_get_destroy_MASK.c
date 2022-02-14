
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uverbs_attr_bundle {int ufile; } ;
struct uverbs_api_object {int dummy; } ;
struct ib_uobject {int dummy; } ;


 struct ib_uobject* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ib_uobject*) ;
 int VAR_0 ;
 struct ib_uobject* FUNC_2 (struct uverbs_api_object const*,int ,int ,int ,struct uverbs_attr_bundle*) ;
 int FUNC_3 (struct ib_uobject*,int ) ;
 int FUNC_4 (struct ib_uobject*,struct uverbs_attr_bundle*) ;

struct ib_uobject *FUNC_5(const struct uverbs_api_object *VAR_1,
          u32 VAR_2, struct uverbs_attr_bundle *VAR_3)
{
 struct ib_uobject *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_1, VAR_3->ufile, VAR_2,
           VAR_0, VAR_3);
 if (FUNC_1(VAR_4))
  return VAR_4;

 VAR_5 = FUNC_4(VAR_4, VAR_3);
 if (VAR_5) {
  FUNC_3(VAR_4, VAR_0);
  return FUNC_0(VAR_5);
 }

 return VAR_4;
}
