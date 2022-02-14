
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stm32_dfsdm_adc {int* buffer; int nconv; TYPE_1__* dfsdm; int fl_id; int completion; int smask; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int scan_index; } ;
struct TYPE_3__ {int regmap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct stm32_dfsdm_adc* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct stm32_dfsdm_adc*,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct stm32_dfsdm_adc*) ;
 int FUNC_9 (TYPE_1__*) ;
 long FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(struct iio_dev *VAR_4,
       const struct iio_chan_spec *VAR_5, int *VAR_6)
{
 struct stm32_dfsdm_adc *VAR_7 = FUNC_3(VAR_4);
 long VAR_8;
 int VAR_9;

 FUNC_5(&VAR_7->completion);

 VAR_7->buffer = VAR_6;

 VAR_9 = FUNC_7(VAR_7->dfsdm);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_4(VAR_7->dfsdm->regmap, FUNC_1(VAR_7->fl_id),
     VAR_0, FUNC_2(1));
 if (VAR_9 < 0)
  goto stop_dfsdm;

 VAR_7->nconv = 1;
 VAR_7->smask = FUNC_0(VAR_5->scan_index);
 VAR_9 = FUNC_6(VAR_7, ((void*)0));
 if (VAR_9 < 0) {
  FUNC_4(VAR_7->dfsdm->regmap, FUNC_1(VAR_7->fl_id),
       VAR_0, FUNC_2(0));
  goto stop_dfsdm;
 }

 VAR_8 = FUNC_10(&VAR_7->completion,
           VAR_1);


 FUNC_4(VAR_7->dfsdm->regmap, FUNC_1(VAR_7->fl_id),
      VAR_0, FUNC_2(0));

 if (VAR_8 == 0)
  VAR_9 = -VAR_2;
 else if (VAR_8 < 0)
  VAR_9 = VAR_8;
 else
  VAR_9 = VAR_3;

 FUNC_8(VAR_7);

stop_dfsdm:
 FUNC_9(VAR_7->dfsdm);

 return VAR_9;
}
