
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ata_link {TYPE_2__* ap; } ;
struct TYPE_3__ {scalar_t__ scr_addr; } ;
struct TYPE_4__ {TYPE_1__ ioaddr; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct ata_link *VAR_2, unsigned int VAR_3, u32 *VAR_4)
{
 if (VAR_3 > VAR_1)
  return -VAR_0;

 *VAR_4 = FUNC_0(VAR_2->ap->ioaddr.scr_addr + (VAR_3 * 4));
 return 0;
}
