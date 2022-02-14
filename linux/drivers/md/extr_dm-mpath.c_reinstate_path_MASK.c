
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {TYPE_4__* dev; } ;
struct TYPE_10__ {int work; } ;
struct pgpath {int is_active; TYPE_6__ path; TYPE_3__ activate_path; TYPE_2__* pg; } ;
struct multipath {TYPE_7__* ti; int lock; int trigger_event; int pg_init_in_progress; TYPE_2__* current_pg; scalar_t__ hw_handler_name; int * current_pgpath; int nr_valid_paths; } ;
struct TYPE_14__ {int table; } ;
struct TYPE_12__ {TYPE_1__* type; } ;
struct TYPE_11__ {int name; } ;
struct TYPE_9__ {TYPE_5__ ps; struct multipath* m; } ;
struct TYPE_8__ {int (* reinstate_path ) (TYPE_5__*,TYPE_6__*) ;} ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_7__*,int ,unsigned int) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (struct multipath*) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (TYPE_5__*,TYPE_6__*) ;

__attribute__((used)) static int FUNC_11(struct pgpath *VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0;
 unsigned long VAR_5;
 struct multipath *VAR_6 = VAR_2->pg->m;
 unsigned VAR_7;

 FUNC_8(&VAR_6->lock, VAR_5);

 if (VAR_2->is_active)
  goto out;

 FUNC_0("Reinstating path %s.", VAR_2->path.dev->name);

 VAR_3 = VAR_2->pg->ps.type->reinstate_path(&VAR_2->pg->ps, &VAR_2->path);
 if (VAR_3)
  goto out;

 VAR_2->is_active = 1;

 VAR_7 = FUNC_2(&VAR_6->nr_valid_paths);
 if (VAR_7 == 1) {
  VAR_6->current_pgpath = ((void*)0);
  VAR_4 = 1;
 } else if (VAR_6->hw_handler_name && (VAR_6->current_pg == VAR_2->pg)) {
  if (FUNC_6(VAR_1, &VAR_2->activate_path.work))
   FUNC_1(&VAR_6->pg_init_in_progress);
 }

 FUNC_3(VAR_0, VAR_6->ti,
         VAR_2->path.dev->name, VAR_7);

 FUNC_7(&VAR_6->trigger_event);

out:
 FUNC_9(&VAR_6->lock, VAR_5);
 if (VAR_4) {
  FUNC_4(VAR_6->ti->table);
  FUNC_5(VAR_6);
 }

 return VAR_3;
}
