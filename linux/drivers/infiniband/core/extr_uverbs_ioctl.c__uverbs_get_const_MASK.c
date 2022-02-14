
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct uverbs_attr_bundle {int dummy; } ;
struct TYPE_2__ {scalar_t__ data; } ;
struct uverbs_attr {TYPE_1__ ptr_attr; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct uverbs_attr const*) ;
 int FUNC_1 (struct uverbs_attr const*) ;
 struct uverbs_attr* FUNC_2 (struct uverbs_attr_bundle const*,size_t) ;

int FUNC_3(s64 *VAR_2, const struct uverbs_attr_bundle *VAR_3,
        size_t VAR_4, s64 VAR_5, u64 VAR_6,
        s64 *VAR_7)
{
 const struct uverbs_attr *VAR_8;

 VAR_8 = FUNC_2(VAR_3, VAR_4);
 if (FUNC_0(VAR_8)) {
  if ((FUNC_1(VAR_8) != -VAR_1) || !VAR_7)
   return FUNC_1(VAR_8);

  *VAR_2 = *VAR_7;
 } else {
  *VAR_2 = VAR_8->ptr_attr.data;
 }

 if (*VAR_2 < VAR_5 || (*VAR_2 > 0 && (u64)*VAR_2 > VAR_6))
  return -VAR_0;

 return 0;
}
