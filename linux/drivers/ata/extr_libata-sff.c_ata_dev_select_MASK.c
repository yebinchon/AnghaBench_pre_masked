
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* device; } ;
struct ata_port {TYPE_3__ link; TYPE_1__* ops; } ;
struct TYPE_5__ {scalar_t__ class; } ;
struct TYPE_4__ {int (* sff_dev_select ) (struct ata_port*,unsigned int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ata_port*) ;
 int FUNC_1 (struct ata_port*,int) ;
 int FUNC_2 (struct ata_port*,char*,unsigned int,unsigned int) ;
 int FUNC_3 (struct ata_port*) ;
 int FUNC_4 (struct ata_port*,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct ata_port *VAR_1, unsigned int VAR_2,
      unsigned int VAR_3, unsigned int VAR_4)
{
 if (FUNC_0(VAR_1))
  FUNC_2(VAR_1, "ata_dev_select: ENTER, device %u, wait %u\n",
         VAR_2, VAR_3);

 if (VAR_3)
  FUNC_3(VAR_1);

 VAR_1->ops->sff_dev_select(VAR_1, VAR_2);

 if (VAR_3) {
  if (VAR_4 && VAR_1->link.device[VAR_2].class == VAR_0)
   FUNC_1(VAR_1, 150);
  FUNC_3(VAR_1);
 }
}
