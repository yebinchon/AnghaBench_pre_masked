
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {int print_id; scalar_t__ cbl; } ;
struct TYPE_2__ {scalar_t__ cbl; int name; } ;
struct ata_force_ent {int port; TYPE_1__ param; } ;


 scalar_t__ VAR_0 ;
 struct ata_force_ent* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ata_port*,char*,int ) ;

void FUNC_1(struct ata_port *VAR_3)
{
 int VAR_4;

 for (VAR_4 = VAR_2 - 1; VAR_4 >= 0; VAR_4--) {
  const struct ata_force_ent *VAR_5 = &VAR_1[VAR_4];

  if (VAR_5->port != -1 && VAR_5->port != VAR_3->print_id)
   continue;

  if (VAR_5->param.cbl == VAR_0)
   continue;

  VAR_3->cbl = VAR_5->param.cbl;
  FUNC_0(VAR_3, "FORCE: cable set to %s\n", VAR_5->param.name);
  return;
 }
}
