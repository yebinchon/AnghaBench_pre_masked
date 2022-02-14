
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_dev {int mlock; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iio_dev*,int ,int*) ;
 int FUNC_1 (struct iio_dev*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_4,
        struct iio_chan_spec const *VAR_5,
        int VAR_6,
        int VAR_7,
        long VAR_8)
{
 int VAR_9;
 u8 VAR_10;

 switch (VAR_8) {
 case 128:
  if (VAR_6 == 0 || VAR_7 != 0)
   return -VAR_0;

  FUNC_2(&VAR_4->mlock);

  VAR_9 = FUNC_0(VAR_4, VAR_2, &VAR_10);
  if (VAR_9) {
   FUNC_3(&VAR_4->mlock);
   return VAR_9;
  }
  VAR_10 = ((VAR_10 & VAR_1) ? 1000u : 8000u) / VAR_6 - 1;

  VAR_9 = FUNC_1(VAR_4,
       VAR_3,
       VAR_10);

  FUNC_3(&VAR_4->mlock);
 return VAR_9;

 default:
  return -VAR_0;
 }
}
