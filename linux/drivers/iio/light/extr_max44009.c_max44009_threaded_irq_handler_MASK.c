
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max44009_data {int client; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct iio_dev*) ;
 struct max44009_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_6, void *VAR_7)
{
 struct iio_dev *VAR_8 = VAR_7;
 struct max44009_data *VAR_9 = FUNC_3(VAR_8);
 int VAR_10;

 VAR_10 = FUNC_1(VAR_9->client, VAR_5);
 if (VAR_10) {
  FUNC_4(VAR_8,
          FUNC_0(VAR_2, 0,
          VAR_1,
          VAR_0),
          FUNC_2(VAR_8));

  return VAR_3;
 }

 return VAR_4;
}
