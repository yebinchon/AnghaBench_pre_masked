
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int dev; } ;
struct tpm_atmel_priv {scalar_t__ iobase; } ;


 int VAR_0 ;
 struct tpm_atmel_priv* FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct tpm_chip *VAR_1)
{
 struct tpm_atmel_priv *VAR_2 = FUNC_0(&VAR_1->dev);

 FUNC_1(VAR_0, VAR_2->iobase + 1);
}
