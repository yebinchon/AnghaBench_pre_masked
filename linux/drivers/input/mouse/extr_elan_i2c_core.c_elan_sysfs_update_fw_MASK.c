
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct firmware {int* data; } ;
struct elan_tp_data {scalar_t__ fw_validpage_count; size_t fw_signature_address; int sysfs_mutex; int product_id; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int signature ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct elan_tp_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*,char*) ;
 int FUNC_3 (struct elan_tp_data*,struct firmware const*) ;
 char* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int const*,int const*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct firmware const*) ;
 int FUNC_10 (struct firmware const**,char*,struct device*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_5,
        struct device_attribute *VAR_6,
        const char *VAR_7, size_t VAR_8)
{
 struct elan_tp_data *VAR_9 = FUNC_1(VAR_5);
 const struct firmware *VAR_10;
 char *VAR_11;
 int VAR_12;
 const u8 *VAR_13;
 static const u8 VAR_14[] = {0xAA, 0x55, 0xCC, 0x33, 0xFF, 0xFF};

 if (VAR_9->fw_validpage_count == 0)
  return -VAR_1;


 VAR_11 = FUNC_4(VAR_4, VAR_3, VAR_9->product_id);
 if (!VAR_11) {
  FUNC_0(VAR_5, "failed to allocate memory for firmware name\n");
  return -VAR_2;
 }

 FUNC_2(VAR_5, "requesting fw '%s'\n", VAR_11);
 VAR_12 = FUNC_10(&VAR_10, VAR_11, VAR_5);
 FUNC_5(VAR_11);
 if (VAR_12) {
  FUNC_0(VAR_5, "failed to request firmware: %d\n", VAR_12);
  return VAR_12;
 }


 VAR_13 = &VAR_10->data[VAR_9->fw_signature_address];
 if (FUNC_6(VAR_13, VAR_14, sizeof(VAR_14)) != 0) {
  FUNC_0(VAR_5, "signature mismatch (expected %*ph, got %*ph)\n",
   (int)sizeof(VAR_14), VAR_14,
   (int)sizeof(VAR_14), VAR_13);
  VAR_12 = -VAR_0;
  goto out_release_fw;
 }

 VAR_12 = FUNC_7(&VAR_9->sysfs_mutex);
 if (VAR_12)
  goto out_release_fw;

 VAR_12 = FUNC_3(VAR_9, VAR_10);

 FUNC_8(&VAR_9->sysfs_mutex);

out_release_fw:
 FUNC_9(VAR_10);
 return VAR_12 ?: VAR_8;
}
