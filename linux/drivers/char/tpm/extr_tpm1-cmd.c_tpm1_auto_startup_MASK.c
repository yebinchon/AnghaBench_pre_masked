
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct tpm_chip*) ;
 int FUNC_2 (struct tpm_chip*) ;

int FUNC_3(struct tpm_chip *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  goto out;
 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) {
  FUNC_0(&VAR_1->dev, "TPM self test failed\n");
  goto out;
 }

 return VAR_2;
out:
 if (VAR_2 > 0)
  VAR_2 = -VAR_0;
 return VAR_2;
}
