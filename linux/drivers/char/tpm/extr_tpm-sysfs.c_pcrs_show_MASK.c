
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct tpm_chip {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int num_pcrs; } ;
typedef TYPE_1__ cap_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,...) ;
 struct tpm_chip* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct tpm_chip*,int ,TYPE_1__*,char*,int) ;
 scalar_t__ FUNC_4 (struct tpm_chip*,scalar_t__,int*) ;
 int FUNC_5 (struct tpm_chip*) ;
 scalar_t__ FUNC_6 (struct tpm_chip*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2, struct device_attribute *VAR_3,
    char *VAR_4)
{
 cap_t VAR_5;
 u8 VAR_6[VAR_1];
 u32 VAR_7, VAR_8, VAR_9;
 char *VAR_10 = VAR_4;
 struct tpm_chip *VAR_11 = FUNC_2(VAR_2);

 if (FUNC_6(VAR_11))
  return 0;

 if (FUNC_3(VAR_11, VAR_0, &VAR_5,
   "attempting to determine the number of PCRS",
   sizeof(VAR_5.num_pcrs))) {
  FUNC_5(VAR_11);
  return 0;
 }

 VAR_9 = FUNC_0(VAR_5.num_pcrs);
 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
  if (FUNC_4(VAR_11, VAR_7, VAR_6)) {
   VAR_10 = VAR_4;
   break;
  }
  VAR_10 += FUNC_1(VAR_10, "PCR-%02d: ", VAR_7);
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
   VAR_10 += FUNC_1(VAR_10, "%02X ", VAR_6[VAR_8]);
  VAR_10 += FUNC_1(VAR_10, "\n");
 }
 FUNC_5(VAR_11);
 return VAR_10 - VAR_4;
}
