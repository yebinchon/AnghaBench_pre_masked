
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_4__ {unsigned int arena_ind; int * astats; } ;
typedef TYPE_1__ ctl_arena_t ;
typedef int ctl_arena_stats_t ;
struct TYPE_5__ {TYPE_1__** arenas; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ,int,int ) ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ctl_arena_t *
FUNC_6(tsd_t *VAR_3, size_t VAR_4, bool VAR_5, bool VAR_6) {
 ctl_arena_t *VAR_7;

 FUNC_2(!VAR_5 || !VAR_6);

 VAR_7 = VAR_2->arenas[FUNC_1(VAR_4, VAR_5, 0)];
 if (VAR_6 && VAR_7 == ((void*)0)) {
  if (VAR_1) {
   struct container_s {
    ctl_arena_t ctl_arena;
    ctl_arena_stats_t astats;
   };
   struct container_s *VAR_8 =
       (struct container_s *)FUNC_4(FUNC_5(VAR_3),
       FUNC_3(), sizeof(struct container_s), VAR_0);
   if (VAR_8 == ((void*)0)) {
    return ((void*)0);
   }
   VAR_7 = &VAR_8->ctl_arena;
   VAR_7->astats = &VAR_8->astats;
  } else {
   VAR_7 = (ctl_arena_t *)FUNC_4(FUNC_5(VAR_3), FUNC_3(),
       sizeof(ctl_arena_t), VAR_0);
   if (VAR_7 == ((void*)0)) {
    return ((void*)0);
   }
  }
  VAR_7->arena_ind = (unsigned)VAR_4;
  VAR_2->arenas[FUNC_1(VAR_4, VAR_5, 0)] = VAR_7;
 }

 FUNC_2(VAR_7 == ((void*)0) || FUNC_0(VAR_7->arena_ind) == FUNC_0(VAR_4));
 return VAR_7;
}
