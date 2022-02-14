
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_sysfs {int fw_priv; } ;
struct firmware {int priv; } ;
struct device {int dummy; } ;
typedef enum fw_opt { ____Placeholder_fw_opt } fw_opt ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct fw_sysfs*) ;
 int FUNC_1 (struct fw_sysfs*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct firmware*,struct device*,int) ;
 int FUNC_4 (struct device*,char*,char const*) ;
 int FUNC_5 (struct device*,char*,char const*) ;
 long FUNC_6 () ;
 struct fw_sysfs* FUNC_7 (struct firmware*,char const*,struct device*,int) ;
 int FUNC_8 (struct fw_sysfs*,int,long) ;
 long FUNC_9 (long) ;
 int FUNC_10 () ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(struct firmware *VAR_2,
        const char *VAR_3, struct device *VAR_4,
        enum fw_opt VAR_5)
{
 struct fw_sysfs *VAR_6;
 long VAR_7;
 int VAR_8;

 VAR_7 = FUNC_6();
 if (VAR_5 & VAR_1) {
  VAR_7 = FUNC_9(VAR_7);
  if (!VAR_7) {
   FUNC_4(VAR_4, "firmware: %s loading timed out\n",
    VAR_3);
   return -VAR_0;
  }
 } else {
  VAR_8 = FUNC_10();
  if (FUNC_2(VAR_8)) {
   FUNC_5(VAR_4, "firmware: %s will not be loaded\n",
    VAR_3);
   return VAR_8;
  }
 }

 VAR_6 = FUNC_7(VAR_2, VAR_3, VAR_4, VAR_5);
 if (FUNC_0(VAR_6)) {
  VAR_8 = FUNC_1(VAR_6);
  goto out_unlock;
 }

 VAR_6->fw_priv = VAR_2->priv;
 VAR_8 = FUNC_8(VAR_6, VAR_5, VAR_7);

 if (!VAR_8)
  VAR_8 = FUNC_3(VAR_2, VAR_4, VAR_5);

out_unlock:
 FUNC_11();

 return VAR_8;
}
