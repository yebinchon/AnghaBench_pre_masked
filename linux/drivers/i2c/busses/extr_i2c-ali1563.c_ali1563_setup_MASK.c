
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,int,int ) ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct pci_dev*,int ,int*) ;
 int FUNC_5 (struct pci_dev*,int ,int) ;
 int FUNC_6 (int,int,int ) ;

__attribute__((used)) static int FUNC_7(struct pci_dev *VAR_7)
{
 u16 VAR_8;

 FUNC_4(VAR_7, VAR_0, &VAR_8);



 VAR_6 = VAR_8 & ~(VAR_3 - 1);
 if (!VAR_6) {
  FUNC_3(&VAR_7->dev, "ali1563_smba Uninitialized\n");
  goto Err;
 }


 if (!(VAR_8 & VAR_1)) {
  FUNC_3(&VAR_7->dev, "Host Controller not enabled\n");
  goto Err;
 }
 if (!(VAR_8 & VAR_2)) {
  FUNC_3(&VAR_7->dev, "I/O space not enabled, trying manually\n");
  FUNC_5(VAR_7, VAR_0,
          VAR_8 | VAR_2);
  FUNC_4(VAR_7, VAR_0, &VAR_8);
  if (!(VAR_8 & VAR_2)) {
   FUNC_1(&VAR_7->dev,
    "I/O space still not enabled, giving up\n");
   goto Err;
  }
 }

 if (FUNC_0(VAR_6, VAR_3,
         VAR_5.name))
  goto Err;

 if (!FUNC_6(VAR_6, VAR_3,
       VAR_5.name)) {
  FUNC_1(&VAR_7->dev, "Could not allocate I/O space at 0x%04x\n",
   VAR_6);
  goto Err;
 }
 FUNC_2(&VAR_7->dev, "Found ALi1563 SMBus at 0x%04x\n", VAR_6);

 return 0;
Err:
 return -VAR_4;
}
