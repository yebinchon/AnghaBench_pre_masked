
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int touching; } ;
struct at91_adc_state {TYPE_1__ touch_st; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct at91_adc_state*,int ,int) ;
 struct iio_dev* FUNC_2 (struct at91_adc_state*) ;

__attribute__((used)) static void FUNC_3(struct at91_adc_state *VAR_9)
{
 struct iio_dev *VAR_10 = FUNC_2(VAR_9);

 FUNC_1(VAR_9, VAR_7,
   VAR_8);
 FUNC_1(VAR_9, VAR_0, VAR_2 |
   VAR_5 | VAR_6 |
   VAR_4);
 VAR_9->touch_st.touching = 0;

 FUNC_0(VAR_10);

 FUNC_1(VAR_9, VAR_1, VAR_3);
}
