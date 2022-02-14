
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; int * resource; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_5__ {int class; TYPE_1__ dev; struct amd_smbus* algo_data; int * algo; int name; int owner; } ;
struct amd_smbus {int base; int size; TYPE_2__ adapter; struct pci_dev* dev; } ;
struct TYPE_6__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 TYPE_3__ VAR_9 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct amd_smbus*) ;
 struct amd_smbus* FUNC_3 (int,int ) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*,struct amd_smbus*) ;
 int FUNC_8 (struct pci_dev*,int ,int ) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int,int ,int ) ;
 int VAR_10 ;
 int FUNC_11 (int ,int,char*,int) ;

__attribute__((used)) static int FUNC_12(struct pci_dev *VAR_11, const struct pci_device_id *VAR_12)
{
 struct amd_smbus *VAR_13;
 int VAR_14;

 if (!(FUNC_4(VAR_11, 0) & VAR_7))
  return -VAR_2;

 VAR_13 = FUNC_3(sizeof(struct amd_smbus), VAR_4);
 if (!VAR_13)
  return -VAR_3;

 VAR_13->dev = VAR_11;
 VAR_13->base = FUNC_6(VAR_11, 0);
 VAR_13->size = FUNC_5(VAR_11, 0);

 VAR_14 = FUNC_0(&VAR_11->resource[0]);
 if (VAR_14) {
  VAR_14 = -VAR_2;
  goto out_kfree;
 }

 if (!FUNC_10(VAR_13->base, VAR_13->size, VAR_9.name)) {
  VAR_14 = -VAR_1;
  goto out_kfree;
 }

 VAR_13->adapter.owner = VAR_8;
 FUNC_11(VAR_13->adapter.name, sizeof(VAR_13->adapter.name),
  "SMBus2 AMD8111 adapter at %04x", VAR_13->base);
 VAR_13->adapter.class = VAR_5 | VAR_6;
 VAR_13->adapter.algo = &VAR_10;
 VAR_13->adapter.algo_data = VAR_13;


 VAR_13->adapter.dev.parent = &VAR_11->dev;

 FUNC_8(VAR_13->dev, VAR_0, 0);
 VAR_14 = FUNC_1(&VAR_13->adapter);
 if (VAR_14)
  goto out_release_region;

 FUNC_7(VAR_11, VAR_13);
 return 0;

 out_release_region:
 FUNC_9(VAR_13->base, VAR_13->size);
 out_kfree:
 FUNC_2(VAR_13);
 return VAR_14;
}
