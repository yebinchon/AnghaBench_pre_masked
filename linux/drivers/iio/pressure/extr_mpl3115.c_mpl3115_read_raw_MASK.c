
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mpl3115_data {int lock; int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
typedef int __be32 ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int *) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct mpl3115_data* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct mpl3115_data*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct iio_dev *VAR_5,
       struct iio_chan_spec const *VAR_6,
       int *VAR_7, int *VAR_8, long VAR_9)
{
 struct mpl3115_data *VAR_10 = FUNC_4(VAR_5);
 __be32 VAR_11 = 0;
 int VAR_12;

 switch (VAR_9) {
 case 131:
  VAR_12 = FUNC_2(VAR_5);
  if (VAR_12)
   return VAR_12;

  switch (VAR_6->type) {
  case 129:
   FUNC_6(&VAR_10->lock);
   VAR_12 = FUNC_5(VAR_10);
   if (VAR_12 < 0) {
    FUNC_7(&VAR_10->lock);
    break;
   }
   VAR_12 = FUNC_1(VAR_10->client,
    VAR_3, 3, (u8 *) &VAR_11);
   FUNC_7(&VAR_10->lock);
   if (VAR_12 < 0)
    break;
   *VAR_7 = FUNC_0(VAR_11) >> 12;
   VAR_12 = VAR_1;
   break;
  case 128:
   FUNC_6(&VAR_10->lock);
   VAR_12 = FUNC_5(VAR_10);
   if (VAR_12 < 0) {
    FUNC_7(&VAR_10->lock);
    break;
   }
   VAR_12 = FUNC_1(VAR_10->client,
    VAR_4, 2, (u8 *) &VAR_11);
   FUNC_7(&VAR_10->lock);
   if (VAR_12 < 0)
    break;
   *VAR_7 = FUNC_8(FUNC_0(VAR_11) >> 20, 11);
   VAR_12 = VAR_1;
   break;
  default:
   VAR_12 = -VAR_0;
   break;
  }

  FUNC_3(VAR_5);
  return VAR_12;

 case 130:
  switch (VAR_6->type) {
  case 129:
   *VAR_7 = 0;
   *VAR_8 = 250;
   return VAR_2;
  case 128:
   *VAR_7 = 0;
   *VAR_8 = 62500;
   return VAR_2;
  default:
   return -VAR_0;
  }
 }
 return -VAR_0;
}
