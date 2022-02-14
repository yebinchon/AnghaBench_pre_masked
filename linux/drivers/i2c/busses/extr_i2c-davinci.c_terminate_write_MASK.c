
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct davinci_i2c_dev {int dev; int terminate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct davinci_i2c_dev*,int ) ;
 int FUNC_1 (struct davinci_i2c_dev*,int ,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct davinci_i2c_dev *VAR_3)
{
 u16 VAR_4 = FUNC_0(VAR_3, VAR_0);
 VAR_4 |= VAR_1 | VAR_2;
 FUNC_1(VAR_3, VAR_0, VAR_4);

 if (!VAR_3->terminate)
  FUNC_2(VAR_3->dev, "TDR IRQ while no data to send\n");
}
