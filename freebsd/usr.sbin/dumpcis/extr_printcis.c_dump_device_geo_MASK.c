
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (char*,int,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_1(u_char *VAR_0, int VAR_1)
{
 while (VAR_1 >= 6) {
  FUNC_0("\twidth = %d, erase = 0x%x, read = 0x%x, write = 0x%x\n"
         "\t\tpartition = 0x%x, interleave = 0x%x\n",
         VAR_0[0], 1 << (VAR_0[1] - 1),
         1 << (VAR_0[2] - 1), 1 << (VAR_0[3] - 1),
         1 << (VAR_0[4] - 1), 1 << (VAR_0[5] - 1));
  VAR_1 -= 6;
 }
}
