
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct bulk_checkin_state {int nr_written; TYPE_1__** written; } ;
struct TYPE_2__ {int oid; } ;


 scalar_t__ FUNC_0 (struct object_id*) ;
 scalar_t__ FUNC_1 (int *,struct object_id*) ;

__attribute__((used)) static int FUNC_2(struct bulk_checkin_state *VAR_0, struct object_id *VAR_1)
{
 int VAR_2;


 if (FUNC_0(VAR_1))
  return 1;


 for (VAR_2 = 0; VAR_2 < VAR_0->nr_written; VAR_2++)
  if (FUNC_1(&VAR_0->written[VAR_2]->oid, VAR_1))
   return 1;


 return 0;
}
