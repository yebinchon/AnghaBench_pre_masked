
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_queued_cmd {int tf; TYPE_2__* ap; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* sff_exec_command ) (TYPE_2__*,int *) ;} ;


 int FUNC_0 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_1(struct ata_queued_cmd *VAR_0)
{
 VAR_0->ap->ops->sff_exec_command(VAR_0->ap, &VAR_0->tf);
}
