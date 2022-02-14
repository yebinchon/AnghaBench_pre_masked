
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_hw_consumer {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct iio_hw_consumer*) ;
 int VAR_1 ;
 int FUNC_1 (struct device*,struct iio_hw_consumer**) ;
 struct iio_hw_consumer** FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct iio_hw_consumer**) ;
 struct iio_hw_consumer* FUNC_4 (struct device*) ;

struct iio_hw_consumer *FUNC_5(struct device *VAR_2)
{
 struct iio_hw_consumer **VAR_3, *VAR_4;

 VAR_3 = FUNC_2(VAR_1, sizeof(*VAR_3),
      VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_4 = FUNC_4(VAR_2);
 if (FUNC_0(VAR_4)) {
  FUNC_3(VAR_3);
 } else {
  *VAR_3 = VAR_4;
  FUNC_1(VAR_2, VAR_3);
 }

 return VAR_4;
}
