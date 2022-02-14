
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sata_rcar_priv {scalar_t__ base; } ;
struct ata_eh_info {int dummy; } ;
struct TYPE_4__ {struct ata_eh_info eh_info; } ;
struct ata_port {TYPE_2__ link; TYPE_1__* host; } ;
struct TYPE_3__ {struct sata_rcar_priv* private_data; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ata_eh_info*) ;
 int FUNC_2 (struct ata_eh_info*) ;
 int FUNC_3 (struct ata_eh_info*,char*,char*) ;
 int FUNC_4 (struct ata_port*) ;
 int FUNC_5 (struct ata_port*) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct ata_port *VAR_4)
{
 struct sata_rcar_priv *VAR_5 = VAR_4->host->private_data;
 struct ata_eh_info *VAR_6 = &VAR_4->link.eh_info;
 int VAR_7 = 0;
 u32 VAR_8;

 VAR_8 = FUNC_6(VAR_5->base + VAR_0);
 if (!VAR_8)
  return;

 FUNC_0("SError @host_intr: 0x%x\n", VAR_8);


 FUNC_1(VAR_6);

 if (VAR_8 & (VAR_2 | VAR_3)) {

  FUNC_2(VAR_6);
  FUNC_3(VAR_6, "%s", "hotplug");

  VAR_7 = VAR_8 & VAR_1 ? 0 : 1;
 }


 if (VAR_7)
  FUNC_5(VAR_4);
 else
  FUNC_4(VAR_4);
}
