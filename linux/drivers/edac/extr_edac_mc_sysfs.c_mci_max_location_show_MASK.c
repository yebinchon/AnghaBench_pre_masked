
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_ctl_info {int n_layers; TYPE_1__* layers; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {size_t type; int size; } ;


 char** VAR_0 ;
 int FUNC_0 (char*,char*,char*,int) ;
 struct mem_ctl_info* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
         struct device_attribute *VAR_2,
         char *VAR_3)
{
 struct mem_ctl_info *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;
 char *VAR_6 = VAR_3;

 for (VAR_5 = 0; VAR_5 < VAR_4->n_layers; VAR_5++) {
  VAR_6 += FUNC_0(VAR_6, "%s %d ",
        VAR_0[VAR_4->layers[VAR_5].type],
        VAR_4->layers[VAR_5].size - 1);
 }

 return VAR_6 - VAR_3;
}
