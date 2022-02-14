
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (struct device*) ;
 struct zpci_dev* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct zpci_dev*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct zpci_dev *VAR_3 = FUNC_2(FUNC_1(VAR_0));

 return FUNC_0(VAR_2, FUNC_3(VAR_3) ? "1\n" : "0\n");
}
