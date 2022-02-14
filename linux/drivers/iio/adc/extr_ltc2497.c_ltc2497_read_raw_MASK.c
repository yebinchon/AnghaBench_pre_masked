
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc2497_st {int ref; } ;
struct iio_dev {int mlock; } ;
struct iio_chan_spec {int address; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 struct ltc2497_st* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct ltc2497_st*,int ,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_3,
       struct iio_chan_spec const *VAR_4,
       int *VAR_5, int *VAR_6, long VAR_7)
{
 struct ltc2497_st *VAR_8 = FUNC_0(VAR_3);
 int VAR_9;

 switch (VAR_7) {
 case 129:
  FUNC_2(&VAR_3->mlock);
  VAR_9 = FUNC_1(VAR_8, VAR_4->address, VAR_5);
  FUNC_3(&VAR_3->mlock);
  if (VAR_9 < 0)
   return VAR_9;

  return VAR_2;

 case 128:
  VAR_9 = FUNC_4(VAR_8->ref);
  if (VAR_9 < 0)
   return VAR_9;

  *VAR_5 = VAR_9 / 1000;
  *VAR_6 = 17;

  return VAR_1;

 default:
  return -VAR_0;
 }
}
