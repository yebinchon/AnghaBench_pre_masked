
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipu_smfc_priv {int lock; scalar_t__ base; } ;
struct ipu_smfc {int chno; struct ipu_smfc_priv* priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,scalar_t__) ;

int FUNC_4(struct ipu_smfc *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct ipu_smfc_priv *VAR_4 = VAR_1->priv;
 unsigned long VAR_5;
 u32 VAR_6, VAR_7;

 FUNC_1(&VAR_4->lock, VAR_5);

 VAR_7 = VAR_1->chno * 6 + (VAR_1->chno > 1 ? 4 : 0);
 VAR_6 = FUNC_0(VAR_4->base + VAR_0);
 VAR_6 &= ~(0x3f << VAR_7);
 VAR_6 |= ((VAR_3 << 3) | VAR_2) << VAR_7;
 FUNC_3(VAR_6, VAR_4->base + VAR_0);

 FUNC_2(&VAR_4->lock, VAR_5);

 return 0;
}
