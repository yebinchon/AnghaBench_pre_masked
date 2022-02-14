
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;
struct iio_trigger {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iio_trigger*,struct module*) ;
 int VAR_2 ;
 int FUNC_1 (struct device*,struct iio_trigger**) ;
 struct iio_trigger** FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct iio_trigger**) ;

int FUNC_4(struct device *VAR_3,
    struct iio_trigger *VAR_4,
    struct module *VAR_5)
{
 struct iio_trigger **VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_2, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 *VAR_6 = VAR_4;
 VAR_7 = FUNC_0(VAR_4, VAR_5);
 if (!VAR_7)
  FUNC_1(VAR_3, VAR_6);
 else
  FUNC_3(VAR_6);

 return VAR_7;
}
