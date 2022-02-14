
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_link {int pmp; int hw_sata_spd_limit; int flags; TYPE_1__* ap; } ;
struct TYPE_4__ {int spd_limit; int lflags; int name; } ;
struct ata_force_ent {int port; int device; TYPE_2__ param; } ;
struct TYPE_3__ {int print_id; } ;


 struct ata_force_ent* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ata_link*) ;
 int FUNC_1 (struct ata_link*,char*,int,...) ;

__attribute__((used)) static void FUNC_2(struct ata_link *VAR_2)
{
 bool VAR_3 = 0;
 int VAR_4 = VAR_2->pmp;
 int VAR_5;

 if (FUNC_0(VAR_2))
  VAR_4 += 15;

 for (VAR_5 = VAR_1 - 1; VAR_5 >= 0; VAR_5--) {
  const struct ata_force_ent *VAR_6 = &VAR_0[VAR_5];

  if (VAR_6->port != -1 && VAR_6->port != VAR_2->ap->print_id)
   continue;

  if (VAR_6->device != -1 && VAR_6->device != VAR_4)
   continue;


  if (!VAR_3 && VAR_6->param.spd_limit) {
   VAR_2->hw_sata_spd_limit = (1 << VAR_6->param.spd_limit) - 1;
   FUNC_1(VAR_2, "FORCE: PHY spd limit set to %s\n",
     VAR_6->param.name);
   VAR_3 = 1;
  }


  if (VAR_6->param.lflags) {
   VAR_2->flags |= VAR_6->param.lflags;
   FUNC_1(VAR_2,
     "FORCE: link flag 0x%x forced -> 0x%x\n",
     VAR_6->param.lflags, VAR_2->flags);
  }
 }
}
