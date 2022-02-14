
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uverbs_attr_bundle {int dummy; } ;
struct TYPE_2__ {size_t len; int data; } ;
struct uverbs_attr {TYPE_1__ ptr_attr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,size_t) ;
 scalar_t__ FUNC_1 (int ) ;
 struct uverbs_attr* FUNC_2 (struct uverbs_attr_bundle const*,size_t) ;
 int FUNC_3 (struct uverbs_attr_bundle const*,size_t,void const*,size_t) ;

int FUNC_4(const struct uverbs_attr_bundle *VAR_1,
      size_t VAR_2, const void *VAR_3, size_t VAR_4)
{
 const struct uverbs_attr *VAR_5 = FUNC_2(VAR_1, VAR_2);

 if (VAR_4 < VAR_5->ptr_attr.len) {
  if (FUNC_0(FUNC_1(VAR_5->ptr_attr.data) + VAR_4,
          VAR_5->ptr_attr.len - VAR_4))
   return -VAR_0;
 }
 return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
}
