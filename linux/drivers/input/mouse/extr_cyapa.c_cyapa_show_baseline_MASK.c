
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cyapa {int state_sync_lock; TYPE_1__* ops; scalar_t__ operational; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* show_baseline ) (struct device*,struct device_attribute*,char*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct cyapa*) ;
 int FUNC_1 (struct cyapa*) ;
 struct cyapa* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct device*,struct device_attribute*,char*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
       struct device_attribute *VAR_2, char *VAR_3)
{
 struct cyapa *VAR_4 = FUNC_2(VAR_1);
 ssize_t VAR_5;

 VAR_5 = FUNC_3(&VAR_4->state_sync_lock);
 if (VAR_5)
  return VAR_5;

 if (VAR_4->operational) {
  FUNC_1(VAR_4);
  VAR_5 = VAR_4->ops->show_baseline(VAR_1, VAR_2, VAR_3);
  FUNC_0(VAR_4);
 } else {
  VAR_5 = -VAR_0;
 }

 FUNC_4(&VAR_4->state_sync_lock);
 return VAR_5;
}
