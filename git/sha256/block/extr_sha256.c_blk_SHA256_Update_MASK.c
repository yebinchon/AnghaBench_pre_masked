
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; void const* buf; } ;
typedef TYPE_1__ blk_SHA256_CTX ;


 int FUNC_0 (TYPE_1__*,void const*) ;
 int FUNC_1 (void const*,void const*,size_t) ;

void FUNC_2(blk_SHA256_CTX *VAR_0, const void *VAR_1, size_t VAR_2)
{
 unsigned int VAR_3 = VAR_0->size & 63;

 VAR_0->size += VAR_2;


 if (VAR_3) {
  unsigned int VAR_4 = 64 - VAR_3;
  if (VAR_2 < VAR_4)
   VAR_4 = VAR_2;
  FUNC_1(VAR_3 + VAR_0->buf, VAR_1, VAR_4);
  VAR_3 = (VAR_3 + VAR_4) & 63;
  VAR_2 -= VAR_4;
  VAR_1 = ((const char *)VAR_1 + VAR_4);
  if (VAR_3)
   return;
  FUNC_0(VAR_0, VAR_0->buf);
 }
 while (VAR_2 >= 64) {
  FUNC_0(VAR_0, VAR_1);
  VAR_1 = ((const char *)VAR_1 + 64);
  VAR_2 -= 64;
 }
 if (VAR_2)
  FUNC_1(VAR_0->buf, VAR_1, VAR_2);
}
