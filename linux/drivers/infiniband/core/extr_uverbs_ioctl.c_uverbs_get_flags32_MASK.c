
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct uverbs_attr_bundle {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__*,struct uverbs_attr_bundle const*,size_t,scalar_t__) ;

int FUNC_1(u32 *VAR_2, const struct uverbs_attr_bundle *VAR_3,
         size_t VAR_4, u64 VAR_5)
{
 u64 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(&VAR_6, VAR_3, VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;

 if (VAR_6 > VAR_1)
  return -VAR_0;
 *VAR_2 = VAR_6;

 return 0;
}
