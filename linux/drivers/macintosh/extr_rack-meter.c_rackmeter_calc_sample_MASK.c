
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rackmeter {int* ubuf; } ;



__attribute__((used)) static u32 FUNC_0(struct rackmeter *VAR_0, unsigned int VAR_1)
{
 int VAR_2;
 u32 VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < 16; VAR_2++) {
  VAR_3 >>= 1;
  VAR_3 |= ((VAR_0->ubuf[VAR_2] >= 0x80) << 15);
 }
 return (VAR_3 << 17) | (VAR_3 >> 15);
}
