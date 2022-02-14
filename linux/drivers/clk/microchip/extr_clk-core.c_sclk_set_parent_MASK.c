
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct pic32_sys_clk {size_t* parent_map; int mux_reg; TYPE_1__* core; int slew_reg; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct clk_hw*) ;
 struct pic32_sys_clk* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int ,int,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int,int,int,int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int,int ) ;

__attribute__((used)) static int FUNC_12(struct clk_hw *VAR_7, u8 VAR_8)
{
 struct pic32_sys_clk *VAR_9 = FUNC_2(VAR_7);
 unsigned long VAR_10;
 u32 VAR_11, VAR_12, VAR_13;
 int VAR_14;

 FUNC_9(&VAR_9->core->reg_lock, VAR_10);


 VAR_11 = VAR_9->parent_map ? VAR_9->parent_map[VAR_8] : VAR_8;


 VAR_13 = FUNC_7(VAR_9->mux_reg);
 VAR_13 &= ~(VAR_4 << VAR_5);
 VAR_13 |= VAR_11 << VAR_5;

 FUNC_5();

 FUNC_11(VAR_13, VAR_9->mux_reg);


 FUNC_11(VAR_6, FUNC_0(VAR_9->mux_reg));
 FUNC_4();


 FUNC_3();


 VAR_14 = FUNC_8(VAR_9->slew_reg, VAR_13,
     !(VAR_13 & VAR_6), 1, VAR_1);

 FUNC_10(&VAR_9->core->reg_lock, VAR_10);







 VAR_12 = (FUNC_7(VAR_9->mux_reg) >> VAR_3) & VAR_2;
 if (VAR_12 != VAR_11) {
  FUNC_6("%s: err, failed to set_parent() to %d, current %d\n",
         FUNC_1(VAR_7), VAR_11, VAR_12);
  VAR_14 = -VAR_0;
 }

 return VAR_14;
}
