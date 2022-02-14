
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sata_oxnas_host_priv {int n_ports; int rst_link; int rst_sata; int rst_phy; int clk; } ;
struct ata_host {int * ports; struct sata_oxnas_host_priv* private_data; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ata_host*) ;

__attribute__((used)) static void FUNC_7(struct ata_host *VAR_0)
{
 struct sata_oxnas_host_priv *VAR_1 = VAR_0->private_data;
 int VAR_2;

 FUNC_0("ENTER\n");
 FUNC_1(VAR_1->clk);

 FUNC_2(VAR_1->rst_sata);
 FUNC_2(VAR_1->rst_link);
 FUNC_2(VAR_1->rst_phy);

 FUNC_5(50);


 FUNC_3(VAR_1->rst_phy);
 FUNC_5(50);

 FUNC_3(VAR_1->rst_sata);
 FUNC_3(VAR_1->rst_link);
 FUNC_5(50);

 FUNC_6(VAR_0);

 FUNC_4(VAR_0->ports[0], 0x60, 0x2988);

 for (VAR_2 = 0; VAR_2 < VAR_1->n_ports; VAR_2++) {

  FUNC_4(VAR_0->ports[VAR_2], 0x70, 0x55629);
 }
 FUNC_5(50);
}
