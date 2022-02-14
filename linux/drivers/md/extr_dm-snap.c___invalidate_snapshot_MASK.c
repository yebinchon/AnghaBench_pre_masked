
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dm_snapshot {TYPE_1__* ti; scalar_t__ valid; TYPE_3__* store; } ;
struct TYPE_6__ {TYPE_2__* type; } ;
struct TYPE_5__ {int (* drop_snapshot ) (TYPE_3__*) ;} ;
struct TYPE_4__ {int table; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(struct dm_snapshot *VAR_2, int VAR_3)
{
 if (!VAR_2->valid)
  return;

 if (VAR_3 == -VAR_0)
  FUNC_0("Invalidating snapshot: Error reading/writing.");
 else if (VAR_3 == -VAR_1)
  FUNC_0("Invalidating snapshot: Unable to allocate exception.");

 if (VAR_2->store->type->drop_snapshot)
  VAR_2->store->type->drop_snapshot(VAR_2->store);

 VAR_2->valid = 0;

 FUNC_1(VAR_2->ti->table);
}
