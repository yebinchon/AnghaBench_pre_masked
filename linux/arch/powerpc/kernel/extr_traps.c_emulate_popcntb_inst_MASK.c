
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {unsigned long* gpr; } ;



__attribute__((used)) static int FUNC_0(struct pt_regs *VAR_0, u32 VAR_1)
{
 u32 VAR_2,VAR_3;
 unsigned long VAR_4;

 VAR_2 = (VAR_1 >> 16) & 0x1f;
 VAR_3 = (VAR_1 >> 21) & 0x1f;

 VAR_4 = VAR_0->gpr[VAR_3];
 VAR_4 = VAR_4 - ((VAR_4 >> 1) & 0x5555555555555555ULL);
 VAR_4 = (VAR_4 & 0x3333333333333333ULL) + ((VAR_4 >> 2) & 0x3333333333333333ULL);
 VAR_4 = (VAR_4 + (VAR_4 >> 4)) & 0x0f0f0f0f0f0f0f0fULL;
 VAR_0->gpr[VAR_2] = VAR_4;

 return 0;
}
