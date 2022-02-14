
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int kobj; int * type; int release; int * driver; } ;
struct TYPE_7__ {char* name; int id; TYPE_1__ dev; } ;
struct ipmi_device_id {int device_id; int product_id; int manufacturer_id; } ;
struct bmc_device {int dyn_id_set; int dyn_guid_set; TYPE_2__ pdev; int dyn_mutex; int usecount; struct ipmi_device_id id; int intfs; scalar_t__ dyn_id_expiry; int guid; int remove_work; } ;
struct ipmi_smi {int in_bmc_register; int intf_num; char* my_dev_name; int bmc_registered; struct bmc_device tmp_bmc; struct bmc_device* bmc; int bmc_link; TYPE_4__* si_dev; int bmc_reg_mutex; } ;
typedef int guid_t ;
struct TYPE_9__ {int kobj; } ;
struct TYPE_8__ {int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_4__*,char*,int) ;
 int FUNC_3 (TYPE_4__*,char*,int ,int ,int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int VAR_6 ;
 struct bmc_device* FUNC_5 (int *,int *) ;
 struct bmc_device* FUNC_6 (int *,int ,int ) ;
 TYPE_3__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 char* FUNC_7 (int ,char*,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 struct bmc_device* FUNC_11 (int,int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int VAR_10 ;
 int FUNC_19 (int *,int *,char*) ;
 int FUNC_20 (int *,char*) ;

__attribute__((used)) static int FUNC_21(struct ipmi_smi *VAR_11,
          struct ipmi_device_id *VAR_12,
          bool VAR_13, guid_t *VAR_14, int VAR_15)
{
 int VAR_16;
 struct bmc_device *VAR_17;
 struct bmc_device *VAR_18;







 VAR_11->in_bmc_register = 1;
 FUNC_16(&VAR_11->bmc_reg_mutex);





 FUNC_15(&VAR_8);
 if (VAR_13)
  VAR_18 = FUNC_5(&VAR_7.driver, VAR_14);
 else
  VAR_18 = FUNC_6(&VAR_7.driver,
          VAR_12->product_id,
          VAR_12->device_id);





 if (VAR_18) {
  VAR_17 = VAR_18;




  VAR_11->bmc = VAR_18;
  FUNC_15(&VAR_17->dyn_mutex);
  FUNC_12(&VAR_11->bmc_link, &VAR_17->intfs);
  FUNC_16(&VAR_17->dyn_mutex);

  FUNC_3(VAR_11->si_dev,
    "interfacing existing BMC (man_id: 0x%6.6x, prod_id: 0x%4.4x, dev_id: 0x%2.2x)\n",
    VAR_17->id.manufacturer_id,
    VAR_17->id.product_id,
    VAR_17->id.device_id);
 } else {
  VAR_17 = FUNC_11(sizeof(*VAR_17), VAR_1);
  if (!VAR_17) {
   VAR_16 = -VAR_0;
   goto out;
  }
  FUNC_0(&VAR_17->intfs);
  FUNC_14(&VAR_17->dyn_mutex);
  FUNC_1(&VAR_17->remove_work, VAR_5);

  VAR_17->id = *VAR_12;
  VAR_17->dyn_id_set = 1;
  VAR_17->dyn_guid_set = VAR_13;
  VAR_17->guid = *VAR_14;
  VAR_17->dyn_id_expiry = VAR_9 + VAR_2;

  VAR_17->pdev.name = "ipmi_bmc";

  VAR_16 = FUNC_4(&VAR_6, 0, 0, VAR_1);
  if (VAR_16 < 0)
   goto out;
  VAR_17->pdev.dev.driver = &VAR_7.driver;
  VAR_17->pdev.id = VAR_16;
  VAR_17->pdev.dev.release = VAR_10;
  VAR_17->pdev.dev.type = &VAR_3;
  FUNC_9(&VAR_17->usecount);

  VAR_11->bmc = VAR_17;
  FUNC_15(&VAR_17->dyn_mutex);
  FUNC_12(&VAR_11->bmc_link, &VAR_17->intfs);
  FUNC_16(&VAR_17->dyn_mutex);

  VAR_16 = FUNC_17(&VAR_17->pdev);
  if (VAR_16) {
   FUNC_2(VAR_11->si_dev,
    "Unable to register bmc device: %d\n",
    VAR_16);
   goto out_list_del;
  }

  FUNC_3(VAR_11->si_dev,
    "Found new BMC (man_id: 0x%6.6x, prod_id: 0x%4.4x, dev_id: 0x%2.2x)\n",
    VAR_17->id.manufacturer_id,
    VAR_17->id.product_id,
    VAR_17->id.device_id);
 }





 VAR_16 = FUNC_19(&VAR_11->si_dev->kobj, &VAR_17->pdev.dev.kobj, "bmc");
 if (VAR_16) {
  FUNC_2(VAR_11->si_dev, "Unable to create bmc symlink: %d\n", VAR_16);
  goto out_put_bmc;
 }

 if (VAR_15 == -1)
  VAR_15 = VAR_11->intf_num;
 VAR_11->my_dev_name = FUNC_7(VAR_1, "ipmi%d", VAR_15);
 if (!VAR_11->my_dev_name) {
  VAR_16 = -VAR_0;
  FUNC_2(VAR_11->si_dev, "Unable to allocate link from BMC: %d\n",
   VAR_16);
  goto out_unlink1;
 }

 VAR_16 = FUNC_19(&VAR_17->pdev.dev.kobj, &VAR_11->si_dev->kobj,
          VAR_11->my_dev_name);
 if (VAR_16) {
  FUNC_8(VAR_11->my_dev_name);
  VAR_11->my_dev_name = ((void*)0);
  FUNC_2(VAR_11->si_dev, "Unable to create symlink to bmc: %d\n",
   VAR_16);
  goto out_free_my_dev_name;
 }

 VAR_11->bmc_registered = 1;

out:
 FUNC_16(&VAR_8);
 FUNC_15(&VAR_11->bmc_reg_mutex);
 VAR_11->in_bmc_register = 0;
 return VAR_16;


out_free_my_dev_name:
 FUNC_8(VAR_11->my_dev_name);
 VAR_11->my_dev_name = ((void*)0);

out_unlink1:
 FUNC_20(&VAR_11->si_dev->kobj, "bmc");

out_put_bmc:
 FUNC_15(&VAR_17->dyn_mutex);
 FUNC_13(&VAR_11->bmc_link);
 FUNC_16(&VAR_17->dyn_mutex);
 VAR_11->bmc = &VAR_11->tmp_bmc;
 FUNC_10(&VAR_17->usecount, VAR_4);
 goto out;

out_list_del:
 FUNC_15(&VAR_17->dyn_mutex);
 FUNC_13(&VAR_11->bmc_link);
 FUNC_16(&VAR_17->dyn_mutex);
 VAR_11->bmc = &VAR_11->tmp_bmc;
 FUNC_18(&VAR_17->pdev.dev);
 goto out;
}
