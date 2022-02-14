
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct ipu_flow {scalar_t__ base; struct ipu_dp_priv* priv; } ;
struct ipu_dp_priv {int mutex; int ipu; } ;
struct ipu_dp {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 struct ipu_flow* FUNC_4 (struct ipu_dp*) ;
 int FUNC_5 (int,scalar_t__) ;

int FUNC_6(struct ipu_dp *VAR_4, bool VAR_5,
  u8 VAR_6, bool VAR_7)
{
 struct ipu_flow *VAR_8 = FUNC_4(VAR_4);
 struct ipu_dp_priv *VAR_9 = VAR_8->priv;
 u32 VAR_10;

 FUNC_1(&VAR_9->mutex);

 VAR_10 = FUNC_3(VAR_8->base + VAR_0);
 if (VAR_7)
  VAR_10 &= ~VAR_2;
 else
  VAR_10 |= VAR_2;
 FUNC_5(VAR_10, VAR_8->base + VAR_0);

 if (VAR_5) {
  VAR_10 = FUNC_3(VAR_8->base + VAR_3) & 0x00FFFFFFL;
  FUNC_5(VAR_10 | ((u32) VAR_6 << 24),
        VAR_8->base + VAR_3);

  VAR_10 = FUNC_3(VAR_8->base + VAR_0);
  FUNC_5(VAR_10 | VAR_1, VAR_8->base + VAR_0);
 } else {
  VAR_10 = FUNC_3(VAR_8->base + VAR_0);
  FUNC_5(VAR_10 & ~VAR_1, VAR_8->base + VAR_0);
 }

 FUNC_0(VAR_9->ipu, 1);

 FUNC_2(&VAR_9->mutex);

 return 0;
}
