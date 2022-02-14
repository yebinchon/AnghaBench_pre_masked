
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_nsc_priv {int base; } ;
struct device {int dummy; } ;
struct tpm_chip {struct device dev; } ;


 void* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct tpm_chip*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct tpm_chip *VAR_1 = FUNC_0(VAR_0);
 struct tpm_nsc_priv *VAR_2 = FUNC_0(&VAR_1->dev);

 FUNC_2(VAR_1);
 FUNC_1(VAR_2->base, 2);
}
