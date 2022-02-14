
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rackmeter {int* ubuf; } ;



__attribute__((used)) static void FUNC_0(struct rackmeter *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 16; VAR_1++) {
  if (VAR_1 < 8)
   VAR_0->ubuf[VAR_1] = (VAR_1 & 1) * 255;
  else
   VAR_0->ubuf[VAR_1] = ((~VAR_1) & 1) * 255;
 }
}
