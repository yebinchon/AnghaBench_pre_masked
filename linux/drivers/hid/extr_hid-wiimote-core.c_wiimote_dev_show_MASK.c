
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int devtype; int lock; } ;
struct wiimote_data {TYPE_1__ state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int __u8 ;
 struct wiimote_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
    struct device_attribute *VAR_1,
    char *VAR_2)
{
 struct wiimote_data *VAR_3 = FUNC_0(VAR_0);
 __u8 VAR_4;
 unsigned long VAR_5;

 FUNC_1(&VAR_3->state.lock, VAR_5);
 VAR_4 = VAR_3->state.devtype;
 FUNC_2(&VAR_3->state.lock, VAR_5);

 switch (VAR_4) {
 case 131:
  return FUNC_3(VAR_2, "generic\n");
 case 133:
  return FUNC_3(VAR_2, "gen10\n");
 case 132:
  return FUNC_3(VAR_2, "gen20\n");
 case 134:
  return FUNC_3(VAR_2, "balanceboard\n");
 case 129:
  return FUNC_3(VAR_2, "procontroller\n");
 case 130:
  return FUNC_3(VAR_2, "pending\n");
 case 128:

 default:
  return FUNC_3(VAR_2, "unknown\n");
 }
}
