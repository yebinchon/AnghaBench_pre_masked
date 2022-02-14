
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ata_taskfile {int flags; } ;
struct ata_queued_cmd {struct ata_taskfile tf; struct ata_port* ap; } ;
struct ata_port {TYPE_1__* ops; } ;
struct arasan_cf_dev {int work; scalar_t__ vbase; struct ata_queued_cmd* qc; } ;
struct TYPE_2__ {int (* sff_exec_command ) (struct ata_port*,struct ata_taskfile*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ata_port*,struct ata_taskfile*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct arasan_cf_dev *VAR_5)
{
 struct ata_queued_cmd *VAR_6 = VAR_5->qc;
 struct ata_port *VAR_7 = VAR_6->ap;
 struct ata_taskfile *VAR_8 = &VAR_6->tf;
 u32 VAR_9 = FUNC_1(VAR_5->vbase + VAR_1) & ~VAR_2;
 u32 VAR_10 = VAR_8->flags & VAR_0;

 VAR_9 |= VAR_10 ? VAR_4 : VAR_3;
 FUNC_3(VAR_9, VAR_5->vbase + VAR_1);

 VAR_7->ops->sff_exec_command(VAR_7, VAR_8);
 FUNC_0(&VAR_5->work);
}
