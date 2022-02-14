
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int irq; } ;
struct oaktrail_hdmi_dev {struct hdmi_i2c_dev* i2c_dev; } ;
struct hdmi_i2c_dev {int i2c_lock; int complete; int status; TYPE_1__* adap; } ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,struct oaktrail_hdmi_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct hdmi_i2c_dev*) ;
 struct hdmi_i2c_dev* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 TYPE_1__ VAR_4 ;
 int FUNC_7 () ;
 int VAR_5 ;
 struct oaktrail_hdmi_dev* FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (int ,int ,int ,int ,struct oaktrail_hdmi_dev*) ;

int FUNC_10(struct pci_dev *VAR_6)
{
 struct oaktrail_hdmi_dev *VAR_7;
 struct hdmi_i2c_dev *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_8(VAR_6);

 VAR_8 = FUNC_5(sizeof(struct hdmi_i2c_dev), VAR_1);
 if (VAR_8 == ((void*)0)) {
  FUNC_0("Can't allocate interface\n");
  VAR_9 = -VAR_0;
  goto exit;
 }

 VAR_8->adap = &VAR_4;
 VAR_8->status = VAR_2;
 FUNC_3(&VAR_8->complete);
 FUNC_6(&VAR_8->i2c_lock);
 FUNC_2(&VAR_4, VAR_7);
 VAR_7->i2c_dev = VAR_8;


 FUNC_7();


 VAR_9 = FUNC_9(VAR_6->irq, VAR_5, VAR_3,
     VAR_4.name, VAR_7);
 if (VAR_9) {
  FUNC_0("Failed to request IRQ for I2C controller\n");
  goto err;
 }


 VAR_9 = FUNC_1(&VAR_4);
 return VAR_9;

err:
 FUNC_4(VAR_8);
exit:
 return VAR_9;
}
