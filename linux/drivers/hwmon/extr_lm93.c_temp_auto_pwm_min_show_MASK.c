
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lm93_data {int* auto_pwm_min_hyst; int** block9; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 size_t VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct lm93_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;
 TYPE_1__* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
          struct device_attribute *VAR_4,
          char *VAR_5)
{
 int VAR_6 = (FUNC_3(VAR_4))->index;
 u8 VAR_7, VAR_8;
 struct lm93_data *VAR_9 = FUNC_1(VAR_3);
 VAR_7 = VAR_9->auto_pwm_min_hyst[VAR_6/2] >> 4 & 0x0f;
 VAR_8 = VAR_9->block9[VAR_6][VAR_0];
 return FUNC_2(VAR_5, "%d\n", FUNC_0(VAR_7, (VAR_8 & 0x07) ?
    VAR_2 : VAR_1));
}
