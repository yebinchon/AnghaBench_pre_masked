
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int device; int dev; } ;
struct nforce2_smbus {int blockops; int can_abort; int adapter; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct nforce2_smbus* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct nforce2_smbus*) ;
 int VAR_6 ;
 int FUNC_4 (struct pci_dev*,int,int ,struct nforce2_smbus*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct pci_dev*,struct nforce2_smbus*) ;

__attribute__((used)) static int FUNC_7(struct pci_dev *VAR_7, const struct pci_device_id *VAR_8)
{
 struct nforce2_smbus *VAR_9;
 int VAR_10, VAR_11;


 VAR_9 = FUNC_2(2, sizeof(struct nforce2_smbus), VAR_3);
 if (!VAR_9)
  return -VAR_1;
 FUNC_6(VAR_7, VAR_9);

 switch (VAR_7->device) {
 case 130:
 case 129:
 case 128:
  VAR_9[0].blockops = 1;
  VAR_9[1].blockops = 1;
  VAR_9[0].can_abort = 1;
  VAR_9[1].can_abort = 1;
 }


 VAR_10 = FUNC_4(VAR_7, 4, VAR_4, &VAR_9[0], "SMB1");
 if (VAR_10 < 0)
  VAR_9[0].base = 0;


 if (FUNC_1(VAR_6)) {
  FUNC_0(&VAR_7->dev, "Disabling SMB2 for safety reasons.\n");
  VAR_11 = -VAR_2;
  VAR_9[1].base = 0;
 } else {
  VAR_11 = FUNC_4(VAR_7, 5, VAR_5, &VAR_9[1],
      "SMB2");
  if (VAR_11 < 0)
   VAR_9[1].base = 0;
 }

 if ((VAR_10 < 0) && (VAR_11 < 0)) {

  FUNC_3(VAR_9);
  return -VAR_0;
 }

 FUNC_5(&VAR_9[0].adapter);
 return 0;
}
