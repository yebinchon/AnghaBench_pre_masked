
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_taskfile {int command; int protocol; int flags; } ;
struct ata_queued_cmd {int flags; TYPE_1__* dev; struct ata_taskfile tf; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static unsigned int FUNC_0(struct ata_queued_cmd *VAR_6)
{
 struct ata_taskfile *VAR_7 = &VAR_6->tf;

 VAR_7->flags |= VAR_5;
 VAR_7->protocol = VAR_3;

 if (VAR_6->dev->flags & VAR_2)
  VAR_7->command = VAR_1;
 else
  VAR_7->command = VAR_0;


 VAR_6->flags |= VAR_4;

 return 0;
}
