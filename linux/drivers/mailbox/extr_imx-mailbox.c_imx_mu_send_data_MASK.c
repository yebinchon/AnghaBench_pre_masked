
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mbox_chan {struct imx_mu_con_priv* con_priv; int mbox; } ;
struct imx_mu_priv {int dev; } ;
struct imx_mu_con_priv {int type; int txdb_tasklet; int idx; } ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct imx_mu_priv*,int ,int ) ;
 int FUNC_5 (struct imx_mu_priv*,int ,int ) ;
 int FUNC_6 (int *) ;
 struct imx_mu_priv* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct mbox_chan *VAR_1, void *VAR_2)
{
 struct imx_mu_priv *VAR_3 = FUNC_7(VAR_1->mbox);
 struct imx_mu_con_priv *VAR_4 = VAR_1->con_priv;
 u32 *VAR_5 = VAR_2;

 switch (VAR_4->type) {
 case 129:
  FUNC_4(VAR_3, *VAR_5, FUNC_2(VAR_4->idx));
  FUNC_5(VAR_3, FUNC_1(VAR_4->idx), 0);
  break;
 case 128:
  FUNC_5(VAR_3, FUNC_0(VAR_4->idx), 0);
  FUNC_6(&VAR_4->txdb_tasklet);
  break;
 default:
  FUNC_3(VAR_3->dev, "Send data on wrong channel type: %d\n", VAR_4->type);
  return -VAR_0;
 }

 return 0;
}
