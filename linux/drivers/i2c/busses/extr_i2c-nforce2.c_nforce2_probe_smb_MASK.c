
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dev; } ;
struct TYPE_7__ {int * parent; } ;
struct TYPE_6__ {int class; TYPE_3__ dev; int name; struct nforce2_smbus* algo_data; int * algo; int owner; } ;
struct nforce2_smbus {int base; int size; TYPE_2__ adapter; } ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (TYPE_3__*,char*,...) ;
 int FUNC_2 (TYPE_3__*,char*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_1__ VAR_7 ;
 scalar_t__ FUNC_4 (struct pci_dev*,int,int*) ;
 int FUNC_5 (struct pci_dev*,int) ;
 int FUNC_6 (struct pci_dev*,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int,int ) ;
 int VAR_8 ;
 int FUNC_9 (int ,int,char*,int) ;

__attribute__((used)) static int FUNC_10(struct pci_dev *VAR_9, int VAR_10, int VAR_11,
        struct nforce2_smbus *VAR_12, const char *VAR_13)
{
 int VAR_14;

 VAR_12->base = FUNC_6(VAR_9, VAR_10);
 if (VAR_12->base) {
  VAR_12->size = FUNC_5(VAR_9, VAR_10);
 } else {

  u16 VAR_15;

  if (FUNC_4(VAR_9, VAR_11, &VAR_15)
      != VAR_4) {
   FUNC_1(&VAR_9->dev, "Error reading PCI config for %s\n",
    VAR_13);
   return -VAR_1;
  }

  VAR_12->base = VAR_15 & VAR_5;
  VAR_12->size = 64;
 }

 VAR_14 = FUNC_0(VAR_12->base, VAR_12->size,
      VAR_7.name);
 if (VAR_14)
  return VAR_14;

 if (!FUNC_8(VAR_12->base, VAR_12->size, VAR_7.name)) {
  FUNC_1(&VAR_12->adapter.dev, "Error requesting region %02x .. %02X for %s\n",
   VAR_12->base, VAR_12->base+VAR_12->size-1, VAR_13);
  return -VAR_0;
 }
 VAR_12->adapter.owner = VAR_6;
 VAR_12->adapter.class = VAR_2 | VAR_3;
 VAR_12->adapter.algo = &VAR_8;
 VAR_12->adapter.algo_data = VAR_12;
 VAR_12->adapter.dev.parent = &VAR_9->dev;
 FUNC_9(VAR_12->adapter.name, sizeof(VAR_12->adapter.name),
  "SMBus nForce2 adapter at %04x", VAR_12->base);

 VAR_14 = FUNC_3(&VAR_12->adapter);
 if (VAR_14) {
  FUNC_7(VAR_12->base, VAR_12->size);
  return VAR_14;
 }
 FUNC_2(&VAR_12->adapter.dev, "nForce2 SMBus adapter at %#x\n",
  VAR_12->base);
 return 0;
}
