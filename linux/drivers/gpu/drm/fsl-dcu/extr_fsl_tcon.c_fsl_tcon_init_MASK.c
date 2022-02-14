
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_tcon {int ipg_clk; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 struct fsl_tcon* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,struct fsl_tcon*,struct device_node*) ;
 int FUNC_6 (struct device_node*,char*) ;
 int FUNC_7 (struct device_node*) ;
 struct device_node* FUNC_8 (int ,char*,int ) ;

struct fsl_tcon *FUNC_9(struct device *VAR_1)
{
 struct fsl_tcon *VAR_2;
 struct device_node *VAR_3;
 int VAR_4;


 VAR_3 = FUNC_8(VAR_1->of_node, "fsl,tcon", 0);
 if (!VAR_3)
  return ((void*)0);

 VAR_2 = FUNC_4(VAR_1, sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  goto err_node_put;

 VAR_4 = FUNC_5(VAR_1, VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_1, "Couldn't create the TCON regmap\n");
  goto err_node_put;
 }

 VAR_2->ipg_clk = FUNC_6(VAR_3, "ipg");
 if (FUNC_0(VAR_2->ipg_clk)) {
  FUNC_2(VAR_1, "Couldn't get the TCON bus clock\n");
  goto err_node_put;
 }

 VAR_4 = FUNC_1(VAR_2->ipg_clk);
 if (VAR_4) {
  FUNC_2(VAR_1, "Couldn't enable the TCON clock\n");
  goto err_node_put;
 }

 FUNC_7(VAR_3);
 FUNC_3(VAR_1, "Using TCON in bypass mode\n");

 return VAR_2;

err_node_put:
 FUNC_7(VAR_3);
 return ((void*)0);
}
