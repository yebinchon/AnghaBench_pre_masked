
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t outlen; scalar_t__ outbuf; } ;
struct uverbs_attr_bundle {TYPE_1__ ucore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,size_t) ;
 scalar_t__ FUNC_1 (scalar_t__,void const*,int ) ;
 int FUNC_2 (size_t,size_t) ;
 scalar_t__ FUNC_3 (struct uverbs_attr_bundle*,int ) ;
 int FUNC_4 (struct uverbs_attr_bundle*,int ,void const*,size_t) ;

__attribute__((used)) static int FUNC_5(struct uverbs_attr_bundle *VAR_2, const void *VAR_3,
      size_t VAR_4)
{
 int VAR_5;

 if (FUNC_3(VAR_2, VAR_1))
  return FUNC_4(
   VAR_2, VAR_1, VAR_3, VAR_4);

 if (FUNC_1(VAR_2->ucore.outbuf, VAR_3,
    FUNC_2(VAR_2->ucore.outlen, VAR_4)))
  return -VAR_0;

 if (VAR_4 < VAR_2->ucore.outlen) {




  VAR_5 = FUNC_0(VAR_2->ucore.outbuf + VAR_4,
     VAR_2->ucore.outlen - VAR_4);
  if (VAR_5)
   return -VAR_0;
 }

 return 0;
}
