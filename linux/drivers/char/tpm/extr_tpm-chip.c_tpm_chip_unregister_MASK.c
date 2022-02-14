
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int flags; int devs; int cdevs; int hwrng; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tpm_chip*) ;
 int FUNC_4 (struct tpm_chip*) ;
 int FUNC_5 (struct tpm_chip*) ;

void FUNC_6(struct tpm_chip *VAR_2)
{
 FUNC_5(VAR_2);
 if (FUNC_0(VAR_0))
  FUNC_2(&VAR_2->hwrng);
 FUNC_3(VAR_2);
 if (VAR_2->flags & VAR_1)
  FUNC_1(&VAR_2->cdevs, &VAR_2->devs);
 FUNC_4(VAR_2);
}
