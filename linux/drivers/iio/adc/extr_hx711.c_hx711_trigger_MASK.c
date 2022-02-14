
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_poll_func {int timestamp; struct iio_dev* indio_dev; } ;
struct iio_dev {int masklength; int trig; TYPE_1__* channels; int active_scan_mask; } ;
struct hx711_data {int lock; int * buffer; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int channel; } ;


 int VAR_0 ;
 int FUNC_0 (struct hx711_data*,int ) ;
 struct hx711_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_1, void *VAR_2)
{
 struct iio_poll_func *VAR_3 = VAR_2;
 struct iio_dev *VAR_4 = VAR_3->indio_dev;
 struct hx711_data *VAR_5 = FUNC_1(VAR_4);
 int VAR_6, VAR_7 = 0;

 FUNC_5(&VAR_5->lock);

 FUNC_4(VAR_5->buffer, 0, sizeof(VAR_5->buffer));

 for (VAR_6 = 0; VAR_6 < VAR_4->masklength; VAR_6++) {
  if (!FUNC_7(VAR_6, VAR_4->active_scan_mask))
   continue;

  VAR_5->buffer[VAR_7] = FUNC_0(VAR_5,
     VAR_4->channels[VAR_6].channel);
  VAR_7++;
 }

 FUNC_2(VAR_4, VAR_5->buffer,
       VAR_3->timestamp);

 FUNC_6(&VAR_5->lock);

 FUNC_3(VAR_4->trig);

 return VAR_0;
}
