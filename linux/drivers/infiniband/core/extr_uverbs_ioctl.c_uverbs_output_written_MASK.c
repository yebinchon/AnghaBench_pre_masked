
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uverbs_attr_bundle {int dummy; } ;
struct uverbs_attr {int dummy; } ;


 scalar_t__ FUNC_0 (struct uverbs_attr const*) ;
 int FUNC_1 (struct uverbs_attr const*) ;
 struct uverbs_attr* FUNC_2 (struct uverbs_attr_bundle const*,size_t) ;
 int FUNC_3 (struct uverbs_attr_bundle const*,struct uverbs_attr const*) ;

int FUNC_4(const struct uverbs_attr_bundle *VAR_0, size_t VAR_1)
{
 const struct uverbs_attr *VAR_2 = FUNC_2(VAR_0, VAR_1);

 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 return FUNC_3(VAR_0, VAR_2);
}
