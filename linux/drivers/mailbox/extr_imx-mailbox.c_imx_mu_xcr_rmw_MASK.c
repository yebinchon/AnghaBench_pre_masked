
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx_mu_priv {int xcr_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct imx_mu_priv*,int ) ;
 int FUNC_1 (struct imx_mu_priv*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static u32 FUNC_4(struct imx_mu_priv *VAR_1, u32 VAR_2, u32 VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5;

 FUNC_2(&VAR_1->xcr_lock, VAR_4);
 VAR_5 = FUNC_0(VAR_1, VAR_0);
 VAR_5 &= ~VAR_3;
 VAR_5 |= VAR_2;
 FUNC_1(VAR_1, VAR_5, VAR_0);
 FUNC_3(&VAR_1->xcr_lock, VAR_4);

 return VAR_5;
}
