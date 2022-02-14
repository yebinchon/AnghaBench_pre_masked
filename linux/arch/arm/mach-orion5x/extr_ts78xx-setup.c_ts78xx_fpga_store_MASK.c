
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int state; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static ssize_t FUNC_4(struct kobject *VAR_3,
   struct kobj_attribute *VAR_4, const char *VAR_5, size_t VAR_6)
{
 int VAR_7, VAR_8;

 if (VAR_2.state < 0) {
  FUNC_0("FPGA borked, you must powercycle ASAP\n");
  return -VAR_0;
 }

 if (FUNC_1(VAR_5, "online", sizeof("online") - 1) == 0)
  VAR_7 = 1;
 else if (FUNC_1(VAR_5, "offline", sizeof("offline") - 1) == 0)
  VAR_7 = 0;
 else
  return -VAR_1;

 if (VAR_2.state == VAR_7)
  return VAR_6;

 VAR_8 = (VAR_2.state == 0)
  ? FUNC_2()
  : FUNC_3();

 if (!(VAR_8 < 0))
  VAR_2.state = VAR_7;

 return VAR_6;
}
