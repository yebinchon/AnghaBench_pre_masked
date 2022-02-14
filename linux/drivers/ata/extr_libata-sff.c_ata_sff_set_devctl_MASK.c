
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int ctl_addr; } ;
struct ata_port {TYPE_2__ ioaddr; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* sff_set_devctl ) (struct ata_port*,int ) ;} ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ata_port*,int ) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_0, u8 VAR_1)
{
 if (VAR_0->ops->sff_set_devctl)
  VAR_0->ops->sff_set_devctl(VAR_0, VAR_1);
 else
  FUNC_0(VAR_1, VAR_0->ioaddr.ctl_addr);
}
