
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int *,int *) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,int,int,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (struct platform_device*) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_9)
{
 int VAR_10;
 u64 VAR_11 = 0;
 int VAR_12;

 VAR_12 = FUNC_12(VAR_9);
 if (!VAR_6)
  return 0;

 VAR_10 = FUNC_10(&VAR_11);
 if (VAR_10 == -VAR_2)
  FUNC_6("advertised but not implemented in platform firmware\n");
 if (VAR_10) {
  FUNC_6("Failed to get SDEI version: %d\n", VAR_10);
  FUNC_13();
  return VAR_10;
 }

 FUNC_7("SDEIv%d.%d (0x%x) detected in firmware.\n",
  (int)FUNC_0(VAR_11), (int)FUNC_1(VAR_11),
  (int)FUNC_2(VAR_11));

 if (FUNC_0(VAR_11) != 1) {
  FUNC_8("Conflicting SDEI version detected.\n");
  FUNC_13();
  return -VAR_1;
 }

 VAR_10 = FUNC_14();
 if (VAR_10)
  return VAR_10;

 VAR_5 = FUNC_11(VAR_12);
 if (!VAR_5) {

  FUNC_13();
  return 0;
 }

 VAR_10 = FUNC_3(&VAR_7);
 if (VAR_10) {
  FUNC_8("Failed to register CPU PM notifier...\n");
  goto error;
 }

 VAR_10 = FUNC_9(&VAR_8);
 if (VAR_10) {
  FUNC_8("Failed to register reboot notifier...\n");
  goto remove_cpupm;
 }

 VAR_10 = FUNC_5(VAR_0, "SDEI",
    &VAR_4, &VAR_3);
 if (VAR_10) {
  FUNC_8("Failed to register CPU hotplug notifier...\n");
  goto remove_reboot;
 }

 return 0;

remove_reboot:
 FUNC_15(&VAR_8);

remove_cpupm:
 FUNC_4(&VAR_7);

error:
 FUNC_13();
 return VAR_10;
}
