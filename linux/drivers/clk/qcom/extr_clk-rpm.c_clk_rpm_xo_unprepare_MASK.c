
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rpm_cc {int xo_buffer_value; int xo_lock; } ;
struct clk_rpm {int rpm_clk_id; int xo_offset; int enabled; int rpm; struct rpm_cc* rpm_cc; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int,int*,int) ;
 struct clk_rpm* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_4(struct clk_hw *VAR_2)
{
 struct clk_rpm *VAR_3 = FUNC_3(VAR_2);
 struct rpm_cc *VAR_4 = VAR_3->rpm_cc;
 int VAR_5, VAR_6 = VAR_3->rpm_clk_id;
 u32 VAR_7;

 FUNC_0(&VAR_4->xo_lock);

 VAR_7 = VAR_4->xo_buffer_value & ~(VAR_1 << VAR_3->xo_offset);
 VAR_5 = FUNC_2(VAR_3->rpm, VAR_0, VAR_6, &VAR_7, 1);
 if (!VAR_5) {
  VAR_3->enabled = 0;
  VAR_4->xo_buffer_value = VAR_7;
 }

 FUNC_1(&VAR_4->xo_lock);
}
