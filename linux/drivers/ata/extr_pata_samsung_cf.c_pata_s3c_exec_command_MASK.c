
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_taskfile {int command; } ;
struct TYPE_2__ {int command_addr; } ;
struct ata_port {TYPE_1__ ioaddr; int host; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct ata_port*) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_0,
    const struct ata_taskfile *VAR_1)
{
 FUNC_0(VAR_0->host, VAR_1->command, VAR_0->ioaddr.command_addr);
 FUNC_1(VAR_0);
}
