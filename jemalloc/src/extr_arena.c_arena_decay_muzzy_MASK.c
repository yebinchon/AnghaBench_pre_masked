
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_5__ {int eset_muzzy; int decay_muzzy; } ;
typedef TYPE_1__ arena_t ;


 int FUNC_0 (int *,TYPE_1__*,int *,int *,int,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static bool
FUNC_3(tsdn_t *VAR_0, arena_t *VAR_1, bool VAR_2,
    bool VAR_3) {
 if (FUNC_2(&VAR_1->eset_muzzy) == 0 &&
     FUNC_1(VAR_1) <= 0) {
  return 0;
 }
 return FUNC_0(VAR_0, VAR_1, &VAR_1->decay_muzzy,
     &VAR_1->eset_muzzy, VAR_2, VAR_3);
}
