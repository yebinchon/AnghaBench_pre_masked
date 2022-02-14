
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ata_ioports {int lbal_addr; int nsect_addr; } ;
struct ata_port {TYPE_1__* ops; struct ata_ioports ioaddr; } ;
struct TYPE_2__ {int (* sff_dev_select ) (struct ata_port*,unsigned int) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct ata_port*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_3(struct ata_port *VAR_0, unsigned int VAR_1)
{
 struct ata_ioports *VAR_2 = &VAR_0->ioaddr;
 u8 VAR_3, VAR_4;

 VAR_0->ops->sff_dev_select(VAR_0, VAR_1);

 FUNC_1(0x55, VAR_2->nsect_addr);
 FUNC_1(0xaa, VAR_2->lbal_addr);

 FUNC_1(0xaa, VAR_2->nsect_addr);
 FUNC_1(0x55, VAR_2->lbal_addr);

 FUNC_1(0x55, VAR_2->nsect_addr);
 FUNC_1(0xaa, VAR_2->lbal_addr);

 VAR_3 = FUNC_0(VAR_2->nsect_addr);
 VAR_4 = FUNC_0(VAR_2->lbal_addr);

 if ((VAR_3 == 0x55) && (VAR_4 == 0xaa))
  return 1;

 return 0;
}
