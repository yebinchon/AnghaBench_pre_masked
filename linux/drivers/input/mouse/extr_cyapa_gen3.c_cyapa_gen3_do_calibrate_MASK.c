
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
 int FUNC_0 (struct cyapa*,int ) ;
 int FUNC_1 (struct cyapa*,int ,int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,...) ;
 struct cyapa* FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,char*,int) ;
 int VAR_7 ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (unsigned long) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_8,
         struct device_attribute *VAR_9,
         const char *VAR_10, size_t VAR_11)
{
 struct cyapa *VAR_12 = FUNC_4(VAR_8);
 unsigned long VAR_13;
 int VAR_14;

 VAR_14 = FUNC_0(VAR_12, VAR_0);
 if (VAR_14 < 0) {
  FUNC_3(VAR_8, "Error reading dev status: %d\n", VAR_14);
  goto out;
 }
 if ((VAR_14 & VAR_2) != VAR_2) {
  FUNC_5(VAR_8, "Trackpad device is busy, device state: 0x%02x\n",
    VAR_14);
  VAR_14 = -VAR_3;
  goto out;
 }

 VAR_14 = FUNC_1(VAR_12, VAR_1,
          VAR_6);
 if (VAR_14 < 0) {
  FUNC_3(VAR_8, "Failed to send calibrate command: %d\n",
   VAR_14);
  goto out;
 }


 VAR_13 = VAR_7 + 2 * VAR_5;
 do {





  FUNC_6(100);
  VAR_14 = FUNC_0(VAR_12, VAR_0);
  if (VAR_14 < 0) {
   FUNC_3(VAR_8, "Error reading dev status: %d\n", VAR_14);
   goto out;
  }
  if ((VAR_14 & VAR_2) == VAR_2) {
   FUNC_2(VAR_8, "Calibration successful.\n");
   goto out;
  }
 } while (FUNC_7(VAR_13));

 FUNC_3(VAR_8, "Failed to calibrate. Timeout.\n");
 VAR_14 = -VAR_4;

out:
 return VAR_14 < 0 ? VAR_14 : VAR_11;
}
