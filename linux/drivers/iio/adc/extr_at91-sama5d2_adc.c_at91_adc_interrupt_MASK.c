
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iio_dev {int trig; } ;
struct TYPE_3__ {scalar_t__ dma_chan; } ;
struct at91_adc_state {int conversion_done; int wq_data_available; TYPE_2__* chan; void* conversion_value; TYPE_1__ dma_st; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct at91_adc_state*) ;
 int FUNC_2 (struct at91_adc_state*) ;
 void* FUNC_3 (struct at91_adc_state*,int ) ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct iio_dev*) ;
 struct at91_adc_state* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_13, void *VAR_14)
{
 struct iio_dev *VAR_15 = VAR_14;
 struct at91_adc_state *VAR_16 = FUNC_7(VAR_15);
 u32 VAR_17 = FUNC_3(VAR_16, VAR_6);
 u32 VAR_18 = FUNC_3(VAR_16, VAR_5);
 u32 VAR_19 = VAR_3 | VAR_4 |
   VAR_2;

 if (!(VAR_17 & VAR_18))
  return VAR_12;
 if (VAR_17 & VAR_1) {

  FUNC_2(VAR_16);
 } else if ((VAR_17 & VAR_0)) {

  FUNC_1(VAR_16);
 } else if ((VAR_17 & VAR_7) &&
     ((VAR_17 & VAR_19) == VAR_19)) {

  FUNC_4(VAR_15);
 } else if (VAR_17 & VAR_7) {




  VAR_17 = FUNC_3(VAR_16, VAR_9);
  VAR_17 = FUNC_3(VAR_16, VAR_10);
  VAR_17 = FUNC_3(VAR_16, VAR_8);
 } else if (FUNC_6(VAR_15) && !VAR_16->dma_st.dma_chan) {

  FUNC_5(VAR_13);
  FUNC_8(VAR_15->trig);
 } else if (FUNC_6(VAR_15) && VAR_16->dma_st.dma_chan) {

  FUNC_5(VAR_13);
  FUNC_0(1, "Unexpected irq occurred\n");
 } else if (!FUNC_6(VAR_15)) {

  VAR_16->conversion_value = FUNC_3(VAR_16, VAR_16->chan->address);
  VAR_16->conversion_done = 1;
  FUNC_9(&VAR_16->wq_data_available);
 }
 return VAR_11;
}
