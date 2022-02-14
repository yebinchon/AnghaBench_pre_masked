
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct lm75_data {int resolution; int regmap; TYPE_1__* params; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int resolution_limits; } ;


 int FUNC_0 (long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long FUNC_1 (long,int ,int ) ;
 struct lm75_data* FUNC_2 (struct device*) ;


 int FUNC_3 (int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_5, u32 VAR_6, long VAR_7)
{
 struct lm75_data *VAR_8 = FUNC_2(VAR_5);
 u8 VAR_9;
 int VAR_10;

 switch (VAR_6) {
 case 129:
  VAR_10 = VAR_2;
  break;
 case 128:
  VAR_10 = VAR_1;
  break;
 default:
  return -VAR_0;
 }





 if (VAR_8->params->resolution_limits)
  VAR_9 = VAR_8->params->resolution_limits;
 else
  VAR_9 = VAR_8->resolution;

 VAR_7 = FUNC_1(VAR_7, VAR_4, VAR_3);
 VAR_7 = FUNC_0(VAR_7 << (VAR_9 - 8),
     1000) << (16 - VAR_9);

 return FUNC_3(VAR_8->regmap, VAR_10, (u16)VAR_7);
}
