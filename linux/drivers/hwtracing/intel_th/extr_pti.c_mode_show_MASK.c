
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pti_device {size_t mode; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct pti_device* FUNC_0 (struct device*) ;
 int * VAR_1 ;
 int FUNC_1 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2, struct device_attribute *VAR_3,
    char *VAR_4)
{
 struct pti_device *VAR_5 = FUNC_0(VAR_2);

 return FUNC_1(VAR_4, VAR_0, "%d\n", VAR_1[VAR_5->mode]);
}
