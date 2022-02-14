
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsl2563_chip {int client; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct iio_dev*) ;
 struct tsl2563_chip* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_6, void *VAR_7)
{
 struct iio_dev *VAR_8 = VAR_7;
 struct tsl2563_chip *VAR_9 = FUNC_3(VAR_8);

 FUNC_4(VAR_8,
         FUNC_0(VAR_2,
         0,
         VAR_1,
         VAR_0),
         FUNC_2(VAR_8));


 FUNC_1(VAR_9->client, VAR_5 | VAR_4);
 return VAR_3;
}
