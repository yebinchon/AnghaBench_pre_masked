
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cpm_i2c {int version; int i2c_addr; TYPE_2__* i2c_ram; TYPE_2__* i2c_reg; int dp_addr; int * txdma; int * txbuf; TYPE_1__* ofdev; int * rxdma; int * rxbuf; int adap; int irq; } ;
struct TYPE_4__ {int i2cer; int i2cmr; int i2mod; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,scalar_t__,int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void FUNC_6(struct cpm_i2c *VAR_3)
{
 int VAR_4;


 FUNC_0(&VAR_3->i2c_reg->i2mod, VAR_2);


 FUNC_5(&VAR_3->i2c_reg->i2cmr, 0);
 FUNC_5(&VAR_3->i2c_reg->i2cer, 0xff);

 FUNC_3(VAR_3->irq, &VAR_3->adap);


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_2(&VAR_3->ofdev->dev, VAR_1 + 1,
   VAR_3->rxbuf[VAR_4], VAR_3->rxdma[VAR_4]);
  FUNC_2(&VAR_3->ofdev->dev, VAR_1 + 1,
   VAR_3->txbuf[VAR_4], VAR_3->txdma[VAR_4]);
 }

 FUNC_1(VAR_3->dp_addr);
 FUNC_4(VAR_3->i2c_reg);

 if ((VAR_3->version == 1) && (!VAR_3->i2c_addr))
  FUNC_4(VAR_3->i2c_ram);
 if (VAR_3->version == 2)
  FUNC_1(VAR_3->i2c_addr);
}
