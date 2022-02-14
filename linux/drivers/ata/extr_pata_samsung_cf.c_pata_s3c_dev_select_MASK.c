
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int device_addr; } ;
struct ata_port {TYPE_1__ ioaddr; int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct ata_port*) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_2, unsigned int VAR_3)
{
 u8 VAR_4 = VAR_1;

 if (VAR_3 != 0)
  VAR_4 |= VAR_0;

 FUNC_0(VAR_2->host, VAR_4, VAR_2->ioaddr.device_addr);
 FUNC_1(VAR_2);
}
