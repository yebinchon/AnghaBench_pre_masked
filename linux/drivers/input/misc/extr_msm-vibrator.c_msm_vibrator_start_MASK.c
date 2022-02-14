
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_vibrator {int enabled; int magnitude; int mutex; int enable_gpio; int clk; TYPE_1__* input; int vcc; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct msm_vibrator*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct msm_vibrator *VAR_6)
{
 int VAR_7, VAR_8 = 0;

 FUNC_6(&VAR_6->mutex);

 if (!VAR_6->enabled) {
  VAR_8 = FUNC_2(VAR_6->clk, 24000);
  if (VAR_8) {
   FUNC_3(&VAR_6->input->dev,
    "Failed to set clock rate: %d\n", VAR_8);
   goto unlock;
  }

  VAR_8 = FUNC_1(VAR_6->clk);
  if (VAR_8) {
   FUNC_3(&VAR_6->input->dev,
    "Failed to enable clock: %d\n", VAR_8);
   goto unlock;
  }

  VAR_8 = FUNC_8(VAR_6->vcc);
  if (VAR_8) {
   FUNC_3(&VAR_6->input->dev,
    "Failed to enable regulator: %d\n", VAR_8);
   FUNC_0(VAR_6->clk);
   goto unlock;
  }

  FUNC_4(VAR_6->enable_gpio, 1);

  VAR_6->enabled = 1;
 }

 VAR_7 = 127 - ((126 * VAR_6->magnitude) / 0xffff);
 FUNC_5(VAR_6, VAR_1,
      (2 << 12) |
      (0 << 8) |
      (7 << 0));
 FUNC_5(VAR_6, VAR_4, 1);
 FUNC_5(VAR_6, VAR_5, 128);
 FUNC_5(VAR_6, VAR_3, VAR_7);
 FUNC_5(VAR_6, VAR_2, 1);
 FUNC_5(VAR_6, VAR_0, 1);

unlock:
 FUNC_7(&VAR_6->mutex);

 return VAR_8;
}
