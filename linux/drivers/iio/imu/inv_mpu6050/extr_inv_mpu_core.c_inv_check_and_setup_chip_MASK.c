
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inv_mpu6050_state {size_t chip_type; TYPE_1__* reg; int map; TYPE_2__* hw; } ;
struct TYPE_4__ {unsigned int whoami; int name; TYPE_1__* reg; } ;
struct TYPE_3__ {int pwr_mgmt_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int,int ) ;
 int FUNC_1 (int ,char*,unsigned int,int ,unsigned int,int ) ;
 TYPE_2__* VAR_7 ;
 int FUNC_2 (struct inv_mpu6050_state*,int) ;
 int FUNC_3 (struct inv_mpu6050_state*,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,unsigned int*) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct inv_mpu6050_state *VAR_8)
{
 int VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 VAR_8->hw = &VAR_7[VAR_8->chip_type];
 VAR_8->reg = VAR_7[VAR_8->chip_type].reg;


 VAR_9 = FUNC_6(VAR_8->map, VAR_5, &VAR_10);
 if (VAR_9)
  return VAR_9;
 if (VAR_10 != VAR_8->hw->whoami) {

  for (VAR_11 = 0; VAR_11 < VAR_6; ++VAR_11) {
   if (VAR_10 == VAR_7[VAR_11].whoami) {
    FUNC_1(FUNC_5(VAR_8->map),
     "whoami mismatch got %#02x (%s)"
     "expected %#02hhx (%s)\n",
     VAR_10, VAR_7[VAR_11].name,
     VAR_8->hw->whoami, VAR_8->hw->name);
    break;
   }
  }
  if (VAR_11 >= VAR_6) {
   FUNC_0(FUNC_5(VAR_8->map),
    "invalid whoami %#02x expected %#02hhx (%s)\n",
    VAR_10, VAR_8->hw->whoami, VAR_8->hw->name);
   return -VAR_0;
  }
 }


 VAR_9 = FUNC_7(VAR_8->map, VAR_8->reg->pwr_mgmt_1,
         VAR_1);
 if (VAR_9)
  return VAR_9;
 FUNC_4(VAR_4);







 VAR_9 = FUNC_2(VAR_8, 1);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_3(VAR_8, 0,
        VAR_2);
 if (VAR_9)
  goto error_power_off;
 VAR_9 = FUNC_3(VAR_8, 0,
        VAR_3);
 if (VAR_9)
  goto error_power_off;

 return FUNC_2(VAR_8, 0);

error_power_off:
 FUNC_2(VAR_8, 0);
 return VAR_9;
}
