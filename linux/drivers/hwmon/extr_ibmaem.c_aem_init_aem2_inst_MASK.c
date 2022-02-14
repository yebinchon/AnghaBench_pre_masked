
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct aem_ipmi_data {int interface; int bmc_device; } ;
struct aem_find_instance_resp {int module_handle; int minor; int major; } ;
struct TYPE_13__ {int user; int bmc_device; } ;
struct aem_data {scalar_t__ id; TYPE_1__* pdev; TYPE_8__ ipmi; int hwmon_dev; struct aem_data* rs_resp; int module_handle; int ver_minor; int ver_major; int list; int update; int * power_period; int lock; } ;
struct TYPE_14__ {int driver; } ;
struct TYPE_12__ {int aem_devices; } ;
struct TYPE_11__ {int * driver; } ;
struct TYPE_10__ {TYPE_5__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct aem_data*) ;
 TYPE_9__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_8__*,int ,int ) ;
 int FUNC_4 (TYPE_5__*,char*,int ) ;
 int FUNC_5 (int ,char*,int ,int ,int ) ;
 TYPE_6__ VAR_7 ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *,int ,int ,int ) ;
 int FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct aem_data*) ;
 void* FUNC_12 (int,int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_1__*) ;
 TYPE_1__* FUNC_16 (int ,scalar_t__) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*,struct aem_data*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_19(struct aem_ipmi_data *VAR_9,
         struct aem_find_instance_resp *VAR_10)
{
 struct aem_data *VAR_11;
 int VAR_12;
 int VAR_13 = -VAR_3;

 VAR_11 = FUNC_12(sizeof(*VAR_11), VAR_4);
 if (!VAR_11)
  return VAR_13;
 FUNC_14(&VAR_11->lock);


 VAR_11->ver_major = VAR_10->major;
 VAR_11->ver_minor = VAR_10->minor;
 VAR_11->module_handle = VAR_10->module_handle;
 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
  VAR_11->power_period[VAR_12] = VAR_1;


 VAR_11->id = FUNC_8(&VAR_6, 0, 0, VAR_4);
 if (VAR_11->id < 0)
  goto id_err;

 VAR_11->pdev = FUNC_16(VAR_2, VAR_11->id);
 if (!VAR_11->pdev)
  goto dev_err;
 VAR_11->pdev->dev.driver = &VAR_5.driver;

 VAR_13 = FUNC_15(VAR_11->pdev);
 if (VAR_13)
  goto ipmi_err;

 FUNC_18(VAR_11->pdev, VAR_11);


 VAR_13 = FUNC_3(&VAR_11->ipmi, VAR_9->interface,
     VAR_9->bmc_device);
 if (VAR_13)
  goto ipmi_err;


 VAR_11->hwmon_dev = FUNC_6(&VAR_11->pdev->dev);
 if (FUNC_0(VAR_11->hwmon_dev)) {
  FUNC_4(&VAR_11->pdev->dev,
   "Unable to register hwmon device for IPMI interface %d\n",
   VAR_9->interface);
  VAR_13 = FUNC_1(VAR_11->hwmon_dev);
  goto hwmon_reg_err;
 }

 VAR_11->update = VAR_8;
 VAR_11->rs_resp = FUNC_12(sizeof(*(VAR_11->rs_resp)) + 8, VAR_4);
 if (!VAR_11->rs_resp) {
  VAR_13 = -VAR_3;
  goto alloc_resp_err;
 }


 VAR_13 = FUNC_2(VAR_11);
 if (VAR_13)
  goto sensor_err;


 FUNC_13(&VAR_11->list, &VAR_7.aem_devices);

 FUNC_5(VAR_11->ipmi.bmc_device, "Found AEM v%d.%d at 0x%X\n",
   VAR_11->ver_major, VAR_11->ver_minor,
   VAR_11->module_handle);
 return 0;

sensor_err:
 FUNC_11(VAR_11->rs_resp);
alloc_resp_err:
 FUNC_7(VAR_11->hwmon_dev);
hwmon_reg_err:
 FUNC_10(VAR_11->ipmi.user);
ipmi_err:
 FUNC_18(VAR_11->pdev, ((void*)0));
 FUNC_17(VAR_11->pdev);
dev_err:
 FUNC_9(&VAR_6, VAR_11->id);
id_err:
 FUNC_11(VAR_11);

 return VAR_13;
}
