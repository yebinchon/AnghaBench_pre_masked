
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpr0521_data {int lock; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; int address; } ;


 int VAR_0 ;



 struct rpr0521_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rpr0521_data*,int ,int,int) ;
 int FUNC_4 (struct rpr0521_data*,int) ;
 int FUNC_5 (struct rpr0521_data*,int ,int,int) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_1,
        struct iio_chan_spec const *VAR_2, int VAR_3,
        int VAR_4, long VAR_5)
{
 struct rpr0521_data *VAR_6 = FUNC_0(VAR_1);
 int VAR_7;

 switch (VAR_5) {
 case 128:
  FUNC_1(&VAR_6->lock);
  VAR_7 = FUNC_3(VAR_6, VAR_2->address, VAR_3, VAR_4);
  FUNC_2(&VAR_6->lock);

  return VAR_7;

 case 129:
  FUNC_1(&VAR_6->lock);
  VAR_7 = FUNC_5(VAR_6, VAR_2->type,
           VAR_3, VAR_4);
  FUNC_2(&VAR_6->lock);

  return VAR_7;

 case 130:
  FUNC_1(&VAR_6->lock);
  VAR_7 = FUNC_4(VAR_6, VAR_3);
  FUNC_2(&VAR_6->lock);

  return VAR_7;

 default:
  return -VAR_0;
 }
}
