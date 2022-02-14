
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct pic32_ref_osc {size_t* parent_map; TYPE_1__* core; int ctrl_reg; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int reg_lock; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct clk_hw*) ;
 struct pic32_ref_osc* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int ,size_t,int,int,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (size_t,int ) ;

__attribute__((used)) static int FUNC_9(struct clk_hw *VAR_4, u8 VAR_5)
{
 struct pic32_ref_osc *VAR_6 = FUNC_1(VAR_4);
 unsigned long VAR_7;
 u32 VAR_8;
 int VAR_9;

 if (VAR_6->parent_map)
  VAR_5 = VAR_6->parent_map[VAR_5];


 VAR_9 = FUNC_5(VAR_6->ctrl_reg, VAR_8, !(VAR_8 & VAR_1),
     1, VAR_0);
 if (VAR_9) {
  FUNC_3("%s: poll failed, clk active\n", FUNC_0(VAR_4));
  return VAR_9;
 }

 FUNC_6(&VAR_6->core->reg_lock, VAR_7);

 FUNC_2();


 VAR_8 = FUNC_4(VAR_6->ctrl_reg);
 VAR_8 &= ~(VAR_2 << VAR_3);
 VAR_8 |= VAR_5 << VAR_3;

 FUNC_8(VAR_8, VAR_6->ctrl_reg);

 FUNC_7(&VAR_6->core->reg_lock, VAR_7);

 return 0;
}
