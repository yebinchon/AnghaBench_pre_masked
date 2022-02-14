
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dm_target {struct dm_snapshot* private; } ;
struct dm_snapshot {unsigned int discard_zeroes_cow; unsigned int discard_passdown_origin; TYPE_4__* store; TYPE_2__* cow; TYPE_1__* origin; int lock; int snapshot_overflowed; int merge_failed; int valid; } ;
typedef int status_type_t ;
typedef scalar_t__ sector_t ;
struct TYPE_9__ {TYPE_3__* type; } ;
struct TYPE_8__ {unsigned int (* status ) (TYPE_4__*,int,char*,int ) ;int (* usage ) (TYPE_4__*,scalar_t__*,scalar_t__*,scalar_t__*) ;} ;
struct TYPE_7__ {int name; } ;
struct TYPE_6__ {int name; } ;


 int FUNC_0 (char*,...) ;


 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 unsigned int FUNC_3 (TYPE_4__*,int,char*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct dm_target *VAR_0, status_type_t VAR_1,
       unsigned VAR_2, char *VAR_3, unsigned VAR_4)
{
 unsigned VAR_5 = 0;
 struct dm_snapshot *VAR_6 = VAR_0->private;
 unsigned VAR_7;

 switch (VAR_1) {
 case 129:

  FUNC_1(&VAR_6->lock);

  if (!VAR_6->valid)
   FUNC_0("Invalid");
  else if (VAR_6->merge_failed)
   FUNC_0("Merge failed");
  else if (VAR_6->snapshot_overflowed)
   FUNC_0("Overflow");
  else {
   if (VAR_6->store->type->usage) {
    sector_t VAR_8, VAR_9,
      VAR_10;
    VAR_6->store->type->usage(VAR_6->store,
        &VAR_8,
        &VAR_9,
        &VAR_10);
    FUNC_0("%llu/%llu %llu",
           (unsigned long long)VAR_9,
           (unsigned long long)VAR_8,
           (unsigned long long)VAR_10);
   }
   else
    FUNC_0("Unknown");
  }

  FUNC_4(&VAR_6->lock);

  break;

 case 128:





  FUNC_0("%s %s", VAR_6->origin->name, VAR_6->cow->name);
  VAR_5 += VAR_6->store->type->status(VAR_6->store, VAR_1, VAR_3 + VAR_5,
      VAR_4 - VAR_5);
  VAR_7 = VAR_6->discard_zeroes_cow + VAR_6->discard_passdown_origin;
  if (VAR_7) {
   FUNC_0(" %u", VAR_7);
   if (VAR_6->discard_zeroes_cow)
    FUNC_0(" discard_zeroes_cow");
   if (VAR_6->discard_passdown_origin)
    FUNC_0(" discard_passdown_origin");
  }
  break;
 }
}
