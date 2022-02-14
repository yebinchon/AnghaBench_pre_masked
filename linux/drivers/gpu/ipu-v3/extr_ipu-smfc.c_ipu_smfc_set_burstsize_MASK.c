
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

int FUNC_4(struct ipu_smfc *VAR_1, int VAR_2)
{
 struct ipu_smfc_priv *VAR_3 = VAR_1->priv;
 unsigned long VAR_4;
 u32 VAR_5, VAR_6;

 FUNC_1(&VAR_3->lock, VAR_4);

 VAR_6 = VAR_1->chno * 4;
 VAR_5 = FUNC_0(VAR_3->base + VAR_0);
 VAR_5 &= ~(0xf << VAR_6);
 VAR_5 |= VAR_2 << VAR_6;
 FUNC_3(VAR_5, VAR_3->base + VAR_0);

 FUNC_2(&VAR_3->lock, VAR_4);

 return 0;
}
