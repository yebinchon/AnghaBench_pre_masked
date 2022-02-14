
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seattle_plat_data {int sgpio_ctrl; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct ata_port_info {int dummy; } ;
struct ahci_host_priv {int em_buf_sz; struct seattle_plat_data* plat_data; int em_msg_type; scalar_t__ em_loc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 struct ata_port_info const VAR_3 ;
 struct ata_port_info const VAR_4 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,int ) ;
 struct seattle_plat_data* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct platform_device*,int ,int) ;

__attribute__((used)) static const struct ata_port_info *FUNC_6(
  struct platform_device *VAR_5, struct ahci_host_priv *VAR_6)
{
 struct device *VAR_7 = &VAR_5->dev;
 struct seattle_plat_data *VAR_8;
 u32 VAR_9;

 VAR_8 = FUNC_3(VAR_7, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return &VAR_3;

 VAR_8->sgpio_ctrl = FUNC_2(VAR_7,
         FUNC_5(VAR_5, VAR_2, 1));
 if (FUNC_0(VAR_8->sgpio_ctrl))
  return &VAR_3;

 VAR_9 = FUNC_4(VAR_8->sgpio_ctrl);

 if (!(VAR_9 & 0xf))
  return &VAR_3;

 VAR_6->em_loc = 0;
 VAR_6->em_buf_sz = 4;
 VAR_6->em_msg_type = VAR_0;
 VAR_6->plat_data = VAR_8;

 FUNC_1(VAR_7, "SGPIO LED control is enabled.\n");
 return &VAR_4;
}
