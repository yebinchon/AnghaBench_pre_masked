
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_mmc_clock {int cached_phase; int hw; } ;
struct notifier_block {int dummy; } ;
struct clk_notifier_data {scalar_t__ old_rate; scalar_t__ new_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 struct rockchip_mmc_clock* FUNC_2 (struct notifier_block*) ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_4,
     unsigned long VAR_5, void *VAR_6)
{
 struct rockchip_mmc_clock *VAR_7 = FUNC_2(VAR_4);
 struct clk_notifier_data *VAR_8 = VAR_6;
 if (VAR_8->old_rate <= VAR_8->new_rate)
  return VAR_1;

 if (VAR_5 == VAR_3)
  VAR_7->cached_phase =
   FUNC_0(&VAR_7->hw);
 else if (VAR_7->cached_phase != -VAR_0 &&
   VAR_5 == VAR_2)
  FUNC_1(&VAR_7->hw, VAR_7->cached_phase);

 return VAR_1;
}
