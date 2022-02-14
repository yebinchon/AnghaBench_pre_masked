
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
struct hp206c_data {int mutex; void* pres_osr_index; void* temp_osr_index; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 long VAR_1 ;


 void* FUNC_1 (int,int ,int ) ;
 int VAR_2 ;
 struct hp206c_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_3,
       struct iio_chan_spec const *VAR_4,
       int VAR_5, int VAR_6, long VAR_7)
{
 int VAR_8 = 0;
 struct hp206c_data *VAR_9 = FUNC_2(VAR_3);

 if (VAR_7 != VAR_1)
  return -VAR_0;
 FUNC_3(&VAR_9->mutex);
 switch (VAR_4->type) {
 case 128:
  VAR_9->temp_osr_index = FUNC_1(VAR_5,
   VAR_2, FUNC_0(VAR_2));
  break;
 case 129:
  VAR_9->pres_osr_index = FUNC_1(VAR_5,
   VAR_2, FUNC_0(VAR_2));
  break;
 default:
  VAR_8 = -VAR_0;
 }
 FUNC_4(&VAR_9->mutex);
 return VAR_8;
}
