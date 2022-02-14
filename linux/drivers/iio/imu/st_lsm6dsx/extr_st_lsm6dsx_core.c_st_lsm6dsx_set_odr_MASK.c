
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct st_lsm6dsx_sensor {int id; struct st_lsm6dsx_hw* hw; } ;
struct st_lsm6dsx_reg {int mask; int addr; } ;
struct st_lsm6dsx_hw {TYPE_2__* settings; int * iio_devs; } ;
struct TYPE_4__ {TYPE_1__* odr_table; } ;
struct TYPE_3__ {struct st_lsm6dsx_reg reg; } ;






 int VAR_0 ;
 unsigned int FUNC_0 (int ,int ) ;
 struct st_lsm6dsx_sensor* FUNC_1 (int ) ;
 int FUNC_2 (struct st_lsm6dsx_sensor*,int ,int *) ;
 int FUNC_3 (struct st_lsm6dsx_hw*,int ,int) ;
 int FUNC_4 (struct st_lsm6dsx_hw*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct st_lsm6dsx_sensor *VAR_1, u16 VAR_2)
{
 struct st_lsm6dsx_sensor *VAR_3 = VAR_1;
 struct st_lsm6dsx_hw *VAR_4 = VAR_1->hw;
 const struct st_lsm6dsx_reg *VAR_5;
 unsigned int VAR_6;
 u8 VAR_7 = 0;
 int VAR_8;

 switch (VAR_1->id) {
 case 130:
 case 129:
 case 128:
 case 131: {
  u16 VAR_9;
  int VAR_10;







  VAR_3 = FUNC_1(VAR_4->iio_devs[131]);
  for (VAR_10 = 131; VAR_10 < VAR_0; VAR_10++) {
   if (!VAR_4->iio_devs[VAR_10] || VAR_10 == VAR_1->id)
    continue;

   VAR_9 = FUNC_3(VAR_4, VAR_2, VAR_10);
   if (VAR_9 != VAR_2)

    return 0;
  }
  break;
 }
 default:
  break;
 }

 if (VAR_2 > 0) {
  VAR_8 = FUNC_2(VAR_3, VAR_2, &VAR_7);
  if (VAR_8 < 0)
   return VAR_8;
 }

 VAR_5 = &VAR_4->settings->odr_table[VAR_3->id].reg;
 VAR_6 = FUNC_0(VAR_7, VAR_5->mask);
 return FUNC_4(VAR_4, VAR_5->addr, VAR_5->mask, VAR_6);
}
