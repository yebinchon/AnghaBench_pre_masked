
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt8231_data {int* in_max; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;
 struct vt8231_data* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
  char *VAR_2)
{
 struct vt8231_data *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, "%d\n",
  (((VAR_3->in_max[5] - 3) * 10000 * 54) / (958 * 34)));
}
