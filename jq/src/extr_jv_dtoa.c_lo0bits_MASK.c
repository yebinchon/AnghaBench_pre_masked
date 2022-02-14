
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtoa_context {int dummy; } ;
typedef int ULong ;



__attribute__((used)) static int
FUNC_0
 (struct dtoa_context* VAR_0, ULong *VAR_1)
{
 int VAR_2;
 ULong VAR_3 = *VAR_1;

 if (VAR_3 & 7) {
  if (VAR_3 & 1)
   return 0;
  if (VAR_3 & 2) {
   *VAR_1 = VAR_3 >> 1;
   return 1;
   }
  *VAR_1 = VAR_3 >> 2;
  return 2;
  }
 VAR_2 = 0;
 if (!(VAR_3 & 0xffff)) {
  VAR_2 = 16;
  VAR_3 >>= 16;
  }
 if (!(VAR_3 & 0xff)) {
  VAR_2 += 8;
  VAR_3 >>= 8;
  }
 if (!(VAR_3 & 0xf)) {
  VAR_2 += 4;
  VAR_3 >>= 4;
  }
 if (!(VAR_3 & 0x3)) {
  VAR_2 += 2;
  VAR_3 >>= 2;
  }
 if (!(VAR_3 & 1)) {
  VAR_2++;
  VAR_3 >>= 1;
  if (!VAR_3)
   return 32;
  }
 *VAR_1 = VAR_3;
 return VAR_2;
 }
