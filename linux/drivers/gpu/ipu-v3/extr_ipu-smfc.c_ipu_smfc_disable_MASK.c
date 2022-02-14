
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_smfc_priv {scalar_t__ use_count; int lock; int ipu; } ;
struct ipu_smfc {struct ipu_smfc_priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct ipu_smfc *VAR_1)
{
 struct ipu_smfc_priv *VAR_2 = VAR_1->priv;
 unsigned long VAR_3;

 FUNC_1(&VAR_2->lock, VAR_3);

 VAR_2->use_count--;

 if (!VAR_2->use_count)
  FUNC_0(VAR_2->ipu, VAR_0);

 if (VAR_2->use_count < 0)
  VAR_2->use_count = 0;

 FUNC_2(&VAR_2->lock, VAR_3);

 return 0;
}
