
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct sgp_crc_word* raw_words; } ;
struct TYPE_3__ {struct sgp_crc_word* raw_words; } ;
struct sgp_data {int data_lock; TYPE_2__ buffer; int measure_gas_signals_cmd; TYPE_1__ iaq_buffer; int iaq_buffer_state; } ;
struct sgp_crc_word {int value; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 struct sgp_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sgp_data*,int ,TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_9,
   struct iio_chan_spec const *VAR_10, int *VAR_11,
   int *VAR_12, long VAR_13)
{
 struct sgp_data *VAR_14 = FUNC_1(VAR_9);
 struct sgp_crc_word *VAR_15;
 int VAR_16;

 switch (VAR_13) {
 case 135:
  FUNC_2(&VAR_14->data_lock);
  if (VAR_14->iaq_buffer_state != VAR_3) {
   FUNC_3(&VAR_14->data_lock);
   return -VAR_0;
  }
  VAR_15 = VAR_14->iaq_buffer.raw_words;
  switch (VAR_10->address) {
  case 132:
  case 129:
   *VAR_11 = 0;
   *VAR_12 = FUNC_0(VAR_15[1].value);
   VAR_16 = VAR_6;
   break;
  case 133:
   *VAR_11 = 0;
   *VAR_12 = FUNC_0(VAR_15[0].value);
   VAR_16 = VAR_5;
   break;
  default:
   VAR_16 = -VAR_1;
   break;
  }
  FUNC_3(&VAR_14->data_lock);
  break;
 case 134:
  FUNC_2(&VAR_14->data_lock);
  if (VAR_10->address == 128) {
   if (VAR_14->iaq_buffer_state == VAR_2)
    VAR_16 = -VAR_0;
   else
    VAR_16 = 0;
   VAR_15 = VAR_14->iaq_buffer.raw_words;
  } else {
   VAR_16 = FUNC_4(VAR_14, VAR_14->measure_gas_signals_cmd,
        &VAR_14->buffer, VAR_8,
        VAR_7);
   VAR_15 = VAR_14->buffer.raw_words;
  }
  if (VAR_16) {
   FUNC_3(&VAR_14->data_lock);
   return VAR_16;
  }

  switch (VAR_10->address) {
  case 131:
   *VAR_11 = FUNC_0(VAR_15[1].value);
   VAR_16 = VAR_4;
   break;
  case 128:
  case 130:
   *VAR_11 = FUNC_0(VAR_15[0].value);
   VAR_16 = VAR_4;
   break;
  default:
   VAR_16 = -VAR_1;
   break;
  }
  FUNC_3(&VAR_14->data_lock);
  break;
 default:
  return -VAR_1;
 }

 return VAR_16;
}
