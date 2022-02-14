
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct pt_regs {unsigned long* gpr; int ccr; } ;



__attribute__((used)) static int FUNC_0(struct pt_regs *VAR_0, u32 VAR_1)
{
 u8 VAR_2 = (VAR_1 >> 21) & 0x1f;
 u8 VAR_3 = (VAR_1 >> 16) & 0x1f;
 u8 VAR_4 = (VAR_1 >> 11) & 0x1f;
 u8 VAR_5 = (VAR_1 >> 6) & 0x1f;
 u8 VAR_6;
 unsigned long VAR_7;

 VAR_7 = (VAR_3 == 0) ? 0 : VAR_0->gpr[VAR_3];
 VAR_6 = (VAR_0->ccr >> (31 - VAR_5)) & 0x1;

 VAR_0->gpr[VAR_2] = VAR_6 ? VAR_7 : VAR_0->gpr[VAR_4];

 return 0;
}
