
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_netdev_data {char* device_name; int lock; scalar_t__ last_activity; int mode; int * net_dev; int work; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 struct led_netdev_data* FUNC_4 (struct device*) ;
 int FUNC_5 (char*,char const*,size_t) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (struct led_netdev_data*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_4,
     struct device_attribute *VAR_5, const char *VAR_6,
     size_t VAR_7)
{
 struct led_netdev_data *VAR_8 = FUNC_4(VAR_4);

 if (VAR_7 >= VAR_1)
  return -VAR_0;

 FUNC_0(&VAR_8->work);

 FUNC_9(&VAR_8->lock);

 if (VAR_8->net_dev) {
  FUNC_3(VAR_8->net_dev);
  VAR_8->net_dev = ((void*)0);
 }

 FUNC_5(VAR_8->device_name, VAR_6, VAR_7);
 VAR_8->device_name[VAR_7] = 0;
 if (VAR_7 > 0 && VAR_8->device_name[VAR_7 - 1] == '\n')
  VAR_8->device_name[VAR_7 - 1] = 0;

 if (VAR_8->device_name[0] != 0)
  VAR_8->net_dev =
      FUNC_2(&VAR_3, VAR_8->device_name);

 FUNC_1(VAR_2, &VAR_8->mode);
 if (VAR_8->net_dev != ((void*)0))
  if (FUNC_6(VAR_8->net_dev))
   FUNC_8(VAR_2, &VAR_8->mode);

 VAR_8->last_activity = 0;

 FUNC_7(VAR_8);
 FUNC_10(&VAR_8->lock);

 return VAR_7;
}
