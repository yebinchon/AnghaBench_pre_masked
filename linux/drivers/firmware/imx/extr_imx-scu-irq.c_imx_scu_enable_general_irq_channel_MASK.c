
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int np; } ;
struct mbox_client {int rx_callback; struct device* dev; } ;
struct mbox_chan {int dummy; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct mbox_chan*) ;
 int FUNC_2 (struct mbox_chan*) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,struct mbox_client*) ;
 struct mbox_client* FUNC_5 (struct device*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 struct mbox_chan* FUNC_7 (struct mbox_client*,char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,char*,char*,int ,struct of_phandle_args*) ;

int FUNC_10(struct device *VAR_8)
{
 struct of_phandle_args VAR_9;
 struct mbox_client *VAR_10;
 struct mbox_chan *VAR_11;
 int VAR_12 = 0, VAR_13 = 0;

 VAR_12 = FUNC_6(&VAR_3);
 if (VAR_12)
  return VAR_12;

 VAR_10 = FUNC_5(VAR_8, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->dev = VAR_8;
 VAR_10->rx_callback = VAR_5;


 VAR_11 = FUNC_7(VAR_10, "gip3");
 if (FUNC_1(VAR_11)) {
  VAR_12 = FUNC_2(VAR_11);
  FUNC_3(VAR_8, "failed to request mbox chan gip3, ret %d\n", VAR_12);
  FUNC_4(VAR_8, VAR_10);
  return VAR_12;
 }

 FUNC_0(&VAR_4, VAR_6);

 if (!FUNC_9(VAR_8->of_node, "mboxes",
           "#mbox-cells", 0, &VAR_9))
  VAR_13 = FUNC_8(VAR_9.np, "mu");


 if (VAR_13 < 0)
  VAR_13 = 1;

 VAR_7 = VAR_2 + VAR_13;

 return VAR_12;
}
