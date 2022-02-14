
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct arch_hw_breakpoint_ctrl {int len; } ;
typedef int ctrl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct arch_hw_breakpoint_ctrl) ;
 int FUNC_1 (struct arch_hw_breakpoint_ctrl*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static u8 FUNC_4(void)
{
 u32 VAR_5;
 struct arch_hw_breakpoint_ctrl VAR_6;
 u8 VAR_7 = 4;

 if (VAR_4 < VAR_3)
  goto out;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.len = VAR_2;
 VAR_5 = FUNC_0(VAR_6);

 FUNC_3(VAR_1, 0);
 FUNC_3(VAR_0, VAR_5);
 if ((FUNC_2(VAR_0) & VAR_5) == VAR_5)
  VAR_7 = 8;

out:
 return VAR_7;
}
