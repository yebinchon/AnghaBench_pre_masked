
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_chan {struct imx_mu_con_priv* con_priv; int mbox; } ;
struct imx_mu_priv {int irq; int dev; } ;
struct imx_mu_con_priv {int type; int idx; int irq_desc; int txdb_tasklet; } ;




 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct imx_mu_priv*,int ,int ) ;
 int FUNC_4 (int ,int ,int,int ,struct mbox_chan*) ;
 int FUNC_5 (int *,int ,unsigned long) ;
 struct imx_mu_priv* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct mbox_chan *VAR_5)
{
 struct imx_mu_priv *VAR_6 = FUNC_6(VAR_5->mbox);
 struct imx_mu_con_priv *VAR_7 = VAR_5->con_priv;
 int VAR_8;

 if (VAR_7->type == VAR_0) {

  FUNC_5(&VAR_7->txdb_tasklet, VAR_4,
        (unsigned long)VAR_7);
  return 0;
 }

 VAR_8 = FUNC_4(VAR_6->irq, VAR_3, VAR_2 |
     VAR_1, VAR_7->irq_desc, VAR_5);
 if (VAR_8) {
  FUNC_2(VAR_6->dev,
   "Unable to acquire IRQ %d\n", VAR_6->irq);
  return VAR_8;
 }

 switch (VAR_7->type) {
 case 129:
  FUNC_3(VAR_6, FUNC_1(VAR_7->idx), 0);
  break;
 case 128:
  FUNC_3(VAR_6, FUNC_0(VAR_7->idx), 0);
  break;
 default:
  break;
 }

 return 0;
}
