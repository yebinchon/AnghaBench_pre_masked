
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_taskfile {int command; } ;
struct TYPE_2__ {int command_addr; } ;
struct ata_port {TYPE_1__ ioaddr; int print_id; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_0,
      const struct ata_taskfile *VAR_1)
{
 FUNC_0("ata%u: cmd 0x%X\n", VAR_0->print_id, VAR_1->command);

 FUNC_1(VAR_1->command, VAR_0->ioaddr.command_addr);
 FUNC_2(400);
}
