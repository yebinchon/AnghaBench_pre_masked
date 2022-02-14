
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sps30_state {int lock; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 struct sps30_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (struct sps30_state*,int ,int *,int) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
          struct device_attribute *VAR_2,
          char *VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_0(VAR_1);
 struct sps30_state *VAR_5 = FUNC_2(VAR_4);
 u8 VAR_6[4];
 int VAR_7;

 FUNC_3(&VAR_5->lock);
 VAR_7 = FUNC_6(VAR_5, VAR_0, VAR_6, 4);
 FUNC_4(&VAR_5->lock);
 if (VAR_7)
  return VAR_7;

 return FUNC_5(VAR_3, "%d\n", FUNC_1(VAR_6));
}
