
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct TYPE_2__ {int runtime_status; scalar_t__ disable_depth; scalar_t__ runtime_error; } ;
struct device {TYPE_1__ power; } ;
typedef int ssize_t ;


 int VAR_0 ;




 int FUNC_0 (char*,char const*) ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 const char *VAR_4;

 if (VAR_1->power.runtime_error) {
  VAR_4 = "error\n";
 } else if (VAR_1->power.disable_depth) {
  VAR_4 = "unsupported\n";
 } else {
  switch (VAR_1->power.runtime_status) {
  case 129:
   VAR_4 = "suspended\n";
   break;
  case 128:
   VAR_4 = "suspending\n";
   break;
  case 130:
   VAR_4 = "resuming\n";
   break;
  case 131:
   VAR_4 = "active\n";
   break;
  default:
   return -VAR_0;
  }
 }
 return FUNC_0(VAR_3, VAR_4);
}
