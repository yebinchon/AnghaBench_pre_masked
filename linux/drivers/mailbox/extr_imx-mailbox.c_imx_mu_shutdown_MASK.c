
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_chan {struct imx_mu_con_priv* con_priv; int mbox; } ;
struct imx_mu_priv {int irq; } ;
struct imx_mu_con_priv {scalar_t__ type; int idx; int txdb_tasklet; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct mbox_chan*) ;
 int FUNC_4 (struct imx_mu_priv*,int ,int) ;
 int FUNC_5 (int *) ;
 struct imx_mu_priv* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct mbox_chan *VAR_1)
{
 struct imx_mu_priv *VAR_2 = FUNC_6(VAR_1->mbox);
 struct imx_mu_con_priv *VAR_3 = VAR_1->con_priv;

 if (VAR_3->type == VAR_0)
  FUNC_5(&VAR_3->txdb_tasklet);

 FUNC_4(VAR_2, 0, FUNC_2(VAR_3->idx) |
         FUNC_1(VAR_3->idx) | FUNC_0(VAR_3->idx));

 FUNC_3(VAR_2->irq, VAR_1);
}
