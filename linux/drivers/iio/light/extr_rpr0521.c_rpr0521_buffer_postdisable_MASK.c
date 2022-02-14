
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpr0521_data {TYPE_1__* client; int lock; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct rpr0521_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rpr0521_data*,int,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_2)
{
 int VAR_3;
 struct rpr0521_data *VAR_4 = FUNC_1(VAR_2);

 FUNC_2(&VAR_4->lock);
 VAR_3 = FUNC_4(VAR_4, 0,
  (VAR_1 | VAR_0));
 FUNC_3(&VAR_4->lock);
 if (VAR_3)
  FUNC_0(&VAR_4->client->dev, "_buffer_postdisable fail\n");

 return VAR_3;
}
