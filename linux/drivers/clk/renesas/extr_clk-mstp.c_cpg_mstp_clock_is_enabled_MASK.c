
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mstp_clock_group {scalar_t__ smstpcr; scalar_t__ mstpsr; } ;
struct mstp_clock {int bit_index; struct mstp_clock_group* group; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mstp_clock_group*,scalar_t__) ;
 struct mstp_clock* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0)
{
 struct mstp_clock *VAR_1 = FUNC_2(VAR_0);
 struct mstp_clock_group *VAR_2 = VAR_1->group;
 u32 VAR_3;

 if (VAR_2->mstpsr)
  VAR_3 = FUNC_1(VAR_2, VAR_2->mstpsr);
 else
  VAR_3 = FUNC_1(VAR_2, VAR_2->smstpcr);

 return !(VAR_3 & FUNC_0(VAR_1->bit_index));
}
