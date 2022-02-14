
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtoa_context {int dummy; } ;
typedef int ULong ;



__attribute__((used)) static int
FUNC_0
 (struct dtoa_context* VAR_0, ULong VAR_1)
{
 int VAR_2 = 0;

 if (!(VAR_1 & 0xffff0000)) {
  VAR_2 = 16;
  VAR_1 <<= 16;
  }
 if (!(VAR_1 & 0xff000000)) {
  VAR_2 += 8;
  VAR_1 <<= 8;
  }
 if (!(VAR_1 & 0xf0000000)) {
  VAR_2 += 4;
  VAR_1 <<= 4;
  }
 if (!(VAR_1 & 0xc0000000)) {
  VAR_2 += 2;
  VAR_1 <<= 2;
  }
 if (!(VAR_1 & 0x80000000)) {
  VAR_2++;
  if (!(VAR_1 & 0x40000000))
   return 32;
  }
 return VAR_2;
 }
