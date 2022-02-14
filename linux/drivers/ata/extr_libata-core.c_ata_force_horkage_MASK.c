
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int horkage_on; int horkage_off; int name; } ;
struct ata_force_ent {int port; int device; TYPE_2__ param; } ;
struct ata_device {int devno; int horkage; TYPE_3__* link; } ;
struct TYPE_6__ {int pmp; TYPE_1__* ap; } ;
struct TYPE_4__ {int print_id; } ;


 int FUNC_0 (struct ata_device*,char*,int ) ;
 struct ata_force_ent* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(struct ata_device *VAR_2)
{
 int VAR_3 = VAR_2->link->pmp + VAR_2->devno;
 int VAR_4 = VAR_3;
 int VAR_5;


 if (FUNC_1(VAR_2->link))
  VAR_4 += 15;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  const struct ata_force_ent *VAR_6 = &VAR_0[VAR_5];

  if (VAR_6->port != -1 && VAR_6->port != VAR_2->link->ap->print_id)
   continue;

  if (VAR_6->device != -1 && VAR_6->device != VAR_3 &&
      VAR_6->device != VAR_4)
   continue;

  if (!(~VAR_2->horkage & VAR_6->param.horkage_on) &&
      !(VAR_2->horkage & VAR_6->param.horkage_off))
   continue;

  VAR_2->horkage |= VAR_6->param.horkage_on;
  VAR_2->horkage &= ~VAR_6->param.horkage_off;

  FUNC_0(VAR_2, "FORCE: horkage modified (%s)\n",
          VAR_6->param.name);
 }
}
