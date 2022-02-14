
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma8452_data {int client; } ;
struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct mma8452_data* FUNC_1 (struct iio_dev*) ;
 struct iio_dev* FUNC_2 (struct iio_trigger*) ;
 int FUNC_3 (struct mma8452_data*,int ,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct iio_trigger *VAR_2,
           bool VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_2(VAR_2);
 struct mma8452_data *VAR_5 = FUNC_1(VAR_4);
 int VAR_6, VAR_7;

 VAR_7 = FUNC_4(VAR_5->client, VAR_3);
 if (VAR_7)
  return VAR_7;

 VAR_6 = FUNC_0(VAR_5->client, VAR_0);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_3)
  VAR_6 |= VAR_1;
 else
  VAR_6 &= ~VAR_1;

 return FUNC_3(VAR_5, VAR_0, VAR_6);
}
