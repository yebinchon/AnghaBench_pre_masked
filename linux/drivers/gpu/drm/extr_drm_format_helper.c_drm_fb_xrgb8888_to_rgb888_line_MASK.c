
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static void FUNC_0(u8 *VAR_0, u32 *VAR_1,
        unsigned int VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  *VAR_0++ = (VAR_1[VAR_3] & 0x000000FF) >> 0;
  *VAR_0++ = (VAR_1[VAR_3] & 0x0000FF00) >> 8;
  *VAR_0++ = (VAR_1[VAR_3] & 0x00FF0000) >> 16;
 }
}
