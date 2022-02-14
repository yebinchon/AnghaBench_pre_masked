
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm2835_cprman {int dev; } ;
struct bcm2835_clock_data {int ctl_reg; } ;
struct bcm2835_clock {int hw; struct bcm2835_clock_data* data; struct bcm2835_cprman* cprman; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bcm2835_cprman*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct bcm2835_clock *VAR_2)
{
 struct bcm2835_cprman *VAR_3 = VAR_2->cprman;
 const struct bcm2835_clock_data *VAR_4 = VAR_2->data;
 ktime_t VAR_5 = FUNC_4(FUNC_6(), VAR_1);

 while (FUNC_1(VAR_3, VAR_4->ctl_reg) & VAR_0) {
  if (FUNC_5(FUNC_6(), VAR_5)) {
   FUNC_3(VAR_3->dev, "%s: couldn't lock PLL\n",
    FUNC_0(&VAR_2->hw));
   return;
  }
  FUNC_2();
 }
}
