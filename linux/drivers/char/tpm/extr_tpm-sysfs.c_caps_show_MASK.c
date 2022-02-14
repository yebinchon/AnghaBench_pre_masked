
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tpm_chip {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_6__ {int Major; int Minor; int revMajor; int revMinor; } ;
struct TYPE_5__ {int Major; int Minor; int revMajor; int revMinor; } ;
struct TYPE_7__ {TYPE_2__ tpm_version; TYPE_1__ tpm_version_1_2; int manufacturer_id; } ;
typedef TYPE_3__ cap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int,...) ;
 struct tpm_chip* FUNC_2 (struct device*) ;
 int FUNC_3 (struct tpm_chip*,int ,TYPE_3__*,char*,int) ;
 int FUNC_4 (struct tpm_chip*) ;
 scalar_t__ FUNC_5 (struct tpm_chip*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3, struct device_attribute *VAR_4,
    char *VAR_5)
{
 struct tpm_chip *VAR_6 = FUNC_2(VAR_3);
 ssize_t VAR_7 = 0;
 char *VAR_8 = VAR_5;
 cap_t VAR_9;

 if (FUNC_5(VAR_6))
  return 0;

 if (FUNC_3(VAR_6, VAR_0, &VAR_9,
   "attempting to determine the manufacturer",
   sizeof(VAR_9.manufacturer_id)))
  goto out_ops;

 VAR_8 += FUNC_1(VAR_8, "Manufacturer: 0x%x\n",
         FUNC_0(VAR_9.manufacturer_id));


 VAR_7 = FUNC_3(VAR_6, VAR_2, &VAR_9,
    "attempting to determine the 1.2 version",
    sizeof(VAR_9.tpm_version_1_2));
 if (!VAR_7) {
  VAR_8 += FUNC_1(VAR_8,
          "TCG version: %d.%d\nFirmware version: %d.%d\n",
          VAR_9.tpm_version_1_2.Major,
          VAR_9.tpm_version_1_2.Minor,
          VAR_9.tpm_version_1_2.revMajor,
          VAR_9.tpm_version_1_2.revMinor);
 } else {

  if (FUNC_3(VAR_6, VAR_1, &VAR_9,
    "attempting to determine the 1.1 version",
    sizeof(VAR_9.tpm_version)))
   goto out_ops;
  VAR_8 += FUNC_1(VAR_8,
          "TCG version: %d.%d\nFirmware version: %d.%d\n",
          VAR_9.tpm_version.Major,
          VAR_9.tpm_version.Minor,
          VAR_9.tpm_version.revMajor,
          VAR_9.tpm_version.revMinor);
 }
 VAR_7 = VAR_8 - VAR_5;
out_ops:
 FUNC_4(VAR_6);
 return VAR_7;
}
