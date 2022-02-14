
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shallow_info {int nr_theirs; int* theirs; TYPE_1__* shallow; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {struct object_id* oid; } ;


 scalar_t__ FUNC_0 (struct object_id*) ;
 int FUNC_1 (int *,char*) ;
 int VAR_0 ;

void FUNC_2(struct shallow_info *VAR_1)
{
 struct object_id *VAR_2 = VAR_1->shallow->oid;
 int VAR_3, VAR_4;
 FUNC_1(&VAR_0, "shallow: remove_nonexistent_theirs_shallow\n");
 for (VAR_3 = VAR_4 = 0; VAR_3 < VAR_1->nr_theirs; VAR_3++) {
  if (VAR_3 != VAR_4)
   VAR_1->theirs[VAR_4] = VAR_1->theirs[VAR_3];
  if (FUNC_0(VAR_2 + VAR_1->theirs[VAR_3]))
   VAR_4++;
 }
 VAR_1->nr_theirs = VAR_4;
}
