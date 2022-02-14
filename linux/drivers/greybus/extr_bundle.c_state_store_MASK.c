
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct gb_bundle {TYPE_1__ dev; int state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int *,int *,char*) ;
 struct gb_bundle* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2, struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 struct gb_bundle *VAR_6 = FUNC_3(VAR_2);

 FUNC_0(VAR_6->state);
 VAR_6->state = FUNC_1(VAR_4, VAR_1);
 if (!VAR_6->state)
  return -VAR_0;


 FUNC_2(&VAR_6->dev.kobj, ((void*)0), "state");

 return VAR_5;
}
