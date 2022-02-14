
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_dmfc_priv {int mutex; int use_count; int ipu; } ;
struct dmfc_channel {struct ipu_dmfc_priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct dmfc_channel *VAR_1)
{
 struct ipu_dmfc_priv *VAR_2 = VAR_1->priv;
 FUNC_1(&VAR_2->mutex);

 if (!VAR_2->use_count)
  FUNC_0(VAR_2->ipu, VAR_0);

 VAR_2->use_count++;

 FUNC_2(&VAR_2->mutex);

 return 0;
}
