
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ status_addr; } ;
struct ata_port {scalar_t__ private_data; TYPE_1__ ioaddr; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_0)
{
 (void)FUNC_0((unsigned long)VAR_0->ioaddr.status_addr);
 FUNC_1(0x7c, (unsigned long)VAR_0->private_data);
}
