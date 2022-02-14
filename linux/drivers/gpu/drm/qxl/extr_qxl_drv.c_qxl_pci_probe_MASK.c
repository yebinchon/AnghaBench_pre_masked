
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qxl_device {int ddev; } ;
struct pci_device_id {int driver_data; } ;
struct pci_dev {int revision; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct pci_dev*,int ,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct qxl_device*) ;
 struct qxl_device* FUNC_7 (int,int ) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct qxl_device*) ;
 int FUNC_11 (struct qxl_device*,int *,struct pci_dev*) ;
 int VAR_4 ;
 int FUNC_12 (struct qxl_device*) ;
 int FUNC_13 (struct qxl_device*) ;
 int FUNC_14 (struct pci_dev*,int ) ;
 int FUNC_15 (struct pci_dev*,int ) ;

__attribute__((used)) static int
FUNC_16(struct pci_dev *VAR_5, const struct pci_device_id *VAR_6)
{
 struct qxl_device *VAR_7;
 int VAR_8;

 if (VAR_5->revision < 4) {
  FUNC_0("qxl too old, doesn't support client_monitors_config,"
     " use xf86-video-qxl in user mode");
  return -VAR_0;
 }

 VAR_7 = FUNC_7(sizeof(struct qxl_device), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_8 = FUNC_9(VAR_5);
 if (VAR_8)
  goto free_dev;

 VAR_8 = FUNC_2(VAR_5, 0, "qxl");
 if (VAR_8)
  goto disable_pci;

 if (FUNC_5(VAR_5)) {
  VAR_8 = FUNC_14(VAR_5, VAR_3);
  if (VAR_8) {
   FUNC_0("can't get legacy vga ioports\n");
   goto disable_pci;
  }
 }

 VAR_8 = FUNC_11(VAR_7, &VAR_4, VAR_5);
 if (VAR_8)
  goto put_vga;

 VAR_8 = FUNC_13(VAR_7);
 if (VAR_8)
  goto unload;

 FUNC_4(&VAR_7->ddev);


 VAR_8 = FUNC_1(&VAR_7->ddev, VAR_6->driver_data);
 if (VAR_8)
  goto modeset_cleanup;

 FUNC_3(&VAR_7->ddev, 32);
 return 0;

modeset_cleanup:
 FUNC_12(VAR_7);
unload:
 FUNC_10(VAR_7);
put_vga:
 if (FUNC_5(VAR_5))
  FUNC_15(VAR_5, VAR_3);
disable_pci:
 FUNC_8(VAR_5);
free_dev:
 FUNC_6(VAR_7);
 return VAR_8;
}
