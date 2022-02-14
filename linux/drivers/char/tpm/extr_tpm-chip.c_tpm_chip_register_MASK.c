
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int hwrng; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tpm_chip*) ;
 int FUNC_3 (struct tpm_chip*) ;
 int FUNC_4 (struct tpm_chip*) ;
 int FUNC_5 (struct tpm_chip*) ;
 int FUNC_6 (struct tpm_chip*) ;
 int FUNC_7 (struct tpm_chip*) ;
 int FUNC_8 (struct tpm_chip*) ;
 int FUNC_9 (struct tpm_chip*) ;
 int FUNC_10 (struct tpm_chip*) ;
 int FUNC_11 (struct tpm_chip*) ;
 int FUNC_12 (struct tpm_chip*) ;
 int FUNC_13 (struct tpm_chip*) ;

int FUNC_14(struct tpm_chip *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_9(VAR_2);
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_6(VAR_2);
 if (VAR_3) {
  FUNC_10(VAR_2);
  return VAR_3;
 }

 VAR_3 = FUNC_12(VAR_2);
 FUNC_10(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_13(VAR_2);

 VAR_3 = FUNC_7(VAR_2);
 if (VAR_3 != 0 && VAR_3 != -VAR_1)
  return VAR_3;

 FUNC_5(VAR_2);

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  goto out_ppi;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  goto out_hwrng;

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3) {
  FUNC_11(VAR_2);
  return VAR_3;
 }

 return 0;

out_hwrng:
 if (FUNC_0(VAR_0))
  FUNC_1(&VAR_2->hwrng);
out_ppi:
 FUNC_8(VAR_2);

 return VAR_3;
}
