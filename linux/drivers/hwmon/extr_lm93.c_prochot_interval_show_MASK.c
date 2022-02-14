
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lm93_data {int prochot_interval; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int) ;
 struct lm93_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;
 TYPE_1__* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
         struct device_attribute *VAR_1, char *VAR_2)
{
 int VAR_3 = (FUNC_3(VAR_1))->index;
 struct lm93_data *VAR_4 = FUNC_1(VAR_0);
 u8 VAR_5;
 if (VAR_3 == 1)
  VAR_5 = (VAR_4->prochot_interval & 0xf0) >> 4;
 else
  VAR_5 = VAR_4->prochot_interval & 0x0f;
 return FUNC_2(VAR_2, "%d\n", FUNC_0(VAR_5));
}
