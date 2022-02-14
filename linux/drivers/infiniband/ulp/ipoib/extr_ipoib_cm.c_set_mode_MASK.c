
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ reg_state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct net_device*,char const*) ;
 size_t FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct net_device* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3, struct device_attribute *VAR_4,
   const char *VAR_5, size_t VAR_6)
{
 struct net_device *VAR_7 = FUNC_4(VAR_3);
 int VAR_8;

 if (!FUNC_2()) {
  return FUNC_1();
 }

 if (VAR_7->reg_state != VAR_2) {
  FUNC_3();
  return -VAR_1;
 }

 VAR_8 = FUNC_0(VAR_7, VAR_5);





 if (VAR_8 != -VAR_0)
  FUNC_3();

 return (!VAR_8 || VAR_8 == -VAR_0) ? VAR_6 : VAR_8;
}
