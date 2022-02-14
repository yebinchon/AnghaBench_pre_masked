
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {size_t lo; void const* buffer; scalar_t__ hi; } ;
typedef TYPE_1__ MD5_CTX ;


 void* FUNC_0 (TYPE_1__*,void const*,size_t) ;
 int FUNC_1 (void const*,void const*,size_t) ;

__attribute__((used)) static void
FUNC_2(const void *VAR_0, size_t VAR_1, MD5_CTX *VAR_2)
{
 uint32_t VAR_3;
 unsigned long VAR_4, VAR_5;

 VAR_3 = VAR_2->lo;
 if ((VAR_2->lo = (VAR_3 + VAR_1) & 0x1fffffff) < VAR_3)
  VAR_2->hi++;
 VAR_2->hi += VAR_1 >> 29;

 VAR_4 = VAR_3 & 0x3f;

 if (VAR_4) {
  VAR_5 = 64 - VAR_4;

  if (VAR_1 < VAR_5) {
   FUNC_1(&VAR_2->buffer[VAR_4], VAR_0, VAR_1);
   return;
  }

  FUNC_1(&VAR_2->buffer[VAR_4], VAR_0, VAR_5);
  VAR_0 = (const unsigned char *)VAR_0 + VAR_5;
  VAR_1 -= VAR_5;
  FUNC_0(VAR_2, VAR_2->buffer, 64);
 }

 if (VAR_1 >= 64) {
  VAR_0 = FUNC_0(VAR_2, VAR_0, VAR_1 & ~((size_t) 0x3f));
  VAR_1 &= 0x3f;
 }

 FUNC_1(VAR_2->buffer, VAR_0, VAR_1);
}
