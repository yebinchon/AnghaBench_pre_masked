
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sx9500_data {int regmap; TYPE_1__* client; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 struct sx9500_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_5)
{
 struct sx9500_data *VAR_6 = FUNC_1(VAR_5);
 int VAR_7, VAR_8;
 unsigned int VAR_9;

 VAR_8 = FUNC_3(VAR_6->regmap, VAR_3,
     VAR_1, VAR_1);
 if (VAR_8 < 0)
  return VAR_8;

 for (VAR_7 = 10; VAR_7 >= 0; VAR_7--) {
  FUNC_4(10000, 20000);
  VAR_8 = FUNC_2(VAR_6->regmap, VAR_4, &VAR_9);
  if (VAR_8 < 0)
   goto out;
  if (!(VAR_9 & VAR_2))
   break;
 }

 if (VAR_7 < 0) {
  FUNC_0(&VAR_6->client->dev, "initial compensation timed out");
  VAR_8 = -VAR_0;
 }

out:
 FUNC_3(VAR_6->regmap, VAR_3,
      VAR_1, 0);
 return VAR_8;
}
