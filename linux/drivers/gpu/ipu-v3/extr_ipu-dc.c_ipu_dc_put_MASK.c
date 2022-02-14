
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_dc_priv {int mutex; } ;
struct ipu_dc {int in_use; struct ipu_dc_priv* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ipu_dc *VAR_0)
{
 struct ipu_dc_priv *VAR_1 = VAR_0->priv;

 FUNC_0(&VAR_1->mutex);
 VAR_0->in_use = 0;
 FUNC_1(&VAR_1->mutex);
}
