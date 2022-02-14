
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct dw_i2c_dev {int adapter; int (* disable ) (struct dw_i2c_dev*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pci_dev*) ;
 struct dw_i2c_dev* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dw_i2c_dev*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct dw_i2c_dev *VAR_1 = FUNC_2(VAR_0);

 VAR_1->disable(VAR_1);
 FUNC_3(&VAR_0->dev);
 FUNC_4(&VAR_0->dev);

 FUNC_0(&VAR_1->adapter);
 FUNC_1(VAR_0);
}
