
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gf100_fifo {int dummy; } ;
__attribute__((used)) static inline int
FUNC_0(struct gf100_fifo *VAR_0, u32 VAR_1)
{
 switch (VAR_1) {
 case 131 : VAR_1 = 0; break;
 case 128 : VAR_1 = 1; break;
 case 129 : VAR_1 = 2; break;
 case 130: VAR_1 = 3; break;
 case 133 : VAR_1 = 4; break;
 case 132 : VAR_1 = 5; break;
 default:
  return -1;
 }

 return VAR_1;
}
