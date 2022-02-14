
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nv_swncq_port_priv {scalar_t__ prd_dma; } ;
struct TYPE_3__ {unsigned int flags; } ;
struct ata_queued_cmd {int hw_tag; TYPE_1__ tf; } ;
struct TYPE_4__ {scalar_t__ bmdma_addr; } ;
struct ata_port {TYPE_2__ ioaddr; struct nv_swncq_port_priv* private_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct ata_port*) ;
 struct ata_queued_cmd* FUNC_2 (struct ata_port*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (struct ata_port*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct ata_port *VAR_6)
{
 struct ata_queued_cmd *VAR_7;
 unsigned int VAR_8;
 u8 VAR_9;
 u32 VAR_10;
 struct nv_swncq_port_priv *VAR_11 = VAR_6->private_data;

 FUNC_1(VAR_6);
 VAR_10 = FUNC_6(VAR_6);

 FUNC_0("dma setup tag 0x%x\n", VAR_10);
 VAR_7 = FUNC_2(VAR_6, VAR_10);

 if (FUNC_7(!VAR_7))
  return;

 VAR_8 = VAR_7->tf.flags & VAR_5;


 FUNC_4(VAR_11->prd_dma + VAR_4 * VAR_7->hw_tag,
    VAR_6->ioaddr.bmdma_addr + VAR_2);


 VAR_9 = FUNC_3(VAR_6->ioaddr.bmdma_addr + VAR_0);
 VAR_9 &= ~VAR_3;
 if (!VAR_8)
  VAR_9 |= VAR_3;

 FUNC_5(VAR_9 | VAR_1, VAR_6->ioaddr.bmdma_addr + VAR_0);
}
