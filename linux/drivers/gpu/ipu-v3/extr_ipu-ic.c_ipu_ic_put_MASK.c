
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_ic_priv {int lock; } ;
struct ipu_ic {int in_use; struct ipu_ic_priv* priv; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void FUNC_2(struct ipu_ic *VAR_0)
{
 struct ipu_ic_priv *VAR_1 = VAR_0->priv;
 unsigned long VAR_2;

 FUNC_0(&VAR_1->lock, VAR_2);
 VAR_0->in_use = 0;
 FUNC_1(&VAR_1->lock, VAR_2);
}
