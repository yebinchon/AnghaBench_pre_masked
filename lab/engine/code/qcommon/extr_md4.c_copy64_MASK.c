
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ byte ;



__attribute__((used)) static void FUNC_0(uint32_t *VAR_0, byte *VAR_1)
{
 int VAR_2;

 for (VAR_2=0;VAR_2<16;VAR_2++)
  VAR_0[VAR_2] =
   ((uint32_t)VAR_1[VAR_2*4+3] << 24) |
   ((uint32_t)VAR_1[VAR_2*4+2] << 16) |
   ((uint32_t)VAR_1[VAR_2*4+1] << 8) |
   ((uint32_t)VAR_1[VAR_2*4+0] << 0) ;
}
