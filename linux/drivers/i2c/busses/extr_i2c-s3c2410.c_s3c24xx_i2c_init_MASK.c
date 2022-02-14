
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_i2c {scalar_t__ regs; int dev; struct s3c2410_platform_i2c* pdata; } ;
struct s3c2410_platform_i2c {unsigned int slave_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct s3c24xx_i2c*,unsigned int*) ;
 int FUNC_5 (unsigned int,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct s3c24xx_i2c *VAR_4)
{
 struct s3c2410_platform_i2c *VAR_5;
 unsigned int VAR_6;



 VAR_5 = VAR_4->pdata;



 FUNC_5(VAR_5->slave_addr, VAR_4->regs + VAR_1);

 FUNC_2(VAR_4->dev, "slave address 0x%02x\n", VAR_5->slave_addr);

 FUNC_6(0, VAR_4->regs + VAR_2);
 FUNC_6(0, VAR_4->regs + VAR_3);



 if (FUNC_4(VAR_4, &VAR_6) != 0) {
  FUNC_1(VAR_4->dev, "cannot meet bus frequency required\n");
  return -VAR_0;
 }



 FUNC_2(VAR_4->dev, "bus frequency set to %d KHz\n", VAR_6);
 FUNC_0(VAR_4->dev, "S3C2410_IICCON=0x%02x\n",
  FUNC_3(VAR_4->regs + VAR_2));

 return 0;
}
