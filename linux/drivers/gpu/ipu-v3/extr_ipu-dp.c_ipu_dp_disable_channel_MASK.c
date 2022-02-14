
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipu_flow {scalar_t__ base; struct ipu_dp_priv* priv; } ;
struct ipu_dp_priv {int mutex; int ipu; } ;
struct ipu_dp {int foreground; int in_cs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 struct ipu_flow* FUNC_4 (struct ipu_dp*) ;
 int FUNC_5 (int,scalar_t__) ;

void FUNC_6(struct ipu_dp *VAR_7, bool VAR_8)
{
 struct ipu_flow *VAR_9 = FUNC_4(VAR_7);
 struct ipu_dp_priv *VAR_10 = VAR_9->priv;
 u32 VAR_11, VAR_12;

 VAR_7->in_cs = VAR_6;

 if (!VAR_7->foreground)
  return;

 FUNC_1(&VAR_10->mutex);

 VAR_11 = FUNC_3(VAR_9->base + VAR_0);
 VAR_12 = VAR_11 & VAR_3;
 VAR_11 &= ~VAR_3;
 if (VAR_12 == VAR_2 || VAR_12 == VAR_1)
  VAR_11 |= VAR_1;

 VAR_11 &= ~VAR_4;
 FUNC_5(VAR_11, VAR_9->base + VAR_0);

 FUNC_5(0, VAR_9->base + VAR_5);
 FUNC_0(VAR_10->ipu, VAR_8);

 FUNC_2(&VAR_10->mutex);
}
