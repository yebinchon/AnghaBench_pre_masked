
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device {int dummy; } ;
struct ad7606_state {scalar_t__ base_address; } ;


 struct iio_dev* FUNC_0 (struct device*) ;
 struct ad7606_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (unsigned long,void*,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0,
       int VAR_1, void *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_0(VAR_0);
 struct ad7606_state *VAR_4 = FUNC_1(VAR_3);

 FUNC_2((unsigned long)VAR_4->base_address, VAR_2, VAR_1);

 return 0;
}
