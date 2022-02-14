
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max1363_state {size_t monitor_speed; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct device*) ;
 struct max1363_state* FUNC_1 (int ) ;
 int* VAR_0 ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
     struct device_attribute *VAR_2,
     char *VAR_3)
{
 struct max1363_state *VAR_4 = FUNC_1(FUNC_0(VAR_1));
 return FUNC_2(VAR_3, "%d\n", VAR_0[VAR_4->monitor_speed]);
}
