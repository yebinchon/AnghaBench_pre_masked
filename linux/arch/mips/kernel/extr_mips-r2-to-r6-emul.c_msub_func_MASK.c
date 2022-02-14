
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {int* regs; int hi; int lo; } ;
typedef int s64 ;
typedef int s32 ;


 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct pt_regs *VAR_1, u32 VAR_2)
{
 s64 VAR_3;
 s32 VAR_4, VAR_5;

 VAR_4 = VAR_1->regs[FUNC_1(VAR_2)];
 VAR_5 = VAR_1->regs[FUNC_0(VAR_2)];
 VAR_3 = (s64)VAR_4 * (s64)VAR_5;
 VAR_4 = VAR_1->hi;
 VAR_5 = VAR_1->lo;
 VAR_3 = ((((s64)VAR_4) << 32) | (u32)VAR_5) - VAR_3;

 VAR_4 = VAR_3;
 VAR_1->lo = (s64)VAR_4;
 VAR_5 = VAR_3 >> 32;
 VAR_1->hi = (s64)VAR_5;

 FUNC_2(VAR_0);

 return 0;
}
