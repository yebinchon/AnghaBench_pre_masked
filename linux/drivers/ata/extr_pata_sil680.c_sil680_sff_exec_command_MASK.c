
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_taskfile {int command; } ;
struct TYPE_2__ {scalar_t__ bmdma_addr; int command_addr; } ;
struct ata_port {TYPE_1__ ioaddr; int print_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_1,
        const struct ata_taskfile *VAR_2)
{
 FUNC_0("ata%u: cmd 0x%X\n", VAR_1->print_id, VAR_2->command);
 FUNC_2(VAR_2->command, VAR_1->ioaddr.command_addr);
 FUNC_1(VAR_1->ioaddr.bmdma_addr + VAR_0);
}
