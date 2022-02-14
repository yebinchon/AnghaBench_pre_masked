
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_head {struct ppl_io_unit* ppl_io; } ;
struct ppl_io_unit {TYPE_1__* log; int pending_stripes; } ;
struct TYPE_2__ {scalar_t__ disk_flush_bitmap; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct ppl_io_unit*) ;
 int FUNC_2 (struct ppl_io_unit*) ;

void FUNC_3(struct stripe_head *VAR_0)
{
 struct ppl_io_unit *VAR_1;

 VAR_1 = VAR_0->ppl_io;
 VAR_0->ppl_io = ((void*)0);

 if (VAR_1 && FUNC_0(&VAR_1->pending_stripes)) {
  if (VAR_1->log->disk_flush_bitmap)
   FUNC_1(VAR_1);
  else
   FUNC_2(VAR_1);
 }
}
