
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_interface {int active; int mutex; int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct gb_interface*) ;
 int FUNC_2 (struct gb_interface*) ;
 int FUNC_3 (struct gb_interface*) ;
 int FUNC_4 (struct gb_interface*) ;
 scalar_t__ FUNC_5 (char const*,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct gb_interface* FUNC_8 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_1,
     struct device_attribute *VAR_2, const char *VAR_3,
     size_t VAR_4)
{
 struct gb_interface *VAR_5 = FUNC_8(VAR_1);
 bool VAR_6;
 int VAR_7 = 0;

 if (FUNC_5(VAR_3, &VAR_6))
  return -VAR_0;

 FUNC_6(&VAR_5->mutex);

 if (VAR_6 == VAR_5->active)
  goto unlock;

 if (VAR_6) {
  VAR_7 = FUNC_1(VAR_5);
  if (VAR_7) {
   FUNC_0(&VAR_5->dev,
    "failed to activate interface: %d\n", VAR_7);
   goto unlock;
  }

  VAR_7 = FUNC_4(VAR_5);
  if (VAR_7) {
   FUNC_0(&VAR_5->dev,
    "failed to enable interface: %d\n", VAR_7);
   FUNC_2(VAR_5);
   goto unlock;
  }
 } else {
  FUNC_3(VAR_5);
  FUNC_2(VAR_5);
 }

unlock:
 FUNC_7(&VAR_5->mutex);

 if (VAR_7)
  return VAR_7;

 return VAR_4;
}
