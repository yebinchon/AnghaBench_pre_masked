
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_polled_dev {unsigned int poll_interval_min; unsigned int poll_interval_max; unsigned int poll_interval; int work; struct input_dev* input; } ;
struct input_dev {int mutex; scalar_t__ users; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct input_polled_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (struct input_polled_dev*) ;
 int FUNC_3 (char const*,int ,unsigned int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
    struct device_attribute *VAR_2, const char *VAR_3,
    size_t VAR_4)
{
 struct input_polled_dev *VAR_5 = FUNC_1(VAR_1);
 struct input_dev *VAR_6 = VAR_5->input;
 unsigned int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_3, 0, &VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_7 < VAR_5->poll_interval_min)
  return -VAR_0;

 if (VAR_7 > VAR_5->poll_interval_max)
  return -VAR_0;

 FUNC_4(&VAR_6->mutex);

 VAR_5->poll_interval = VAR_7;

 if (VAR_6->users) {
  FUNC_0(&VAR_5->work);
  if (VAR_5->poll_interval > 0)
   FUNC_2(VAR_5);
 }

 FUNC_5(&VAR_6->mutex);

 return VAR_4;
}
