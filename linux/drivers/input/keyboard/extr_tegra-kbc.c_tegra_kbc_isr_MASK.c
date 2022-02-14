
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_kbc {int keypress_caused_wake; int lock; scalar_t__ cp_dly_jiffies; int timer; scalar_t__ mmio; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct tegra_kbc*,int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_5, void *VAR_6)
{
 struct tegra_kbc *VAR_7 = VAR_6;
 unsigned long VAR_8;
 u32 VAR_9;

 FUNC_2(&VAR_7->lock, VAR_8);





 VAR_9 = FUNC_1(VAR_7->mmio + VAR_1);
 FUNC_5(VAR_9, VAR_7->mmio + VAR_1);

 if (VAR_9 & VAR_2) {




  FUNC_4(VAR_7, 0);
  FUNC_0(&VAR_7->timer, VAR_4 + VAR_7->cp_dly_jiffies);
 } else if (VAR_9 & VAR_3) {

  VAR_7->keypress_caused_wake = 1;
 }

 FUNC_3(&VAR_7->lock, VAR_8);

 return VAR_0;
}
