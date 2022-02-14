
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmap {int size; unsigned char* map; } ;



int
FUNC_0(struct bitmap * VAR_0)
{
 int VAR_1 = (VAR_0->size / 8) + !!(VAR_0->size % 8);
 int VAR_2 = 0;
 int VAR_3 = 0;

 while (VAR_3 < VAR_1) {
  unsigned char VAR_4 = VAR_0->map[VAR_3++];
  unsigned char VAR_5 = 1;

  while (VAR_5 & 0xff) {
   if ((VAR_4 & VAR_5) == 0)
    return VAR_2;
   VAR_5 <<= 1;
   ++VAR_2;
  }
 }
 return VAR_2;
}
