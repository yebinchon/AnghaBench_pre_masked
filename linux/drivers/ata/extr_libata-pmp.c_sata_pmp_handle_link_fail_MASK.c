
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_port {int lock; } ;
struct TYPE_3__ {scalar_t__ action; } ;
struct TYPE_4__ {TYPE_1__ i; } ;
struct ata_link {size_t pmp; int flags; TYPE_2__ eh_context; int device; struct ata_port* ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ata_link*,char*,int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct ata_link *VAR_2, int *VAR_3)
{
 struct ata_port *VAR_4 = VAR_2->ap;
 unsigned long VAR_5;

 if (VAR_3[VAR_2->pmp] && --VAR_3[VAR_2->pmp])
  return 1;


 if (!(VAR_2->flags & VAR_1)) {
  FUNC_1(VAR_2,
   "failed to recover link after %d tries, disabling\n",
   VAR_0);

  FUNC_2(VAR_4->lock, VAR_5);
  VAR_2->flags |= VAR_1;
  FUNC_3(VAR_4->lock, VAR_5);
 }

 FUNC_0(VAR_2->device);
 VAR_2->eh_context.i.action = 0;

 return 0;
}
