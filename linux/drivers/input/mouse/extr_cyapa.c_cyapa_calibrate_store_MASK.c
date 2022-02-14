
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cyapa {int state_sync_lock; TYPE_1__* ops; scalar_t__ operational; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* calibrate_store ) (struct device*,struct device_attribute*,char const*,size_t) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct cyapa*) ;
 int FUNC_1 (struct cyapa*) ;
 struct cyapa* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct device*,struct device_attribute*,char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
         struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct cyapa *VAR_5 = FUNC_2(VAR_1);
 int VAR_6;

 VAR_6 = FUNC_3(&VAR_5->state_sync_lock);
 if (VAR_6)
  return VAR_6;

 if (VAR_5->operational) {
  FUNC_1(VAR_5);
  VAR_6 = VAR_5->ops->calibrate_store(VAR_1, VAR_2, VAR_3, VAR_4);
  FUNC_0(VAR_5);
 } else {
  VAR_6 = -VAR_0;
 }

 FUNC_4(&VAR_5->state_sync_lock);
 return VAR_6 < 0 ? VAR_6 : VAR_4;
}
