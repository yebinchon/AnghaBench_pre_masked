
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipu_flow {scalar_t__ base; struct ipu_dp_priv* priv; } ;
struct ipu_dp_priv {int mutex; int ipu; } ;
struct ipu_dp {int foreground; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 struct ipu_flow* FUNC_4 (struct ipu_dp*) ;
 int FUNC_5 (int ,scalar_t__) ;

int FUNC_6(struct ipu_dp *VAR_2)
{
 struct ipu_flow *VAR_3 = FUNC_4(VAR_2);
 struct ipu_dp_priv *VAR_4 = VAR_3->priv;
 u32 VAR_5;

 if (!VAR_2->foreground)
  return 0;

 FUNC_1(&VAR_4->mutex);

 VAR_5 = FUNC_3(VAR_3->base + VAR_0);
 VAR_5 |= VAR_1;
 FUNC_5(VAR_5, VAR_3->base + VAR_0);

 FUNC_0(VAR_4->ipu, 1);

 FUNC_2(&VAR_4->mutex);

 return 0;
}
