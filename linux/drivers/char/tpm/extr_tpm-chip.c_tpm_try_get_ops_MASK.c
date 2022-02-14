
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int dev; int ops_sem; int tpm_mutex; int ops; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tpm_chip*) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct tpm_chip *VAR_1)
{
 int VAR_2 = -VAR_0;

 FUNC_1(&VAR_1->dev);

 FUNC_0(&VAR_1->ops_sem);
 if (!VAR_1->ops)
  goto out_ops;

 FUNC_2(&VAR_1->tpm_mutex);
 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2)
  goto out_lock;

 return 0;
out_lock:
 FUNC_3(&VAR_1->tpm_mutex);
out_ops:
 FUNC_6(&VAR_1->ops_sem);
 FUNC_4(&VAR_1->dev);
 return VAR_2;
}
