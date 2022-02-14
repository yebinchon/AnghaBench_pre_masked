
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef unsigned long u32 ;
struct arch_hw_breakpoint_ctrl {int len; } ;


 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 unsigned long FUNC_2 (unsigned long) ;

__attribute__((used)) static u64 FUNC_3(unsigned long VAR_0, u64 VAR_1,
     struct arch_hw_breakpoint_ctrl *VAR_2)
{
 u64 VAR_3, VAR_4;
 u32 VAR_5, VAR_6;

 VAR_0 = FUNC_2(VAR_0);

 VAR_5 = FUNC_0(VAR_2->len);
 VAR_6 = FUNC_1(VAR_2->len);

 VAR_3 = VAR_1 + VAR_5;
 VAR_4 = VAR_1 + VAR_6;
 if (VAR_0 < VAR_3)
  return VAR_3 - VAR_0;
 else if (VAR_0 > VAR_4)
  return VAR_0 - VAR_4;
 else
  return 0;
}
