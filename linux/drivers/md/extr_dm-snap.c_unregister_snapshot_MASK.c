
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct origin {int hash_list; int snapshots; } ;
struct dm_snapshot {int list; TYPE_1__* origin; } ;
struct TYPE_2__ {int bdev; } ;


 struct origin* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct origin*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct dm_snapshot *VAR_1)
{
 struct origin *VAR_2;

 FUNC_1(&VAR_0);
 VAR_2 = FUNC_0(VAR_1->origin->bdev);

 FUNC_3(&VAR_1->list);
 if (VAR_2 && FUNC_4(&VAR_2->snapshots)) {
  FUNC_3(&VAR_2->hash_list);
  FUNC_2(VAR_2);
 }

 FUNC_5(&VAR_0);
}
