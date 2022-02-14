
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int hooks_mib ;
struct TYPE_7__ {struct TYPE_7__* merge; struct TYPE_7__* split; struct TYPE_7__* purge_forced; struct TYPE_7__* purge_lazy; struct TYPE_7__* decommit; struct TYPE_7__* commit; struct TYPE_7__* dalloc; struct TYPE_7__* alloc; } ;
typedef TYPE_1__ extent_hooks_t ;
struct TYPE_8__ {struct TYPE_8__* merge; struct TYPE_8__* split; struct TYPE_8__* purge_forced; struct TYPE_8__* purge_lazy; struct TYPE_8__* decommit; struct TYPE_8__* commit; struct TYPE_8__* dalloc; struct TYPE_8__* alloc; } ;


 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*,char*) ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 int FUNC_3 () ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 int FUNC_5 (char*,void*,size_t*,int *,int ) ;
 int FUNC_6 (size_t*,size_t,void*,size_t*,void*,size_t) ;
 int FUNC_7 (char*,size_t*,size_t*) ;
 int FUNC_8 (unsigned int) ;

__attribute__((used)) static void
FUNC_9(void) {
 unsigned VAR_10;
 size_t VAR_11, VAR_12, VAR_13;
 size_t VAR_14[3];
 size_t VAR_15;
 extent_hooks_t *VAR_16, *VAR_17;

 FUNC_4();

 VAR_13 = sizeof(unsigned);
 FUNC_0(FUNC_5("arenas.create", (void *)&VAR_10, &VAR_13, ((void*)0), 0),
     0, "Unexpected mallctl() failure");


 VAR_15 = sizeof(VAR_14)/sizeof(size_t);
 FUNC_0(FUNC_7("arena.0.extent_hooks", VAR_14,
     &VAR_15), 0, "Unexpected mallctlnametomib() failure");
 VAR_14[1] = (size_t)VAR_10;
 VAR_11 = sizeof(extent_hooks_t *);
 VAR_16 = &VAR_9;
 VAR_12 = sizeof(extent_hooks_t *);
 FUNC_0(FUNC_6(VAR_14, VAR_15, (void *)&VAR_17,
     &VAR_11, (void *)&VAR_16, VAR_12), 0,
     "Unexpected extent_hooks error");
 FUNC_2(VAR_17->alloc, VAR_1,
     "Unexpected extent_hooks error");
 FUNC_2(VAR_17->dalloc, VAR_3,
     "Unexpected extent_hooks error");
 FUNC_2(VAR_17->commit, VAR_2,
     "Unexpected extent_hooks error");
 FUNC_2(VAR_17->decommit, VAR_4,
     "Unexpected extent_hooks error");
 FUNC_2(VAR_17->purge_lazy, VAR_7,
     "Unexpected extent_hooks error");
 FUNC_2(VAR_17->purge_forced, VAR_6,
     "Unexpected extent_hooks error");
 FUNC_2(VAR_17->split, VAR_8,
     "Unexpected extent_hooks error");
 FUNC_2(VAR_17->merge, VAR_5,
     "Unexpected extent_hooks error");

 if (!FUNC_3()) {
  FUNC_8(VAR_10);
 }


 FUNC_0(FUNC_6(VAR_14, VAR_15, ((void*)0), ((void*)0),
     (void *)&VAR_17, VAR_12), 0, "Unexpected extent_hooks error");
 FUNC_0(FUNC_6(VAR_14, VAR_15, (void *)&VAR_17,
     &VAR_11, ((void*)0), 0), 0, "Unexpected extent_hooks error");
 FUNC_1(VAR_17, VAR_0, "Unexpected extent_hooks error");
 FUNC_1(VAR_17->alloc, VAR_0->alloc,
     "Unexpected extent_hooks error");
 FUNC_1(VAR_17->dalloc, VAR_0->dalloc,
     "Unexpected extent_hooks error");
 FUNC_1(VAR_17->commit, VAR_0->commit,
     "Unexpected extent_hooks error");
 FUNC_1(VAR_17->decommit, VAR_0->decommit,
     "Unexpected extent_hooks error");
 FUNC_1(VAR_17->purge_lazy, VAR_0->purge_lazy,
     "Unexpected extent_hooks error");
 FUNC_1(VAR_17->purge_forced, VAR_0->purge_forced,
     "Unexpected extent_hooks error");
 FUNC_1(VAR_17->split, VAR_0->split,
     "Unexpected extent_hooks error");
 FUNC_1(VAR_17->merge, VAR_0->merge,
     "Unexpected extent_hooks error");
}
