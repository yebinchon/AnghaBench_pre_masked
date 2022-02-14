
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct saa7146_pci_extension_data {struct saa7146_extension* ext; } ;
struct saa7146_extension {scalar_t__ (* attach ) (struct saa7146_dev*,struct saa7146_pci_extension_data*) ;scalar_t__ (* probe ) (struct saa7146_dev*) ;} ;
struct TYPE_6__ {int dma_handle; void* cpu_addr; } ;
struct TYPE_5__ {int dma_handle; void* cpu_addr; } ;
struct TYPE_4__ {int dma_handle; void* cpu_addr; } ;
struct saa7146_dev {int mem; TYPE_3__ d_rps0; TYPE_2__ d_rps1; TYPE_1__ d_i2c; int v4l2_dev; int i2c_wq; int module; int i2c_lock; int slock; int int_slock; int v4l2_lock; struct saa7146_extension* ext; int revision; int name; struct pci_dev* pci; } ;
struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int irq; int subsystem_device; int subsystem_vendor; int revision; } ;


 int FUNC_0 (char*,struct saa7146_dev*) ;
 int FUNC_1 (char*,struct pci_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (int *) ;
 int VAR_10 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct saa7146_dev*) ;
 struct saa7146_dev* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*,int ,void*,int ) ;
 int FUNC_13 (struct pci_dev*,int ) ;
 int FUNC_14 (struct pci_dev*,int ,char*) ;
 int FUNC_15 (struct pci_dev*,int ) ;
 int FUNC_16 (struct pci_dev*,int ) ;
 int FUNC_17 (struct pci_dev*,int *) ;
 int FUNC_18 (struct pci_dev*) ;
 void* FUNC_19 (struct pci_dev*,int ,int *) ;
 int FUNC_20 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_21 (int ,int ,int ,int ,struct saa7146_dev*) ;
 int VAR_11 ;
 int FUNC_22 (struct saa7146_dev*,int ,int) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int ,char*,int) ;
 scalar_t__ FUNC_25 (struct saa7146_dev*) ;
 scalar_t__ FUNC_26 (struct saa7146_dev*,struct saa7146_pci_extension_data*) ;

__attribute__((used)) static int FUNC_27(struct pci_dev *VAR_12, const struct pci_device_id *VAR_13)
{
 struct saa7146_pci_extension_data *VAR_14 = (struct saa7146_pci_extension_data *)VAR_13->driver_data;
 struct saa7146_extension *VAR_15 = VAR_14->ext;
 struct saa7146_dev *VAR_16;
 int VAR_17 = -VAR_1;


 VAR_16 = FUNC_8(sizeof(struct saa7146_dev), VAR_2);
 if (!VAR_16) {
  FUNC_2("out of memory\n");
  goto out;
 }


 FUNC_24(VAR_16->name, "saa7146 (%d)", VAR_11);

 FUNC_1("pci:%p\n", VAR_12);

 VAR_17 = FUNC_11(VAR_12);
 if (VAR_17 < 0) {
  FUNC_2("pci_enable_device() failed\n");
  goto err_free;
 }


 FUNC_18(VAR_12);

 VAR_16->pci = VAR_12;


 VAR_16->revision = VAR_12->revision;



 VAR_17 = FUNC_14(VAR_12, 0, "saa7146");
 if (VAR_17 < 0)
  goto err_disable;

 VAR_16->mem = FUNC_5(FUNC_16(VAR_12, 0),
      FUNC_15(VAR_12, 0));
 if (!VAR_16->mem) {
  FUNC_2("ioremap() failed\n");
  VAR_17 = -VAR_0;
  goto err_release;
 }
 FUNC_22(VAR_16, VAR_3, 0);


 FUNC_22(VAR_16, VAR_5, 0x30ff0000);


 FUNC_22(VAR_16, VAR_6, 0xf8000000);


 VAR_17 = FUNC_21(VAR_12->irq, VAR_10, VAR_4,
     VAR_16->name, VAR_16);
 if (VAR_17 < 0) {
  FUNC_2("request_irq() failed\n");
  goto err_unmap;
 }

 VAR_17 = -VAR_1;


 VAR_16->d_rps0.cpu_addr = FUNC_19(VAR_12, VAR_8,
           &VAR_16->d_rps0.dma_handle);
 if (!VAR_16->d_rps0.cpu_addr)
  goto err_free_irq;

 VAR_16->d_rps1.cpu_addr = FUNC_19(VAR_12, VAR_8,
           &VAR_16->d_rps1.dma_handle);
 if (!VAR_16->d_rps1.cpu_addr)
  goto err_free_rps0;

 VAR_16->d_i2c.cpu_addr = FUNC_19(VAR_12, VAR_8,
          &VAR_16->d_i2c.dma_handle);
 if (!VAR_16->d_i2c.cpu_addr)
  goto err_free_rps1;



 FUNC_20("found saa7146 @ mem %p (revision %d, irq %d) (0x%04x,0x%04x)\n",
  VAR_16->mem, VAR_16->revision, VAR_12->irq,
  VAR_12->subsystem_vendor, VAR_12->subsystem_device);
 VAR_16->ext = VAR_15;

 FUNC_9(&VAR_16->v4l2_lock);
 FUNC_23(&VAR_16->int_slock);
 FUNC_23(&VAR_16->slock);

 FUNC_9(&VAR_16->i2c_lock);

 VAR_16->module = VAR_9;
 FUNC_4(&VAR_16->i2c_wq);


 FUNC_22(VAR_16, VAR_7, 0x1c00101f);



 VAR_17 = -VAR_0;

 if (VAR_15->probe && VAR_15->probe(VAR_16)) {
  FUNC_0("ext->probe() failed for %p. skipping device.\n", VAR_16);
  goto err_free_i2c;
 }

 if (VAR_15->attach(VAR_16, VAR_14)) {
  FUNC_0("ext->attach() failed for %p. skipping device.\n", VAR_16);
  goto err_free_i2c;
 }



 FUNC_17(VAR_12, &VAR_16->v4l2_dev);

 VAR_11++;

 VAR_17 = 0;
out:
 return VAR_17;

err_free_i2c:
 FUNC_12(VAR_12, VAR_8, VAR_16->d_i2c.cpu_addr,
       VAR_16->d_i2c.dma_handle);
err_free_rps1:
 FUNC_12(VAR_12, VAR_8, VAR_16->d_rps1.cpu_addr,
       VAR_16->d_rps1.dma_handle);
err_free_rps0:
 FUNC_12(VAR_12, VAR_8, VAR_16->d_rps0.cpu_addr,
       VAR_16->d_rps0.dma_handle);
err_free_irq:
 FUNC_3(VAR_12->irq, (void *)VAR_16);
err_unmap:
 FUNC_6(VAR_16->mem);
err_release:
 FUNC_13(VAR_12, 0);
err_disable:
 FUNC_10(VAR_12);
err_free:
 FUNC_7(VAR_16);
 goto out;
}
