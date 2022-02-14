
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ipu_flow {scalar_t__ base; struct ipu_dp_priv* priv; } ;
struct ipu_dp_priv {int ipu; } ;
struct ipu_dp {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 struct ipu_flow* FUNC_1 (struct ipu_dp*) ;
 int FUNC_2 (int,scalar_t__) ;

int FUNC_3(struct ipu_dp *VAR_1, u16 VAR_2, u16 VAR_3)
{
 struct ipu_flow *VAR_4 = FUNC_1(VAR_1);
 struct ipu_dp_priv *VAR_5 = VAR_4->priv;

 FUNC_2((VAR_2 << 16) | VAR_3, VAR_4->base + VAR_0);

 FUNC_0(VAR_5->ipu, 1);

 return 0;
}
