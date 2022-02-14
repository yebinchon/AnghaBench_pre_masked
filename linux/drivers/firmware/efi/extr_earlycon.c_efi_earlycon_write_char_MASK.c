
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int* data; unsigned char height; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_0(u32 *VAR_1, unsigned char VAR_2, unsigned int VAR_3)
{
 const u32 VAR_4 = 0x00000000;
 const u32 VAR_5 = 0x00ffffff;
 const u8 *VAR_6;
 u8 VAR_7;
 int VAR_8;

 VAR_6 = VAR_0->data + VAR_2 * VAR_0->height;
 VAR_7 = *(VAR_6 + VAR_3);

 for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
  if ((VAR_7 >> (7 - VAR_8)) & 1)
   *VAR_1 = VAR_5;
  else
   *VAR_1 = VAR_4;
  VAR_1++;
 }
}
