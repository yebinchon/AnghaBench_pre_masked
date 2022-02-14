
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int protocol; } ;
struct ata_queued_cmd {TYPE_2__ tf; TYPE_1__* dev; } ;
struct ata_link {int sactive; int active_tag; } ;
struct TYPE_3__ {struct ata_link* link; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct ata_queued_cmd *VAR_1)
{
 struct ata_link *VAR_2 = VAR_1->dev->link;

 if (FUNC_0(VAR_1->tf.protocol)) {
  if (!FUNC_1(VAR_2->active_tag))
   return 0;
 } else {
  if (!FUNC_1(VAR_2->active_tag) && !VAR_2->sactive)
   return 0;
 }

 return VAR_0;
}
