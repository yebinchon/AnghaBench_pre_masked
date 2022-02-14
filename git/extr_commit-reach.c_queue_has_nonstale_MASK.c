
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct prio_queue {int nr; TYPE_1__* array; } ;
struct TYPE_4__ {int flags; } ;
struct commit {TYPE_2__ object; } ;
struct TYPE_3__ {struct commit* data; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct prio_queue *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1->nr; VAR_2++) {
  struct commit *VAR_3 = VAR_1->array[VAR_2].data;
  if (!(VAR_3->object.flags & VAR_0))
   return 1;
 }
 return 0;
}
