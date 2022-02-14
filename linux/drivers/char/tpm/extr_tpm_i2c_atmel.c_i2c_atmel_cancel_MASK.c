
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int dev; } ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(struct tpm_chip *VAR_0)
{
 FUNC_0(&VAR_0->dev, "TPM operation cancellation was requested, but is not supported");
}
