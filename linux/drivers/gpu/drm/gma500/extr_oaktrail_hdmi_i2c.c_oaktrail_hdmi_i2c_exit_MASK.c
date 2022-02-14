
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int irq; } ;
struct oaktrail_hdmi_dev {struct hdmi_i2c_dev* i2c_dev; } ;
struct hdmi_i2c_dev {int dummy; } ;


 int FUNC_0 (int ,struct oaktrail_hdmi_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hdmi_i2c_dev*) ;
 int VAR_0 ;
 struct oaktrail_hdmi_dev* FUNC_3 (struct pci_dev*) ;

void FUNC_4(struct pci_dev *VAR_1)
{
 struct oaktrail_hdmi_dev *VAR_2;
 struct hdmi_i2c_dev *VAR_3;

 VAR_2 = FUNC_3(VAR_1);
 FUNC_1(&VAR_0);

 VAR_3 = VAR_2->i2c_dev;
 FUNC_2(VAR_3);
 FUNC_0(VAR_1->irq, VAR_2);
}
