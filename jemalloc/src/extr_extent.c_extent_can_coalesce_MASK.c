
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int extent_t ;
struct TYPE_3__ {scalar_t__ state; } ;
typedef TYPE_1__ eset_t ;
typedef int arena_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (int const*) ;

__attribute__((used)) static bool
FUNC_5(arena_t *VAR_1, eset_t *VAR_2, const extent_t *VAR_3,
    const extent_t *VAR_4) {
 FUNC_1(FUNC_2(VAR_3) == FUNC_0(VAR_1));
 if (FUNC_2(VAR_4) != FUNC_0(VAR_1)) {
  return 0;
 }

 FUNC_1(FUNC_4(VAR_3) == VAR_0);
 if (FUNC_4(VAR_4) != VAR_2->state) {
  return 0;
 }

 if (FUNC_3(VAR_3) != FUNC_3(VAR_4)) {
  return 0;
 }

 return 1;
}
