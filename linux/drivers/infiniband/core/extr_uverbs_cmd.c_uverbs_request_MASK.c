
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t inlen; scalar_t__ inbuf; } ;
struct uverbs_attr_bundle {TYPE_1__ ucore; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,size_t) ;
 int FUNC_2 (void*,int ,size_t) ;
 int FUNC_3 (size_t,size_t) ;

__attribute__((used)) static int FUNC_4(struct uverbs_attr_bundle *VAR_2, void *VAR_3,
     size_t VAR_4)
{
 if (FUNC_0(VAR_3, VAR_2->ucore.inbuf,
      FUNC_3(VAR_2->ucore.inlen, VAR_4)))
  return -VAR_0;

 if (VAR_2->ucore.inlen < VAR_4) {
  FUNC_2(VAR_3 + VAR_2->ucore.inlen, 0,
         VAR_4 - VAR_2->ucore.inlen);
 } else if (VAR_2->ucore.inlen > VAR_4) {
  if (!FUNC_1(VAR_2->ucore.inbuf + VAR_4,
       VAR_2->ucore.inlen - VAR_4))
   return -VAR_1;
 }
 return 0;
}
