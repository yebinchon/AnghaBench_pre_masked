
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,char*) ;
 struct ib_device* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
      char *VAR_3)
{
 struct ib_device *VAR_4 = FUNC_1(VAR_1);

 FUNC_0(VAR_4, VAR_3);
 FUNC_2(VAR_3, "\n", VAR_0);
 return FUNC_3(VAR_3);
}
