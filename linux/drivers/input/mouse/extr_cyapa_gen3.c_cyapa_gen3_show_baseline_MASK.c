
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cyapa {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct cyapa*,int ) ;
 int FUNC_1 (struct cyapa*,int ,int ) ;
 int FUNC_2 (struct device*,char*,int,int) ;
 int FUNC_3 (struct device*,char*,...) ;
 struct cyapa* FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,char*,int) ;
 int FUNC_6 (char*,int ,char*,int,int) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_9,
       struct device_attribute *VAR_10, char *VAR_11)
{
 struct cyapa *VAR_12 = FUNC_4(VAR_9);
 int VAR_13, VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_16 = FUNC_0(VAR_12, VAR_0);
 if (VAR_16 < 0) {
  FUNC_3(VAR_9, "Error reading dev status. err = %d\n", VAR_16);
  goto out;
 }
 if ((VAR_16 & VAR_4) != VAR_4) {
  FUNC_5(VAR_9, "Trackpad device is busy. device state = 0x%x\n",
    VAR_16);
  VAR_16 = -VAR_5;
  goto out;
 }

 VAR_16 = FUNC_1(VAR_12, VAR_3,
          VAR_7);
 if (VAR_16 < 0) {
  FUNC_3(VAR_9, "Failed to send report baseline command. %d\n",
   VAR_16);
  goto out;
 }

 VAR_15 = 3;
 do {
  FUNC_7(10000, 20000);

  VAR_16 = FUNC_0(VAR_12, VAR_0);
  if (VAR_16 < 0) {
   FUNC_3(VAR_9, "Error reading dev status. err = %d\n",
    VAR_16);
   goto out;
  }
  if ((VAR_16 & VAR_4) == VAR_4)
   break;
 } while (--VAR_15);

 if (VAR_15 == 0) {
  FUNC_3(VAR_9, "Device timed out going to Normal state.\n");
  VAR_16 = -VAR_6;
  goto out;
 }

 VAR_16 = FUNC_0(VAR_12, VAR_1);
 if (VAR_16 < 0) {
  FUNC_3(VAR_9, "Failed to read max baseline. err = %d\n", VAR_16);
  goto out;
 }
 VAR_13 = VAR_16;

 VAR_16 = FUNC_0(VAR_12, VAR_2);
 if (VAR_16 < 0) {
  FUNC_3(VAR_9, "Failed to read min baseline. err = %d\n", VAR_16);
  goto out;
 }
 VAR_14 = VAR_16;

 FUNC_2(VAR_9, "Baseline report successful. Max: %d Min: %d\n",
  VAR_13, VAR_14);
 VAR_16 = FUNC_6(VAR_11, VAR_8, "%d %d\n", VAR_13, VAR_14);

out:
 return VAR_16;
}
