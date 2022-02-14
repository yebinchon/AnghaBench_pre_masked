
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int timeout; } ;
struct aspeed_i2c_bus {int lock; scalar_t__ base; scalar_t__ cmd_err; TYPE_1__ adap; int cmd_complete; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct aspeed_i2c_bus*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 unsigned long FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct aspeed_i2c_bus *VAR_5)
{
 unsigned long VAR_6, VAR_7;
 int VAR_8 = 0;
 u32 VAR_9;

 FUNC_4(&VAR_5->lock, VAR_7);
 VAR_9 = FUNC_2(VAR_5->base + VAR_4);

 if (VAR_9 & VAR_3) {

  if (VAR_9 & VAR_2)
   goto out;
  FUNC_1(VAR_5->dev, "SCL hung (state %x), attempting recovery\n",
   VAR_9);

  FUNC_3(&VAR_5->cmd_complete);
  FUNC_7(VAR_1, VAR_5->base + VAR_4);
  FUNC_5(&VAR_5->lock, VAR_7);

  VAR_6 = FUNC_6(
    &VAR_5->cmd_complete, VAR_5->adap.timeout);

  FUNC_4(&VAR_5->lock, VAR_7);
  if (VAR_6 == 0)
   goto reset_out;
  else if (VAR_5->cmd_err)
   goto reset_out;

  else if (!(FUNC_2(VAR_5->base + VAR_4) &
      VAR_2))
   goto reset_out;

 } else {
  FUNC_1(VAR_5->dev, "SDA hung (state %x), attempting recovery\n",
   VAR_9);

  FUNC_3(&VAR_5->cmd_complete);

  FUNC_7(VAR_0,
         VAR_5->base + VAR_4);
  FUNC_5(&VAR_5->lock, VAR_7);

  VAR_6 = FUNC_6(
    &VAR_5->cmd_complete, VAR_5->adap.timeout);

  FUNC_4(&VAR_5->lock, VAR_7);
  if (VAR_6 == 0)
   goto reset_out;
  else if (VAR_5->cmd_err)
   goto reset_out;

  else if (!(FUNC_2(VAR_5->base + VAR_4) &
      VAR_3))
   goto reset_out;
 }

out:
 FUNC_5(&VAR_5->lock, VAR_7);

 return VAR_8;

reset_out:
 FUNC_5(&VAR_5->lock, VAR_7);

 return FUNC_0(VAR_5);
}
