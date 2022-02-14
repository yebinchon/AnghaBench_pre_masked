
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_i2c {scalar_t__ speed_hz; int ignore_restart_irq; int op; scalar_t__ auto_restart; int dev; TYPE_1__* dev_comp; } ;
struct i2c_msg {int flags; scalar_t__ addr; int buf; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_2__ {scalar_t__ auto_restart; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*) ;
 struct mtk_i2c* FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (struct mtk_i2c*) ;
 int FUNC_3 (struct mtk_i2c*) ;
 int FUNC_4 (struct mtk_i2c*,struct i2c_msg*,int,int) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_6,
       struct i2c_msg VAR_7[], int VAR_8)
{
 int VAR_9;
 int VAR_10 = VAR_8;
 struct mtk_i2c *VAR_11 = FUNC_1(VAR_6);

 VAR_9 = FUNC_3(VAR_11);
 if (VAR_9)
  return VAR_9;

 VAR_11->auto_restart = VAR_11->dev_comp->auto_restart;


 if (VAR_11->auto_restart && VAR_8 == 2) {
  if (!(VAR_7[0].flags & VAR_4) && (VAR_7[1].flags & VAR_4) &&
      VAR_7[0].addr == VAR_7[1].addr) {
   VAR_11->auto_restart = 0;
  }
 }

 if (VAR_11->auto_restart && VAR_8 >= 2 && VAR_11->speed_hz > VAR_5)



  VAR_11->ignore_restart_irq = 1;
 else
  VAR_11->ignore_restart_irq = 0;

 while (VAR_10--) {
  if (!VAR_7->buf) {
   FUNC_0(VAR_11->dev, "data buffer is NULL.\n");
   VAR_9 = -VAR_0;
   goto err_exit;
  }

  if (VAR_7->flags & VAR_4)
   VAR_11->op = VAR_1;
  else
   VAR_11->op = VAR_2;

  if (!VAR_11->auto_restart) {
   if (VAR_8 > 1) {

    VAR_11->op = VAR_3;
    VAR_10--;
   }
  }


  VAR_9 = FUNC_4(VAR_11, VAR_7, VAR_8, VAR_10);
  if (VAR_9 < 0)
   goto err_exit;

  VAR_7++;
 }

 VAR_9 = VAR_8;

err_exit:
 FUNC_2(VAR_11);
 return VAR_9;
}
