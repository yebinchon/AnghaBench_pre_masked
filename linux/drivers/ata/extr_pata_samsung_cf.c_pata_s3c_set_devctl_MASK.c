
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int ctl_addr; } ;
struct ata_port {TYPE_1__ ioaddr; int host; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ata_port *VAR_0, u8 VAR_1)
{
 FUNC_0(VAR_0->host, VAR_1, VAR_0->ioaddr.ctl_addr);
}
