
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iio_dev_attr {scalar_t__ address; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad9523_state {int lock; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dev*,int ) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 struct ad9523_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,int) ;
 struct iio_dev_attr* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
   struct device_attribute *VAR_2,
   char *VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_1(VAR_1);
 struct iio_dev_attr *VAR_5 = FUNC_6(VAR_2);
 struct ad9523_state *VAR_6 = FUNC_2(VAR_4);
 int VAR_7;

 FUNC_3(&VAR_6->lock);
 VAR_7 = FUNC_0(VAR_4, VAR_0);
 if (VAR_7 >= 0) {
  VAR_7 = FUNC_5(VAR_3, "%d\n", !!(VAR_7 & (1 <<
   (u32)VAR_5->address)));
 }
 FUNC_4(&VAR_6->lock);

 return VAR_7;
}
