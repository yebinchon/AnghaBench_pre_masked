
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_block {int state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;





 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,...) ;
 struct memory_block* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct memory_block *VAR_3 = FUNC_2(VAR_0);
 ssize_t VAR_4 = 0;





 switch (VAR_3->state) {
 case 128:
  VAR_4 = FUNC_1(VAR_2, "online\n");
  break;
 case 129:
  VAR_4 = FUNC_1(VAR_2, "offline\n");
  break;
 case 130:
  VAR_4 = FUNC_1(VAR_2, "going-offline\n");
  break;
 default:
  VAR_4 = FUNC_1(VAR_2, "ERROR-UNKNOWN-%ld\n",
    VAR_3->state);
  FUNC_0(1);
  break;
 }

 return VAR_4;
}
