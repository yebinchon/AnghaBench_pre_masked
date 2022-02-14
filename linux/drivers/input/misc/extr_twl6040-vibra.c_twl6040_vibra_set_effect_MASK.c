
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vibra_info {int direction; int strong_speed; int vibrmotor_res; int vibrdrv_res; TYPE_1__* supplies; int weak_speed; int viblmotor_res; int vibldrv_res; struct twl6040* twl6040; } ;
struct twl6040 {int dummy; } ;
struct TYPE_2__ {int consumer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct twl6040*,int ,int ) ;
 int FUNC_2 (int,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct vibra_info *VAR_2)
{
 struct twl6040 *VAR_3 = VAR_2->twl6040;
 u8 VAR_4, VAR_5;
 int VAR_6;


 VAR_6 = FUNC_0(VAR_2->supplies[0].consumer) / 1000;
 VAR_4 = FUNC_2(VAR_6, VAR_2->vibldrv_res,
         VAR_2->viblmotor_res,
         VAR_2->weak_speed, VAR_2->direction);


 VAR_6 = FUNC_0(VAR_2->supplies[1].consumer) / 1000;
 VAR_5 = FUNC_2(VAR_6, VAR_2->vibrdrv_res,
         VAR_2->vibrmotor_res,
         VAR_2->strong_speed, VAR_2->direction);

 FUNC_1(VAR_3, VAR_0, VAR_4);
 FUNC_1(VAR_3, VAR_1, VAR_5);
}
