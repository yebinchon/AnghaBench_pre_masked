
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct extcon_dev {int max_supported; int state; size_t* supported_cable; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 (int) ;
 struct extcon_dev* FUNC_1 (struct device*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
     char *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 struct extcon_dev *VAR_6 = FUNC_1(VAR_1);

 if (VAR_6->max_supported == 0)
  return FUNC_2(VAR_3, "%u\n", VAR_6->state);

 for (VAR_4 = 0; VAR_4 < VAR_6->max_supported; VAR_4++) {
  VAR_5 += FUNC_2(VAR_3 + VAR_5, "%s=%d\n",
    VAR_0[VAR_6->supported_cable[VAR_4]].name,
     !!(VAR_6->state & FUNC_0(VAR_4)));
 }

 return VAR_5;
}
