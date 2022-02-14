
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct octeon_i2c {int adap; int clk; } ;


 int FUNC_0 (int *) ;
 struct octeon_i2c* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct octeon_i2c*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0)
{
 struct octeon_i2c *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(VAR_1);
 FUNC_2(&VAR_0->dev, VAR_1->clk);
 FUNC_0(&VAR_1->adap);
}
