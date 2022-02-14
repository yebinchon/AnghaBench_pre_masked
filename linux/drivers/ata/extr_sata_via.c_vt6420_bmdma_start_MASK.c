
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ command; } ;
struct ata_queued_cmd {TYPE_2__* scsicmd; TYPE_1__ tf; struct ata_port* ap; } ;
struct ata_port {int dummy; } ;
struct TYPE_4__ {scalar_t__ sc_data_direction; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ata_queued_cmd*) ;
 int FUNC_1 (struct ata_port*) ;

__attribute__((used)) static void FUNC_2(struct ata_queued_cmd *VAR_2)
{
 struct ata_port *VAR_3 = VAR_2->ap;
 if ((VAR_2->tf.command == VAR_0) &&
     (VAR_2->scsicmd->sc_data_direction == VAR_1)) {

  FUNC_1(VAR_3);
 }
 FUNC_0(VAR_2);
}
