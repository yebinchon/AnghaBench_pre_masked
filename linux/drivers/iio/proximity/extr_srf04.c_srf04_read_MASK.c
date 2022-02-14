
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct srf04_data {int lock; int ts_rising; int ts_falling; int falling; int rising; int gpiod_trig; TYPE_1__* cfg; } ;
typedef int ktime_t ;
struct TYPE_2__ {int trigger_pulse_us; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(struct srf04_data *VAR_3)
{
 int VAR_4;
 ktime_t VAR_5;
 u64 VAR_6;
 u32 VAR_7, VAR_8;





 FUNC_3(&VAR_3->lock);

 FUNC_5(&VAR_3->rising);
 FUNC_5(&VAR_3->falling);

 FUNC_0(VAR_3->gpiod_trig, 1);
 FUNC_6(VAR_3->cfg->trigger_pulse_us);
 FUNC_0(VAR_3->gpiod_trig, 0);


 VAR_4 = FUNC_7(&VAR_3->rising, VAR_2/50);
 if (VAR_4 < 0) {
  FUNC_4(&VAR_3->lock);
  return VAR_4;
 } else if (VAR_4 == 0) {
  FUNC_4(&VAR_3->lock);
  return -VAR_1;
 }


 VAR_4 = FUNC_7(&VAR_3->falling, VAR_2/20);
 if (VAR_4 < 0) {
  FUNC_4(&VAR_3->lock);
  return VAR_4;
 } else if (VAR_4 == 0) {
  FUNC_4(&VAR_3->lock);
  return -VAR_1;
 }

 VAR_5 = FUNC_1(VAR_3->ts_falling, VAR_3->ts_rising);

 FUNC_4(&VAR_3->lock);

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6 > 40438871)
  return -VAR_0;

 VAR_7 = VAR_6;
 VAR_8 = VAR_7 * 106 / 617176;

 return VAR_8;
}
