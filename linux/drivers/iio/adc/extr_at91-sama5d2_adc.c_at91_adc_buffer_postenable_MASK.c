
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int currentmode; int dev; int active_scan_mask; } ;
struct TYPE_2__ {int channels_bitmask; } ;
struct at91_adc_state {TYPE_1__ touch_st; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct at91_adc_state*,int) ;
 int FUNC_1 (struct iio_dev*) ;
 scalar_t__ FUNC_2 (int ,int *,scalar_t__) ;
 int FUNC_3 (int *,char*) ;
 struct at91_adc_state* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_3)
{
 int VAR_4;
 struct at91_adc_state *VAR_5 = FUNC_4(VAR_3);


 if (FUNC_2(VAR_3->active_scan_mask,
     &VAR_5->touch_st.channels_bitmask,
     VAR_0 + 1)) {

  return FUNC_0(VAR_5, 1);
 }

 if (!(VAR_3->currentmode & VAR_2))
  return -VAR_1;


 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4) {
  FUNC_3(&VAR_3->dev, "buffer postenable failed\n");
  return VAR_4;
 }

 return FUNC_5(VAR_3);
}
