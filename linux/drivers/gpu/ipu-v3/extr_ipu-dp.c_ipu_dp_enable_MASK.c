
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_soc {struct ipu_dp_priv* dp_priv; } ;
struct ipu_dp_priv {int mutex; int use_count; int ipu; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct ipu_soc *VAR_1)
{
 struct ipu_dp_priv *VAR_2 = VAR_1->dp_priv;

 FUNC_1(&VAR_2->mutex);

 if (!VAR_2->use_count)
  FUNC_0(VAR_2->ipu, VAR_0);

 VAR_2->use_count++;

 FUNC_2(&VAR_2->mutex);

 return 0;
}
