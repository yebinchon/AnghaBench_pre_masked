
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_10 ;
 struct pci_dev* VAR_11 ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ,int*) ;
 int * FUNC_8 (int,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct pci_dev *VAR_12,
        const struct pci_device_id *VAR_13)
{
 int VAR_14;
 u32 VAR_15 = 0;

 VAR_14 = FUNC_6(VAR_12);
 if (VAR_14) {
  FUNC_1(&VAR_12->dev, "pci_enable_device failed\n");
  return -VAR_1;
 }

 VAR_11 = VAR_12;
 VAR_14 = FUNC_7(VAR_12, VAR_7, &VAR_8);
 if (VAR_14)
  goto out;
 VAR_8 &= 0x00000ff80;

 VAR_14 = FUNC_7(VAR_12, VAR_3, &VAR_15);
 if (!(VAR_4 & VAR_15)) {
  VAR_14 = -VAR_0;
  FUNC_2(&VAR_12->dev,
      "ERROR: The LPC GPIO Block has not been enabled.\n");
  goto out;
 }

 VAR_14 = FUNC_7(VAR_12, VAR_2, &VAR_10);
 if (0 > VAR_14) {
  FUNC_2(&VAR_12->dev, "Unable to read GPIOBASE.\n");
  goto out;
 }
 FUNC_0(&VAR_12->dev, ": GPIOBASE = 0x%08x\n", VAR_10);
 VAR_10 &= 0x00000ffc0;




 VAR_9 = FUNC_8(VAR_10, VAR_5,
       VAR_6);
 if (((void*)0) == VAR_9) {
  FUNC_2(&VAR_12->dev,
    "ERROR Unable to register GPIO I/O addresses.\n");
  VAR_14 = -1;
  goto out;
 }




 FUNC_3(&VAR_12->dev);

out:
 if (VAR_14) {
  FUNC_4(&VAR_12->dev);
  FUNC_5(VAR_12);
 }
 return VAR_14;
}
