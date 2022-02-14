
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int tsd_t ;
typedef int ctl_stats_t ;
struct TYPE_6__ {unsigned int narenas; int destroyed; } ;
typedef TYPE_1__ ctl_arenas_t ;
struct TYPE_7__ {int initialized; } ;
typedef TYPE_2__ ctl_arena_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int *,unsigned int,int,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int ,int,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int * VAR_7 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 unsigned int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;

__attribute__((used)) static bool
FUNC_10(tsd_t *VAR_8) {
 bool VAR_9;
 tsdn_t *VAR_10 = FUNC_9(VAR_8);

 FUNC_5(VAR_10, &VAR_6);
 if (!VAR_5) {
  ctl_arena_t *VAR_11, *VAR_12;
  unsigned VAR_13;





  if (VAR_4 == ((void*)0)) {
   VAR_4 = (ctl_arenas_t *)FUNC_2(VAR_10,
       FUNC_1(), sizeof(ctl_arenas_t), VAR_2);
   if (VAR_4 == ((void*)0)) {
    VAR_9 = 1;
    goto label_return;
   }
  }

  if (VAR_3 && VAR_7 == ((void*)0)) {
   VAR_7 = (ctl_stats_t *)FUNC_2(VAR_10, FUNC_1(),
       sizeof(ctl_stats_t), VAR_2);
   if (VAR_7 == ((void*)0)) {
    VAR_9 = 1;
    goto label_return;
   }
  }






  if ((VAR_11 = FUNC_0(VAR_8, VAR_0, 0,
      1)) == ((void*)0)) {
   VAR_9 = 1;
   goto label_return;
  }
  VAR_11->initialized = 1;

  if ((VAR_12 = FUNC_0(VAR_8, VAR_1,
      0, 1)) == ((void*)0)) {
   VAR_9 = 1;
   goto label_return;
  }
  FUNC_3(VAR_12);






  VAR_4->narenas = FUNC_7();
  for (VAR_13 = 0; VAR_13 < VAR_4->narenas; VAR_13++) {
   if (FUNC_0(VAR_8, VAR_13, 0, 1) == ((void*)0)) {
    VAR_9 = 1;
    goto label_return;
   }
  }

  FUNC_8(&VAR_4->destroyed);
  FUNC_4(VAR_10);

  VAR_5 = 1;
 }

 VAR_9 = 0;
label_return:
 FUNC_6(VAR_10, &VAR_6);
 return VAR_9;
}
