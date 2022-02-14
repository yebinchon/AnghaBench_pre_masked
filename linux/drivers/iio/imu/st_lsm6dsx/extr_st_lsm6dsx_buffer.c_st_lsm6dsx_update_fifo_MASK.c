
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_lsm6dsx_sensor {scalar_t__ id; int watermark; struct st_lsm6dsx_hw* hw; } ;
struct st_lsm6dsx_hw {scalar_t__ fifo_mode; int conf_lock; scalar_t__ enable_mask; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct st_lsm6dsx_hw*) ;
 int FUNC_3 (struct st_lsm6dsx_hw*) ;
 int FUNC_4 (struct st_lsm6dsx_sensor*,int) ;
 int FUNC_5 (struct st_lsm6dsx_hw*,int ) ;
 int FUNC_6 (struct st_lsm6dsx_sensor*,int) ;
 int FUNC_7 (struct st_lsm6dsx_sensor*,int) ;
 int FUNC_8 (struct st_lsm6dsx_hw*) ;
 int FUNC_9 (struct st_lsm6dsx_sensor*,int ) ;

int FUNC_10(struct st_lsm6dsx_sensor *VAR_5, bool VAR_6)
{
 struct st_lsm6dsx_hw *VAR_7 = VAR_5->hw;
 int VAR_8;

 FUNC_0(&VAR_7->conf_lock);

 if (VAR_7->fifo_mode != VAR_0) {
  VAR_8 = FUNC_2(VAR_7);
  if (VAR_8 < 0)
   goto out;
 }

 if (VAR_5->id == VAR_2 ||
     VAR_5->id == VAR_3 ||
     VAR_5->id == VAR_4) {
  VAR_8 = FUNC_7(VAR_5, VAR_6);
  if (VAR_8 < 0)
   goto out;
 } else {
  VAR_8 = FUNC_4(VAR_5, VAR_6);
  if (VAR_8 < 0)
   goto out;

  VAR_8 = FUNC_6(VAR_5, VAR_6);
  if (VAR_8 < 0)
   goto out;
 }

 VAR_8 = FUNC_8(VAR_7);
 if (VAR_8 < 0)
  goto out;

 VAR_8 = FUNC_9(VAR_5, VAR_5->watermark);
 if (VAR_8 < 0)
  goto out;

 if (VAR_7->enable_mask) {

  VAR_8 = FUNC_3(VAR_7);
  if (VAR_8 < 0)
   goto out;

  VAR_8 = FUNC_5(VAR_7, VAR_1);
 }

out:
 FUNC_1(&VAR_7->conf_lock);

 return VAR_8;
}
