
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct sirfsoc_i2c {scalar_t__ finished_len; scalar_t__ msg_len; scalar_t__ base; int done; scalar_t__ msg_read; TYPE_1__ adapter; int err_status; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct sirfsoc_i2c*) ;
 int FUNC_5 (struct sirfsoc_i2c*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_8, void *VAR_9)
{
 struct sirfsoc_i2c *VAR_10 = (struct sirfsoc_i2c *)VAR_9;
 u32 VAR_11 = FUNC_6(VAR_10->base + VAR_4);

 if (VAR_11 & VAR_6) {

  VAR_10->err_status = VAR_2;
  FUNC_7(VAR_6, VAR_10->base + VAR_4);

  if (VAR_11 & VAR_7)
   FUNC_2(&VAR_10->adapter.dev, "ACK not received\n");
  else
   FUNC_3(&VAR_10->adapter.dev, "I2C error\n");






  FUNC_7(FUNC_6(VAR_10->base + VAR_1) | VAR_3,
    VAR_10->base + VAR_1);
  while (FUNC_6(VAR_10->base + VAR_1) & VAR_3)
   FUNC_1();

  FUNC_0(&VAR_10->done);
 } else if (VAR_11 & VAR_5) {

  if (VAR_10->msg_read)
   FUNC_5(VAR_10);
  if (VAR_10->finished_len == VAR_10->msg_len)
   FUNC_0(&VAR_10->done);
  else
   FUNC_4(VAR_10);

  FUNC_7(VAR_5, VAR_10->base + VAR_4);
 }

 return VAR_0;
}
