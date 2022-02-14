
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dev; } ;
struct TYPE_2__ {int startup_time; } ;
struct at91_adc_state {unsigned int current_sample_rate; TYPE_1__ soc_info; int per_clk; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_2 ;
 unsigned int FUNC_2 (struct at91_adc_state*,int ) ;
 unsigned int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (struct at91_adc_state*,int ,unsigned int) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,unsigned int,unsigned int,unsigned int) ;
 struct iio_dev* FUNC_7 (struct at91_adc_state*) ;

__attribute__((used)) static void FUNC_8(struct at91_adc_state *VAR_3, unsigned VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_7(VAR_3);
 unsigned VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_6 = FUNC_5(VAR_3->per_clk);
 VAR_7 = (VAR_6 / (2 * VAR_4)) - 1;

 VAR_8 = FUNC_3(VAR_3->soc_info.startup_time,
     VAR_4 / 1000);

 VAR_9 = FUNC_2(VAR_3, VAR_0);
 VAR_9 &= ~(VAR_2 | VAR_1);
 VAR_9 |= FUNC_1(VAR_8);
 VAR_9 |= FUNC_0(VAR_7);
 FUNC_4(VAR_3, VAR_0, VAR_9);

 FUNC_6(&VAR_5->dev, "freq: %u, startup: %u, prescal: %u\n",
  VAR_4, VAR_8, VAR_7);
 VAR_3->current_sample_rate = VAR_4;
}
