
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int extent_t ;
typedef int extent_hooks_t ;
typedef int eset_t ;
struct TYPE_7__ {int abandoned_vm; } ;
struct TYPE_8__ {TYPE_1__ stats; } ;
typedef TYPE_2__ arena_t ;


 int FUNC_0 (int *,size_t) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__*,int *) ;
 int FUNC_3 (int *,TYPE_2__*,int **,int *,int ,size_t,int) ;
 scalar_t__ FUNC_4 (int *,TYPE_2__*,int **,int *,int ,size_t,int) ;
 size_t FUNC_5 (int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_6(tsdn_t *VAR_2, arena_t *VAR_3, extent_hooks_t **VAR_4,
    eset_t *VAR_5, extent_t *VAR_6, bool VAR_7) {
 size_t VAR_8 = FUNC_5(VAR_6);
 if (VAR_0) {
  FUNC_0(&VAR_3->stats.abandoned_vm, VAR_8);
 }




 if (FUNC_1(VAR_5) == VAR_1) {
  if (FUNC_4(VAR_2, VAR_3, VAR_4,
      VAR_6, 0, VAR_8, VAR_7)) {
   FUNC_3(VAR_2, VAR_3, VAR_4,
       VAR_6, 0, FUNC_5(VAR_6),
       VAR_7);
  }
 }
 FUNC_2(VAR_2, VAR_3, VAR_6);
}
