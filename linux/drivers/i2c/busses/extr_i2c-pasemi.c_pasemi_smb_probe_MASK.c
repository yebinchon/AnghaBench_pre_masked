
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_6__ {int class; TYPE_1__ dev; struct pasemi_smbus* algo_data; int * algo; int name; int owner; } ;
struct pasemi_smbus {int size; int base; TYPE_3__ adapter; struct pci_dev* dev; } ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct pasemi_smbus*) ;
 struct pasemi_smbus* FUNC_2 (int,int ) ;
 TYPE_2__ VAR_13 ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*,struct pasemi_smbus*) ;
 int FUNC_7 (struct pasemi_smbus*,int ,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int VAR_14 ;
 int FUNC_10 (int ,int,char*,int ) ;

__attribute__((used)) static int FUNC_11(struct pci_dev *VAR_15,
          const struct pci_device_id *VAR_16)
{
 struct pasemi_smbus *VAR_17;
 int VAR_18;

 if (!(FUNC_3(VAR_15, 0) & VAR_10))
  return -VAR_5;

 VAR_17 = FUNC_2(sizeof(struct pasemi_smbus), VAR_7);
 if (!VAR_17)
  return -VAR_6;

 VAR_17->dev = VAR_15;
 VAR_17->base = FUNC_5(VAR_15, 0);
 VAR_17->size = FUNC_4(VAR_15, 0);

 if (!FUNC_9(VAR_17->base, VAR_17->size,
       VAR_13.name)) {
  VAR_18 = -VAR_4;
  goto out_kfree;
 }

 VAR_17->adapter.owner = VAR_12;
 FUNC_10(VAR_17->adapter.name, sizeof(VAR_17->adapter.name),
   "PA Semi SMBus adapter at 0x%lx", VAR_17->base);
 VAR_17->adapter.class = VAR_8 | VAR_9;
 VAR_17->adapter.algo = &VAR_14;
 VAR_17->adapter.algo_data = VAR_17;


 VAR_17->adapter.dev.parent = &VAR_15->dev;

 FUNC_7(VAR_17, VAR_11, (VAR_3 | VAR_2 |
    (VAR_0 & VAR_1)));

 VAR_18 = FUNC_0(&VAR_17->adapter);
 if (VAR_18)
  goto out_release_region;

 FUNC_6(VAR_15, VAR_17);

 return 0;

 out_release_region:
 FUNC_8(VAR_17->base, VAR_17->size);
 out_kfree:
 FUNC_1(VAR_17);
 return VAR_18;
}
