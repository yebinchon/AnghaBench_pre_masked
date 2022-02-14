
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm3533_als {int flags; int zone; int irq; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;
 struct iio_dev* FUNC_2 (struct device*) ;
 struct lm3533_als* FUNC_3 (struct iio_dev*) ;
 scalar_t__ FUNC_4 (char const*,int ,unsigned long*) ;
 int FUNC_5 (struct iio_dev*,int *) ;
 int FUNC_6 (struct iio_dev*,unsigned long) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_3,
     struct device_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 struct iio_dev *VAR_7 = FUNC_2(VAR_3);
 struct lm3533_als *VAR_8 = FUNC_3(VAR_7);
 unsigned long VAR_9;
 bool VAR_10;
 u8 VAR_11;
 int VAR_12;

 if (!VAR_8->irq)
  return -VAR_0;

 if (FUNC_4(VAR_5, 0, &VAR_9))
  return -VAR_1;

 VAR_10 = FUNC_8(VAR_2, &VAR_8->flags);

 if (VAR_9 && !VAR_10) {
  VAR_12 = FUNC_5(VAR_7, &VAR_11);
  if (VAR_12)
   return VAR_12;

  FUNC_0(&VAR_8->zone, VAR_11);

  FUNC_7(VAR_2, &VAR_8->flags);
 }

 VAR_12 = FUNC_6(VAR_7, VAR_9);
 if (VAR_12) {
  if (!VAR_10)
   FUNC_1(VAR_2, &VAR_8->flags);

  return VAR_12;
 }

 if (!VAR_9)
  FUNC_1(VAR_2, &VAR_8->flags);

 return VAR_6;
}
