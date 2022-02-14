
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int mlock; } ;
struct iio_chan_spec {int type; int address; } ;
struct adis16080_state {TYPE_1__* info; } ;
struct TYPE_2__ {int scale_val; int scale_val2; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_1 (struct iio_dev*,int ,int*) ;
 struct adis16080_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_4,
        struct iio_chan_spec const *VAR_5,
        int *VAR_6,
        int *VAR_7,
        long VAR_8)
{
 struct adis16080_state *VAR_9 = FUNC_2(VAR_4);
 int VAR_10;

 switch (VAR_8) {
 case 131:
  FUNC_3(&VAR_4->mlock);
  VAR_10 = FUNC_1(VAR_4, VAR_5->address, VAR_6);
  FUNC_4(&VAR_4->mlock);
  return VAR_10 ? VAR_10 : VAR_3;
 case 130:
  switch (VAR_5->type) {
  case 133:
   *VAR_6 = VAR_9->info->scale_val;
   *VAR_7 = VAR_9->info->scale_val2;
   return VAR_1;
  case 128:

   *VAR_6 = 5000;
   *VAR_7 = 12;
   return VAR_2;
  case 129:

   *VAR_6 = 85000 - 25000;
   *VAR_7 = 585;
   return VAR_1;
  default:
   return -VAR_0;
  }
 case 132:
  switch (VAR_5->type) {
  case 128:

   *VAR_6 = 2048;
   return VAR_3;
  case 129:

   *VAR_6 = FUNC_0(25 * 585, 85 - 25);
   return VAR_3;
  default:
   return -VAR_0;
  }
 default:
  break;
 }

 return -VAR_0;
}
