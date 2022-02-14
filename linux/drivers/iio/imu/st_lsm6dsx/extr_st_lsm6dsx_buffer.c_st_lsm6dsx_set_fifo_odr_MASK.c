
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct st_lsm6dsx_sensor {size_t id; int odr; struct st_lsm6dsx_hw* hw; } ;
struct st_lsm6dsx_reg {int mask; scalar_t__ addr; } ;
struct st_lsm6dsx_hw {scalar_t__ enable_mask; TYPE_1__* settings; } ;
struct TYPE_2__ {struct st_lsm6dsx_reg* batch; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct st_lsm6dsx_sensor*,int ,int *) ;
 int FUNC_3 (struct st_lsm6dsx_hw*,scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_4(struct st_lsm6dsx_sensor *VAR_3,
       bool VAR_4)
{
 struct st_lsm6dsx_hw *VAR_5 = VAR_3->hw;
 const struct st_lsm6dsx_reg *VAR_6;
 u8 VAR_7;

 VAR_6 = &VAR_5->settings->batch[VAR_3->id];
 if (VAR_6->addr) {
  int VAR_8;

  if (VAR_4) {
   int VAR_9;

   VAR_9 = FUNC_2(VAR_3, VAR_3->odr,
         &VAR_7);
   if (VAR_9 < 0)
    return VAR_9;
  } else {
   VAR_7 = 0;
  }
  VAR_8 = FUNC_1(VAR_7, VAR_6->mask);
  return FUNC_3(VAR_5, VAR_6->addr,
           VAR_6->mask, VAR_8);
 } else {
  VAR_7 = VAR_5->enable_mask ? VAR_1 : 0;
  return FUNC_3(VAR_5,
     VAR_2,
     VAR_0,
     FUNC_0(VAR_0,
         VAR_7));
 }
}
