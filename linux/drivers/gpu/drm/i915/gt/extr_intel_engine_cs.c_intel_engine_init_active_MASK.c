
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dep_map; } ;
struct TYPE_4__ {TYPE_2__ lock; int requests; } ;
struct intel_engine_cs {TYPE_1__ active; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,unsigned int) ;
 int FUNC_6 (TYPE_2__*) ;

void
FUNC_7(struct intel_engine_cs *VAR_0, unsigned int VAR_1)
{
 FUNC_0(&VAR_0->active.requests);

 FUNC_6(&VAR_0->active.lock);
 FUNC_5(&VAR_0->active.lock, VAR_1);
}
