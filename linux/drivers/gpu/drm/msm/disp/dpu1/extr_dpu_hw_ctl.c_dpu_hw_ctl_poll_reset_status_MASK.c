
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dpu_hw_blk_reg_map {int dummy; } ;
struct dpu_hw_ctl {struct dpu_hw_blk_reg_map hw; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int FUNC_0 (struct dpu_hw_blk_reg_map*,int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static u32 FUNC_5(struct dpu_hw_ctl *VAR_1, u32 VAR_2)
{
 struct dpu_hw_blk_reg_map *VAR_3 = &VAR_1->hw;
 ktime_t VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_1(FUNC_3(), VAR_2);





 do {
  VAR_5 = FUNC_0(VAR_3, VAR_0);
  VAR_5 &= 0x1;
  if (VAR_5)
   FUNC_4(20, 50);
 } while (VAR_5 && FUNC_2(FUNC_3(), VAR_4) < 0);

 return VAR_5;
}
