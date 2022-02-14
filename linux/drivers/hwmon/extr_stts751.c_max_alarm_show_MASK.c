
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stts751_priv {int notify_max; int max_alert; int access_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct stts751_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,char*,int) ;
 int FUNC_4 (struct stts751_priv*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 int VAR_4;
 struct stts751_priv *VAR_5 = FUNC_0(VAR_1);

 FUNC_1(&VAR_5->access_lock);
 VAR_4 = FUNC_4(VAR_5);
 if (!VAR_4)
  VAR_5->notify_max = 1;
 FUNC_2(&VAR_5->access_lock);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_3(VAR_3, VAR_0, "%d\n", VAR_5->max_alert);
}
