
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct lm73_data {int ctrl; int lock; int client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct lm73_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,char*,int) ;
 struct sensor_device_attribute* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
     struct device_attribute *VAR_3, char *VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_5(VAR_3);
 struct lm73_data *VAR_6 = FUNC_0(VAR_2);
 s32 VAR_7;

 FUNC_2(&VAR_6->lock);
 VAR_7 = FUNC_1(VAR_6->client, VAR_0);
 if (VAR_7 < 0)
  goto abort;
 VAR_6->ctrl = VAR_7;
 FUNC_3(&VAR_6->lock);

 return FUNC_4(VAR_4, VAR_1, "%d\n", (VAR_7 >> VAR_5->index) & 1);

abort:
 FUNC_3(&VAR_6->lock);
 return VAR_7;
}
