
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_ahci_plat {int mode; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct ahci_host_priv {int force_port_map; struct mtk_ahci_plat* plat_data; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct device*,char*) ;
 scalar_t__ FUNC_3 (struct device_node*,char*,int *) ;
 int FUNC_4 (struct device_node*,char*,int *) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_7(struct ahci_host_priv *VAR_3,
       struct device *VAR_4)
{
 struct mtk_ahci_plat *VAR_5 = VAR_3->plat_data;
 struct device_node *VAR_6 = VAR_4->of_node;


 if (FUNC_3(VAR_6, "mediatek,phy-mode", ((void*)0))) {
  VAR_5->mode = FUNC_6(
     VAR_6, "mediatek,phy-mode");
  if (FUNC_0(VAR_5->mode)) {
   FUNC_2(VAR_4, "missing phy-mode phandle\n");
   return FUNC_1(VAR_5->mode);
  }

  FUNC_5(VAR_5->mode, VAR_0, VAR_2,
       VAR_1);
 }

 FUNC_4(VAR_6, "ports-implemented", &VAR_3->force_port_map);

 return 0;
}
