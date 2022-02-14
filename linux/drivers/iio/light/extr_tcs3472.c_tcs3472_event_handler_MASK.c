
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcs3472_data {int client; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct iio_dev*) ;
 struct tcs3472_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_7, void *VAR_8)
{
 struct iio_dev *VAR_9 = VAR_8;
 struct tcs3472_data *VAR_10 = FUNC_3(VAR_9);
 int VAR_11;

 VAR_11 = FUNC_1(VAR_10->client, VAR_5);
 if (VAR_11 >= 0 && (VAR_11 & VAR_6)) {
  FUNC_4(VAR_9, FUNC_0(VAR_2, 0,
      VAR_1,
      VAR_0),
    FUNC_2(VAR_9));

  FUNC_1(VAR_10->client, VAR_4);
 }

 return VAR_3;
}
