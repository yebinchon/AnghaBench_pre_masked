
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pt_regs {int dummy; } ;


 int* VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct pt_regs *VAR_1, int VAR_2, u32 VAR_3)
{
 u8 *VAR_4 = ((u8 *)VAR_1) + VAR_0[VAR_2];
 *(u32 *)VAR_4 = VAR_3;
}
