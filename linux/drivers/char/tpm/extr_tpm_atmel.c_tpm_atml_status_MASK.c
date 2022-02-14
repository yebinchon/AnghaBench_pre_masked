
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tpm_chip {int dev; } ;
struct tpm_atmel_priv {scalar_t__ iobase; } ;


 struct tpm_atmel_priv* FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static u8 FUNC_2(struct tpm_chip *VAR_0)
{
 struct tpm_atmel_priv *VAR_1 = FUNC_0(&VAR_0->dev);

 return FUNC_1(VAR_1->iobase + 1);
}
