
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max1363_state {int monitor_speed; } ;
struct iio_dev {int mlock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (unsigned long*) ;
 int VAR_0 ;
 struct iio_dev* FUNC_1 (struct device*) ;
 struct max1363_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 unsigned long* VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
     struct device_attribute *VAR_3,
     const char *VAR_4,
     size_t VAR_5)
{
 struct iio_dev *VAR_6 = FUNC_1(VAR_2);
 struct max1363_state *VAR_7 = FUNC_2(VAR_6);
 int VAR_8, VAR_9;
 unsigned long VAR_10;
 bool VAR_11 = 0;

 VAR_9 = FUNC_3(VAR_4, 10, &VAR_10);
 if (VAR_9)
  return -VAR_0;
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_1); VAR_8++)
  if (VAR_10 == VAR_1[VAR_8]) {
   VAR_11 = 1;
   break;
  }
 if (!VAR_11)
  return -VAR_0;

 FUNC_4(&VAR_6->mlock);
 VAR_7->monitor_speed = VAR_8;
 FUNC_5(&VAR_6->mlock);

 return 0;
}
