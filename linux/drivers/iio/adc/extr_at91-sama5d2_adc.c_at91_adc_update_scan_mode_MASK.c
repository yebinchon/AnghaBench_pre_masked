
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int channels_bitmask; } ;
struct at91_adc_state {TYPE_1__ touch_st; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,unsigned long const*,scalar_t__) ;
 scalar_t__ FUNC_1 (unsigned long const*,int *,scalar_t__) ;
 struct at91_adc_state* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_2,
         const unsigned long *VAR_3)
{
 struct at91_adc_state *VAR_4 = FUNC_2(VAR_2);

 if (FUNC_1(VAR_3, &VAR_4->touch_st.channels_bitmask,
     VAR_0 + 1))
  return 0;




 if (FUNC_0(&VAR_4->touch_st.channels_bitmask, VAR_3,
         VAR_0 + 1))
  return -VAR_1;
 return 0;
}
