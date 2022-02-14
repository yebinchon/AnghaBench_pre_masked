
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm_device {TYPE_1__* data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int hw_override; } ;


 int FUNC_0 (char*,char*,int) ;
 struct stm_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
    struct device_attribute *VAR_1,
    char *VAR_2)
{
 struct stm_device *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, "%u\n", VAR_3->data->hw_override);

 return VAR_4;
}
