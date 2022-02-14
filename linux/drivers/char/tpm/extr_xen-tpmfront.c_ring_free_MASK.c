
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_private {scalar_t__ irq; scalar_t__ shr; scalar_t__ ring_ref; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (scalar_t__,int ,unsigned long) ;
 int FUNC_2 (struct tpm_private*) ;
 int FUNC_3 (scalar_t__,struct tpm_private*) ;

__attribute__((used)) static void FUNC_4(struct tpm_private *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->ring_ref)
  FUNC_1(VAR_0->ring_ref, 0,
    (unsigned long)VAR_0->shr);
 else
  FUNC_0((unsigned long)VAR_0->shr);

 if (VAR_0->irq)
  FUNC_3(VAR_0->irq, VAR_0);

 FUNC_2(VAR_0);
}
