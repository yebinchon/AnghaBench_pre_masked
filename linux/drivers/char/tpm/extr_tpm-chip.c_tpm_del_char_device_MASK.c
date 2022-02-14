
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int flags; int ops_sem; int * ops; int dev_num; int dev; int cdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tpm_chip*,int ) ;
 int FUNC_6 (struct tpm_chip*) ;
 int FUNC_7 (struct tpm_chip*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct tpm_chip *VAR_4)
{
 FUNC_0(&VAR_4->cdev, &VAR_4->dev);


 FUNC_3(&VAR_3);
 FUNC_2(&VAR_2, ((void*)0), VAR_4->dev_num);
 FUNC_4(&VAR_3);


 FUNC_1(&VAR_4->ops_sem);
 if (VAR_4->flags & VAR_1) {
  if (!FUNC_6(VAR_4)) {
   FUNC_5(VAR_4, VAR_0);
   FUNC_7(VAR_4);
  }
 }
 VAR_4->ops = ((void*)0);
 FUNC_8(&VAR_4->ops_sem);
}
