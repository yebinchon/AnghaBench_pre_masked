
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union sil24_cmd_block {int dummy; } sil24_cmd_block ;
struct sil24_port_priv {int cmd_block_dma; union sil24_cmd_block* cmd_block; } ;
struct device {int dummy; } ;
struct ata_port {struct sil24_port_priv* private_data; TYPE_1__* host; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ata_port*,int ,int,char*) ;
 struct sil24_port_priv* FUNC_1 (struct device*,int,int ) ;
 union sil24_cmd_block* FUNC_2 (struct device*,size_t,int *,int ) ;
 int FUNC_3 (struct ata_port*) ;

__attribute__((used)) static int FUNC_4(struct ata_port *VAR_5)
{
 struct device *VAR_6 = VAR_5->host->dev;
 struct sil24_port_priv *VAR_7;
 union sil24_cmd_block *VAR_8;
 size_t VAR_9 = sizeof(*VAR_8) * VAR_3;
 dma_addr_t VAR_10;

 VAR_7 = FUNC_1(VAR_6, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_6, VAR_9, &VAR_10, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_7->cmd_block = VAR_8;
 VAR_7->cmd_block_dma = VAR_10;

 VAR_5->private_data = VAR_7;

 FUNC_0(VAR_5, VAR_2, -1, "host");
 FUNC_0(VAR_5, VAR_4, FUNC_3(VAR_5), "port");

 return 0;
}
