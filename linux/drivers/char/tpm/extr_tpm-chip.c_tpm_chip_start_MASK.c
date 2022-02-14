
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int locality; } ;


 int FUNC_0 (struct tpm_chip*) ;
 int FUNC_1 (struct tpm_chip*) ;
 int FUNC_2 (struct tpm_chip*) ;
 int FUNC_3 (struct tpm_chip*) ;
 int FUNC_4 (struct tpm_chip*) ;

int FUNC_5(struct tpm_chip *VAR_0)
{
 int VAR_1;

 FUNC_1(VAR_0);

 if (VAR_0->locality == -1) {
  VAR_1 = FUNC_4(VAR_0);
  if (VAR_1) {
   FUNC_0(VAR_0);
   return VAR_1;
  }
 }

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1) {
  FUNC_3(VAR_0);
  FUNC_0(VAR_0);
  return VAR_1;
 }

 return 0;
}
