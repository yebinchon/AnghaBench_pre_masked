
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sps30_state {int lock; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct sps30_state* FUNC_1 (struct iio_dev*) ;
 scalar_t__ FUNC_2 (char const*,int ,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sps30_state*,int ,int *,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
        struct device_attribute *VAR_3,
        const char *VAR_4, size_t VAR_5)
{
 struct iio_dev *VAR_6 = FUNC_0(VAR_2);
 struct sps30_state *VAR_7 = FUNC_1(VAR_6);
 int VAR_8, VAR_9;

 if (FUNC_2(VAR_4, 0, &VAR_8) || VAR_8 != 1)
  return -VAR_0;

 FUNC_3(&VAR_7->lock);
 VAR_9 = FUNC_5(VAR_7, VAR_1, ((void*)0), 0);
 FUNC_4(&VAR_7->lock);
 if (VAR_9)
  return VAR_9;

 return VAR_5;
}
