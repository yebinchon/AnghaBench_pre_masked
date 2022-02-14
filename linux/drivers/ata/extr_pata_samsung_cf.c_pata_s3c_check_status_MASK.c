
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int status_addr; } ;
struct ata_port {TYPE_1__ ioaddr; int host; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static u8 FUNC_1(struct ata_port *VAR_0)
{
 return FUNC_0(VAR_0->host, VAR_0->ioaddr.status_addr);
}
