
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timer_list {int dummy; } ;
struct tegra_kbc {int repoll_dly; unsigned int num_pressed_keys; int lock; int idev; int * current_keys; int timer; scalar_t__ mmio; } ;


 scalar_t__ VAR_0 ;
 struct tegra_kbc* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 struct tegra_kbc* VAR_2 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct tegra_kbc*) ;
 int FUNC_9 (struct tegra_kbc*,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_10(struct timer_list *VAR_4)
{
 struct tegra_kbc *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_3);
 unsigned long VAR_6;
 u32 VAR_7;
 unsigned int VAR_8;

 FUNC_6(&VAR_5->lock, VAR_6);

 VAR_7 = (FUNC_5(VAR_5->mmio + VAR_0) >> 4) & 0xf;
 if (VAR_7) {
  unsigned long VAR_9;

  FUNC_8(VAR_5);





  VAR_9 = (VAR_7 == 1) ? VAR_5->repoll_dly : 1;
  FUNC_3(&VAR_5->timer, VAR_1 + FUNC_4(VAR_9));
 } else {

  for (VAR_8 = 0; VAR_8 < VAR_5->num_pressed_keys; VAR_8++)
   FUNC_1(VAR_5->idev, VAR_5->current_keys[VAR_8], 0);
  FUNC_2(VAR_5->idev);

  VAR_5->num_pressed_keys = 0;


  FUNC_9(VAR_5, 1);
 }

 FUNC_7(&VAR_5->lock, VAR_6);
}
