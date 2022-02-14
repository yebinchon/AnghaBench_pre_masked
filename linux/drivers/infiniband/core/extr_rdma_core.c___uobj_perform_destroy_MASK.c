
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uverbs_attr_bundle {int dummy; } ;
struct uverbs_api_object {int dummy; } ;
struct ib_uobject {int dummy; } ;


 scalar_t__ FUNC_0 (struct ib_uobject*) ;
 int FUNC_1 (struct ib_uobject*) ;
 int VAR_0 ;
 struct ib_uobject* FUNC_2 (struct uverbs_api_object const*,int ,struct uverbs_attr_bundle*) ;
 int FUNC_3 (struct ib_uobject*,int ) ;

int FUNC_4(const struct uverbs_api_object *VAR_1, u32 VAR_2,
      struct uverbs_attr_bundle *VAR_3)
{
 struct ib_uobject *VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_3(VAR_4, VAR_0);
 return 0;
}
