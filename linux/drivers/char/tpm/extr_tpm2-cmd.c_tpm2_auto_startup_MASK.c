
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tpm_chip*) ;
 int FUNC_1 (struct tpm_chip*) ;
 int FUNC_2 (struct tpm_chip*) ;
 int FUNC_3 (struct tpm_chip*) ;

int FUNC_4(struct tpm_chip *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  goto out;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 && VAR_3 != VAR_1)
  goto out;

 if (VAR_3 == VAR_1) {
  VAR_3 = FUNC_3(VAR_2);
  if (VAR_3)
   goto out;

  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3)
   goto out;
 }

 VAR_3 = FUNC_1(VAR_2);

out:
 if (VAR_3 > 0)
  VAR_3 = -VAR_0;
 return VAR_3;
}
