
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int dev; } ;


 int FUNC_0 (int *) ;
 struct tpm_chip* FUNC_1 () ;
 int FUNC_2 (struct tpm_chip*) ;

struct tpm_chip *FUNC_3(struct tpm_chip *VAR_0)
{
 int VAR_1;

 if (VAR_0) {
  if (!FUNC_2(VAR_0))
   return VAR_0;
  return ((void*)0);
 }

 VAR_0 = FUNC_1();
 if (!VAR_0)
  return ((void*)0);
 VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_0->dev);
 if (VAR_1)
  return ((void*)0);
 return VAR_0;
}
