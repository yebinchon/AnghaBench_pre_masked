
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_nsc_priv {scalar_t__ base; } ;
struct tpm_chip {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct tpm_nsc_priv* FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct tpm_chip *VAR_2)
{
 struct tpm_nsc_priv *VAR_3 = FUNC_0(&VAR_2->dev);

 FUNC_1(VAR_1, VAR_3->base + VAR_0);
}
