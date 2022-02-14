
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_channel {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct iio_channel* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct iio_channel*) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,struct iio_channel**) ;
 struct iio_channel** FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct iio_channel**) ;
 struct iio_channel* FUNC_5 (struct device*) ;

struct iio_channel *FUNC_6(struct device *VAR_3)
{
 struct iio_channel **VAR_4, *VAR_5;

 VAR_4 = FUNC_3(VAR_2, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_5(VAR_3);
 if (FUNC_1(VAR_5)) {
  FUNC_4(VAR_4);
  return VAR_5;
 }

 *VAR_4 = VAR_5;
 FUNC_2(VAR_3, VAR_4);

 return VAR_5;
}
