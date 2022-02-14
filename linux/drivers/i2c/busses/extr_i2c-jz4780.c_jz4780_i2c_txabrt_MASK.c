
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct jz4780_i2c {size_t cmd; TYPE_1__ adap; int * data_buf; int * cmd_buf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int,int ) ;
 int FUNC_2 (int *,char*,size_t,...) ;
 int * VAR_1 ;
 int FUNC_3 (struct jz4780_i2c*,int ) ;

__attribute__((used)) static void FUNC_4(struct jz4780_i2c *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_2(&VAR_2->adap.dev, "txabrt: 0x%08x\n", VAR_3);
 FUNC_2(&VAR_2->adap.dev, "device addr=%x\n",
  FUNC_3(VAR_2, VAR_0));
 FUNC_2(&VAR_2->adap.dev, "send cmd count:%d  %d\n",
  VAR_2->cmd, VAR_2->cmd_buf[VAR_2->cmd]);
 FUNC_2(&VAR_2->adap.dev, "receive data count:%d  %d\n",
  VAR_2->cmd, VAR_2->data_buf[VAR_2->cmd]);

 for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
  if (VAR_3 & FUNC_0(VAR_4))
   FUNC_1(&VAR_2->adap.dev, "I2C TXABRT[%d]=%s\n",
    VAR_4, VAR_1[VAR_4]);
 }
}
