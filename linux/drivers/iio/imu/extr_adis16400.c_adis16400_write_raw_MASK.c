
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int mlock; } ;
struct iio_chan_spec {size_t scan_index; } ;
struct adis16400_state {int filt_int; TYPE_1__* variant; int adis; } ;
struct TYPE_2__ {int (* get_freq ) (struct adis16400_state*) ;int (* set_freq ) (struct adis16400_state*,int) ;} ;


 int VAR_0 ;



 int * VAR_1 ;
 int FUNC_0 (struct iio_dev*,int,int) ;
 int FUNC_1 (int *,int ,int) ;
 struct adis16400_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct adis16400_state*) ;
 int FUNC_6 (struct adis16400_state*,int) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_2,
 struct iio_chan_spec const *VAR_3, int VAR_4, int VAR_5, long VAR_6)
{
 struct adis16400_state *VAR_7 = FUNC_2(VAR_2);
 int VAR_8, VAR_9;

 switch (VAR_6) {
 case 130:
  FUNC_3(&VAR_2->mlock);
  VAR_8 = FUNC_1(&VAR_7->adis,
    VAR_1[VAR_3->scan_index], VAR_4);
  FUNC_4(&VAR_2->mlock);
  return VAR_8;
 case 129:




  FUNC_3(&VAR_2->mlock);
  VAR_7->filt_int = VAR_4;

  VAR_9 = VAR_7->variant->get_freq(VAR_7);
  if (VAR_9 < 0) {
   FUNC_4(&VAR_2->mlock);
   return VAR_9;
  }

  VAR_8 = FUNC_0(VAR_2, VAR_9,
   VAR_4 * 1000 + VAR_5 / 1000);
  FUNC_4(&VAR_2->mlock);
  return VAR_8;
 case 128:
  VAR_9 = VAR_4 * 1000 + VAR_5 / 1000;

  if (VAR_9 <= 0)
   return -VAR_0;

  FUNC_3(&VAR_2->mlock);
  VAR_8 = VAR_7->variant->set_freq(VAR_7, VAR_9);
  FUNC_4(&VAR_2->mlock);
  return VAR_8;
 default:
  return -VAR_0;
 }
}
