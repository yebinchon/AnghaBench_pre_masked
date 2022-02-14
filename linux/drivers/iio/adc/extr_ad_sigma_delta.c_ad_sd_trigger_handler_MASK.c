
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct iio_poll_func {int timestamp; struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; TYPE_2__* channels; } ;
struct ad_sigma_delta {int irq_dis; TYPE_4__* spi; TYPE_3__* info; } ;
typedef int irqreturn_t ;
struct TYPE_8__ {int irq; } ;
struct TYPE_7__ {unsigned int data_reg; } ;
struct TYPE_5__ {unsigned int realbits; unsigned int shift; } ;
struct TYPE_6__ {TYPE_1__ scan_type; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_1 ;
 int FUNC_1 (struct ad_sigma_delta*,unsigned int,unsigned int,int *) ;
 int FUNC_2 (int ) ;
 struct ad_sigma_delta* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_2, void *VAR_3)
{
 struct iio_poll_func *VAR_4 = VAR_3;
 struct iio_dev *VAR_5 = VAR_4->indio_dev;
 struct ad_sigma_delta *VAR_6 = FUNC_3(VAR_5);
 unsigned int VAR_7;
 unsigned int VAR_8;
 uint8_t VAR_9[16];
 int VAR_10;

 FUNC_6(VAR_9, 0x00, 16);

 VAR_7 = VAR_5->channels[0].scan_type.realbits +
   VAR_5->channels[0].scan_type.shift;
 VAR_7 = FUNC_0(VAR_7, 8);

 if (VAR_6->info->data_reg != 0)
  VAR_8 = VAR_6->info->data_reg;
 else
  VAR_8 = VAR_0;

 switch (VAR_7) {
 case 4:
 case 2:
 case 1:
  VAR_10 = FUNC_1(VAR_6, VAR_8, VAR_7,
   &VAR_9[0]);
  break;
 case 3:


  VAR_10 = FUNC_1(VAR_6, VAR_8, VAR_7,
   &VAR_9[1]);
  break;
 }

 FUNC_4(VAR_5, VAR_9, VAR_4->timestamp);

 FUNC_5(VAR_5->trig);
 VAR_6->irq_dis = 0;
 FUNC_2(VAR_6->spi->irq);

 return VAR_1;
}
