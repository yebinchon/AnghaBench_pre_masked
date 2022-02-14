
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int dev; int ops_sem; int tpm_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tpm_chip*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct tpm_chip *VAR_0)
{
 FUNC_2(VAR_0);
 FUNC_0(&VAR_0->tpm_mutex);
 FUNC_3(&VAR_0->ops_sem);
 FUNC_1(&VAR_0->dev);
}
