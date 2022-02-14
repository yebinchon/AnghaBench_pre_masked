
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mbox_chan {struct imx_mu_con_priv* con_priv; int mbox; } ;
struct imx_mu_priv {int dev; } ;
struct imx_mu_con_priv {int type; int idx; } ;
typedef int irqreturn_t ;





 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (struct imx_mu_priv*,int ) ;
 int FUNC_9 (struct imx_mu_priv*,scalar_t__,int ) ;
 int FUNC_10 (struct imx_mu_priv*,int ,scalar_t__) ;
 int FUNC_11 (struct mbox_chan*,void*) ;
 int FUNC_12 (struct mbox_chan*,int ) ;
 struct imx_mu_priv* FUNC_13 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_14(int VAR_4, void *VAR_5)
{
 struct mbox_chan *VAR_6 = VAR_5;
 struct imx_mu_priv *VAR_7 = FUNC_13(VAR_6->mbox);
 struct imx_mu_con_priv *VAR_8 = VAR_6->con_priv;
 u32 VAR_9, VAR_10, VAR_11;

 VAR_10 = FUNC_8(VAR_7, VAR_0);
 VAR_9 = FUNC_8(VAR_7, VAR_1);

 switch (VAR_8->type) {
 case 128:
  VAR_9 &= FUNC_6(VAR_8->idx) &
   (VAR_10 & FUNC_2(VAR_8->idx));
  break;
 case 130:
  VAR_9 &= FUNC_5(VAR_8->idx) &
   (VAR_10 & FUNC_1(VAR_8->idx));
  break;
 case 129:
  VAR_9 &= FUNC_4(VAR_8->idx) &
   (VAR_10 & FUNC_0(VAR_8->idx));
  break;
 default:
  break;
 }

 if (!VAR_9)
  return VAR_3;

 if (VAR_9 == FUNC_6(VAR_8->idx)) {
  FUNC_10(VAR_7, 0, FUNC_2(VAR_8->idx));
  FUNC_12(VAR_6, 0);
 } else if (VAR_9 == FUNC_5(VAR_8->idx)) {
  VAR_11 = FUNC_8(VAR_7, FUNC_3(VAR_8->idx));
  FUNC_11(VAR_6, (void *)&VAR_11);
 } else if (VAR_9 == FUNC_4(VAR_8->idx)) {
  FUNC_9(VAR_7, FUNC_4(VAR_8->idx), VAR_1);
  FUNC_11(VAR_6, ((void*)0));
 } else {
  FUNC_7(VAR_7->dev, "Not handled interrupt\n");
  return VAR_3;
 }

 return VAR_2;
}
