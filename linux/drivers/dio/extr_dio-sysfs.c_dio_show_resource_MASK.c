
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct dio_dev*) ;
 int FUNC_1 (struct dio_dev*) ;
 scalar_t__ FUNC_2 (struct dio_dev*) ;
 int FUNC_3 (char*,char*,unsigned long,unsigned long,int ) ;
 struct dio_dev* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct dio_dev *VAR_3 = FUNC_4(VAR_0);

 return FUNC_3(VAR_2, "0x%08lx 0x%08lx 0x%08lx\n",
         (unsigned long)FUNC_2(VAR_3),
         (unsigned long)FUNC_0(VAR_3),
         FUNC_1(VAR_3));
}
