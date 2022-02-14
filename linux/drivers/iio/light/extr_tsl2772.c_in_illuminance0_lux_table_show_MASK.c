
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tsl2772_chip {TYPE_1__* tsl2772_device_lux; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int ch0; int ch1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 struct tsl2772_chip* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,int ,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
           struct device_attribute *VAR_3,
           char *VAR_4)
{
 struct tsl2772_chip *VAR_5 = FUNC_1(FUNC_0(VAR_2));
 int VAR_6 = 0;
 int VAR_7 = 0;

 while (VAR_6 < VAR_1) {
  VAR_7 += FUNC_2(VAR_4 + VAR_7, VAR_0, "%u,%u,",
   VAR_5->tsl2772_device_lux[VAR_6].ch0,
   VAR_5->tsl2772_device_lux[VAR_6].ch1);
  if (VAR_5->tsl2772_device_lux[VAR_6].ch0 == 0) {




   VAR_7--;
   break;
  }
  VAR_6++;
 }

 VAR_7 += FUNC_2(VAR_4 + VAR_7, VAR_0, "\n");
 return VAR_7;
}
