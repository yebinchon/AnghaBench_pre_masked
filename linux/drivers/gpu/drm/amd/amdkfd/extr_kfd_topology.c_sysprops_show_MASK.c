
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int platform_rev; int platform_id; int platform_oem; struct attribute attr_props; int generation_count; struct attribute attr_genid; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct kobject *VAR_2, struct attribute *VAR_3,
  char *VAR_4)
{
 ssize_t VAR_5;


 VAR_4[0] = 0;

 if (VAR_3 == &VAR_1.attr_genid) {
  VAR_5 = FUNC_0(VAR_4, VAR_1.generation_count);
 } else if (VAR_3 == &VAR_1.attr_props) {
  FUNC_1(VAR_4, "platform_oem",
    VAR_1.platform_oem);
  FUNC_1(VAR_4, "platform_id",
    VAR_1.platform_id);
  VAR_5 = FUNC_1(VAR_4, "platform_rev",
    VAR_1.platform_rev);
 } else {
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
