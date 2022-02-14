
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tpm_nsc_priv {scalar_t__ base; } ;
struct tpm_chip {int dev; } ;


 scalar_t__ VAR_0 ;
 struct tpm_nsc_priv* FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static u8 FUNC_2(struct tpm_chip *VAR_1)
{
 struct tpm_nsc_priv *VAR_2 = FUNC_0(&VAR_1->dev);

 return FUNC_1(VAR_2->base + VAR_0);
}
