
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bmdma_addr; } ;
struct ata_port {int port_no; TYPE_1__ ioaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ata_port *VAR_3)
{

 switch(VAR_3->port_no)
 {
 case 0:
  if (FUNC_1(VAR_3->ioaddr.bmdma_addr + 1) & 1)
   return VAR_0;
  return VAR_1;
 case 1:
  return VAR_2;
 }

 FUNC_0();
 return 0;
}
