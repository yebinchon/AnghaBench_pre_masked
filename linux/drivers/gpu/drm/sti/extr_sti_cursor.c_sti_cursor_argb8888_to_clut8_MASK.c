
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int* base; } ;
struct sti_cursor {unsigned int height; unsigned int width; TYPE_1__ pixmap; } ;



__attribute__((used)) static void FUNC_0(struct sti_cursor *VAR_0, u32 *VAR_1)
{
 u8 *VAR_2 = VAR_0->pixmap.base;
 unsigned int VAR_3, VAR_4;
 u32 VAR_5, VAR_6, VAR_7, VAR_8;

 for (VAR_3 = 0; VAR_3 < VAR_0->height; VAR_3++) {
  for (VAR_4 = 0; VAR_4 < VAR_0->width; VAR_4++) {

   VAR_5 = (*VAR_1 >> 30) & 3;
   VAR_6 = (*VAR_1 >> 22) & 3;
   VAR_7 = (*VAR_1 >> 14) & 3;
   VAR_8 = (*VAR_1 >> 6) & 3;
   *VAR_2 = VAR_5 << 6 | VAR_6 << 4 | VAR_7 << 2 | VAR_8;
   VAR_1++;
   VAR_2++;
  }
 }
}
