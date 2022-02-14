
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct via_isa_bridge {int flags; int udma_mask; } ;
struct ata_port {TYPE_1__* host; } ;
struct ata_device {int dma_mode; } ;
struct TYPE_2__ {struct via_isa_bridge* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_port*,struct ata_device*,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct ata_port *VAR_1, struct ata_device *VAR_2)
{
 const struct via_isa_bridge *VAR_3 = VAR_1->host->private_data;
 int VAR_4 = (VAR_3->flags & VAR_0) ? 0 : 1;

 FUNC_0(VAR_1, VAR_2, VAR_2->dma_mode, VAR_4, VAR_3->udma_mask);
}
