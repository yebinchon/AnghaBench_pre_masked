
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;
struct ecx_plat_data {scalar_t__ post_clocks; scalar_t__ pre_clocks; int n_ports; int port_to_sgpio; struct gpio_desc** sgpio_gpiod; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct ata_port_info {int flags; } ;
struct ahci_host_priv {int em_buf_sz; int em_msg_type; scalar_t__ em_loc; struct ecx_plat_data* plat_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int VAR_4 ;
 int FUNC_1 (struct device*,char*,int) ;
 struct gpio_desc* FUNC_2 (struct device*,char*,int,int ) ;
 int FUNC_3 (struct gpio_desc*,char*) ;
 scalar_t__ FUNC_4 (struct device_node*,char*,scalar_t__*) ;
 int FUNC_5 (struct device_node*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_5,
     struct ahci_host_priv *VAR_6,
     struct ata_port_info *VAR_7)
{
 struct device_node *VAR_8 = VAR_5->of_node;
 struct ecx_plat_data *VAR_9 = VAR_6->plat_data;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  struct gpio_desc *VAR_11;

  VAR_11 = FUNC_2(VAR_5, "calxeda,sgpio", VAR_10,
          VAR_3);
  if (FUNC_0(VAR_11)) {
   FUNC_1(VAR_5, "failed to get GPIO %d\n", VAR_10);
   continue;
  }
  FUNC_3(VAR_11, "CX SGPIO");

  VAR_9->sgpio_gpiod[VAR_10] = VAR_11;
 }
 FUNC_5(VAR_8, "calxeda,led-order",
      VAR_9->port_to_sgpio,
      VAR_9->n_ports);
 if (FUNC_4(VAR_8, "calxeda,pre-clocks", &VAR_9->pre_clocks))
  VAR_9->pre_clocks = 0;
 if (FUNC_4(VAR_8, "calxeda,post-clocks",
    &VAR_9->post_clocks))
  VAR_9->post_clocks = 0;


 VAR_6->em_loc = 0;
 VAR_6->em_buf_sz = 4;
 VAR_6->em_msg_type = VAR_2;
 VAR_7->flags |= VAR_0 | VAR_1;
}
