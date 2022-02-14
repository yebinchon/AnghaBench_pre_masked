
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iio_dev {int mlock; } ;
struct iio_chan_spec {int type; int address; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iio_dev*,int ,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_3,
         struct iio_chan_spec const *VAR_4,
         int *VAR_5, int *VAR_6,
         long VAR_7)
{
 int VAR_8;
 u32 VAR_9;

 switch (VAR_7) {
 case 130:

  FUNC_1(&VAR_3->mlock);
  VAR_8 = FUNC_0(VAR_3, VAR_4->address, &VAR_9);
  FUNC_2(&VAR_3->mlock);
  if (VAR_8)
   return VAR_8;
  *VAR_5 = VAR_9;
  return VAR_2;
 case 129:
  switch (VAR_4->type) {
  case 132:

   *VAR_5 = 250;
   *VAR_6 = 336440817;
   return VAR_1;
  case 128:

   *VAR_5 = 105000;
   *VAR_6 = 9516048 - 8036283;
   return VAR_1;
  default:
   return -VAR_0;
  }
 case 131:
  switch (VAR_4->type) {
  case 132:
   *VAR_5 = -8388608;
   return VAR_2;
  case 128:
   *VAR_5 = -8036283;
   return VAR_2;
  default:
   return -VAR_0;
  }
 }

 return -VAR_0;
}
