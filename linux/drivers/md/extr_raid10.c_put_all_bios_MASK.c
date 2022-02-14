
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r10conf {int copies; } ;
struct r10bio {scalar_t__ read_slot; TYPE_1__* devs; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {struct bio* repl_bio; struct bio* bio; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;

__attribute__((used)) static void FUNC_2(struct r10conf *VAR_0, struct r10bio *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->copies; VAR_2++) {
  struct bio **VAR_3 = & VAR_1->devs[VAR_2].bio;
  if (!FUNC_0(*VAR_3))
   FUNC_1(*VAR_3);
  *VAR_3 = ((void*)0);
  VAR_3 = &VAR_1->devs[VAR_2].repl_bio;
  if (VAR_1->read_slot < 0 && !FUNC_0(*VAR_3))
   FUNC_1(*VAR_3);
  *VAR_3 = ((void*)0);
 }
}
