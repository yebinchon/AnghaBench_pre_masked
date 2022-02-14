
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tpm_chip*) ;
 int FUNC_1 (struct tpm_chip*) ;

int FUNC_2(struct tpm_chip *VAR_2)
{
 if (VAR_2->flags & VAR_0)
  return 0;

 if (VAR_2->flags & VAR_1)
  return FUNC_1(VAR_2);
 else
  return FUNC_0(VAR_2);
}
