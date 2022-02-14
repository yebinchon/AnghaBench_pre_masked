
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct tpm_chip {void* timeout_d; void* timeout_c; void* timeout_b; void* timeout_a; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int * client; int locality; struct tpm_chip* chip; int chip_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct tpm_chip*) ;
 int FUNC_1 (struct tpm_chip*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*,int) ;
 scalar_t__ FUNC_5 (int ,int *,int) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct tpm_chip*,int ,int) ;
 scalar_t__ FUNC_8 (struct tpm_chip*,int ) ;
 int FUNC_9 (struct tpm_chip*) ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 struct tpm_chip* FUNC_10 (struct device*,int *) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_10)
{
 u32 VAR_11;
 int VAR_12 = 0;
 struct tpm_chip *VAR_13;

 VAR_13 = FUNC_10(VAR_10, &VAR_9);
 if (FUNC_0(VAR_13))
  return FUNC_1(VAR_13);


 VAR_13->timeout_a = FUNC_6(VAR_5);
 VAR_13->timeout_b = FUNC_6(VAR_4);
 VAR_13->timeout_c = FUNC_6(VAR_5);
 VAR_13->timeout_d = FUNC_6(VAR_5);

 if (FUNC_8(VAR_13, 0) != 0) {
  FUNC_3(VAR_10, "could not request locality\n");
  VAR_12 = -VAR_1;
  goto out_err;
 }


 if (FUNC_5(FUNC_2(0), (u8 *)&VAR_11, 4) < 0) {
  FUNC_3(VAR_10, "could not read vendor id\n");
  VAR_12 = -VAR_0;
  goto out_release;
 }

 if (VAR_11 == VAR_7) {
  VAR_8.chip_type = VAR_3;
 } else if (VAR_11 == VAR_6) {
  VAR_8.chip_type = VAR_2;
 } else {
  FUNC_3(VAR_10, "vendor id did not match! ID was %08x\n", VAR_11);
  VAR_12 = -VAR_1;
  goto out_release;
 }

 FUNC_4(VAR_10, "1.2 TPM (device-id 0x%X)\n", VAR_11 >> 16);

 VAR_8.chip = VAR_13;

 return FUNC_9(VAR_13);
out_release:
 FUNC_7(VAR_13, VAR_8.locality, 1);
 VAR_8.client = ((void*)0);
out_err:
 return VAR_12;
}
