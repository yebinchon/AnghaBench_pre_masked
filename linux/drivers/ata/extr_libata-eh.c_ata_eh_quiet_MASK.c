
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_queued_cmd {int flags; TYPE_2__* scsicmd; } ;
struct TYPE_4__ {TYPE_1__* request; } ;
struct TYPE_3__ {int rq_flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct ata_queued_cmd *VAR_2)
{
 if (VAR_2->scsicmd &&
     VAR_2->scsicmd->request->rq_flags & VAR_1)
  VAR_2->flags |= VAR_0;
 return VAR_2->flags & VAR_0;
}
