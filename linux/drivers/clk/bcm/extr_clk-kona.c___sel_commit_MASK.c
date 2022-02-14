
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct ccu_data {int dummy; } ;
struct bcm_clk_trig {int dummy; } ;
struct bcm_clk_sel {scalar_t__ clk_index; scalar_t__ parent_count; scalar_t__* parent_sel; int offset; int width; int shift; } ;
struct bcm_clk_gate {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct ccu_data*,int ) ;
 int FUNC_2 (struct ccu_data*,int ,scalar_t__) ;
 int FUNC_3 (struct ccu_data*,struct bcm_clk_gate*,int) ;
 int FUNC_4 (struct ccu_data*,struct bcm_clk_trig*) ;
 int FUNC_5 (struct ccu_data*,struct bcm_clk_gate*) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_8 (struct bcm_clk_sel*,scalar_t__) ;
 int FUNC_9 (struct bcm_clk_sel*) ;

__attribute__((used)) static int
FUNC_10(struct ccu_data *VAR_4, struct bcm_clk_gate *VAR_5,
   struct bcm_clk_sel *VAR_6, struct bcm_clk_trig *VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;
 bool VAR_10;
 int VAR_11 = 0;

 FUNC_0(!FUNC_9(VAR_6));






 if (VAR_6->clk_index == VAR_0) {
  u8 VAR_12;

  VAR_9 = FUNC_1(VAR_4, VAR_6->offset);
  VAR_8 = FUNC_6(VAR_9, VAR_6->shift, VAR_6->width);
  VAR_12 = FUNC_8(VAR_6, VAR_8);
  if (VAR_12 == VAR_0)
   return -VAR_1;
  VAR_6->clk_index = VAR_12;

  return 0;
 }

 FUNC_0((u32)VAR_6->clk_index >= VAR_6->parent_count);
 VAR_8 = VAR_6->parent_sel[VAR_6->clk_index];


 VAR_10 = FUNC_5(VAR_4, VAR_5);
 if (!VAR_10 && !FUNC_3(VAR_4, VAR_5, 1))
  return -VAR_3;


 VAR_9 = FUNC_1(VAR_4, VAR_6->offset);
 VAR_9 = FUNC_7(VAR_9, VAR_6->shift, VAR_6->width, VAR_8);
 FUNC_2(VAR_4, VAR_6->offset, VAR_9);


 if (!FUNC_4(VAR_4, VAR_7))
  VAR_11 = -VAR_2;


 if (!VAR_10 && !FUNC_3(VAR_4, VAR_5, 0))
  VAR_11 = VAR_11 ? VAR_11 : -VAR_3;

 return VAR_11;
}
