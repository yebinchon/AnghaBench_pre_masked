
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srp_target_port {scalar_t__ target_can_queue; } ;
struct TYPE_2__ {int parent; } ;
struct scsi_target {scalar_t__ can_queue; TYPE_1__ dev; } ;
struct Scsi_Host {int dummy; } ;


 struct Scsi_Host* FUNC_0 (int ) ;
 struct srp_target_port* FUNC_1 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_2(struct scsi_target *VAR_0)
{
 struct Scsi_Host *VAR_1 = FUNC_0(VAR_0->dev.parent);
 struct srp_target_port *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->target_can_queue)
  VAR_0->can_queue = VAR_2->target_can_queue;
 return 0;
}
