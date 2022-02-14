
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;
struct ccs811_data {int drdy_trig_on; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct ccs811_data* FUNC_2 (struct iio_dev*) ;
 struct iio_dev* FUNC_3 (struct iio_trigger*) ;

__attribute__((used)) static int FUNC_4(struct iio_trigger *VAR_2,
        bool VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_3(VAR_2);
 struct ccs811_data *VAR_5 = FUNC_2(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5->client, VAR_0);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_3)
  VAR_6 |= VAR_1;
 else
  VAR_6 &= ~VAR_1;

 VAR_5->drdy_trig_on = VAR_3;

 return FUNC_1(VAR_5->client, VAR_0, VAR_6);
}
