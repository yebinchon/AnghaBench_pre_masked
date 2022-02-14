
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct fw_sysfs {struct fw_priv* fw_priv; } ;
struct fw_priv {scalar_t__ size; scalar_t__ data; } ;
struct file {int dummy; } ;
struct device {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef scalar_t__ loff_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct fw_priv*,char*,scalar_t__,size_t,int) ;
 int FUNC_1 (struct fw_priv*,char*,scalar_t__,size_t,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct fw_priv*) ;
 struct device* FUNC_3 (struct kobject*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct fw_sysfs* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct file *VAR_2, struct kobject *VAR_3,
      struct bin_attribute *VAR_4,
      char *VAR_5, loff_t VAR_6, size_t VAR_7)
{
 struct device *VAR_8 = FUNC_3(VAR_3);
 struct fw_sysfs *VAR_9 = FUNC_6(VAR_8);
 struct fw_priv *VAR_10;
 ssize_t VAR_11;

 FUNC_4(&VAR_1);
 VAR_10 = VAR_9->fw_priv;
 if (!VAR_10 || FUNC_2(VAR_10)) {
  VAR_11 = -VAR_0;
  goto out;
 }
 if (VAR_6 > VAR_10->size) {
  VAR_11 = 0;
  goto out;
 }
 if (VAR_7 > VAR_10->size - VAR_6)
  VAR_7 = VAR_10->size - VAR_6;

 VAR_11 = VAR_7;

 if (VAR_10->data)
  FUNC_1(VAR_10, VAR_5, VAR_6, VAR_7, 1);
 else
  FUNC_0(VAR_10, VAR_5, VAR_6, VAR_7, 1);

out:
 FUNC_5(&VAR_1);
 return VAR_11;
}
