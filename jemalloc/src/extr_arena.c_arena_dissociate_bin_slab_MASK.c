
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t szind_t ;
typedef int extent_t ;
struct TYPE_7__ {int * slabcur; } ;
typedef TYPE_1__ bin_t ;
struct TYPE_8__ {int nregs; } ;
typedef TYPE_2__ bin_info_t ;
typedef int arena_t ;


 int FUNC_0 (int *,TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 TYPE_2__* VAR_0 ;
 size_t FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(arena_t *VAR_1, extent_t *VAR_2, bin_t *VAR_3) {

 if (VAR_2 == VAR_3->slabcur) {
  VAR_3->slabcur = ((void*)0);
 } else {
  szind_t VAR_4 = FUNC_2(VAR_2);
  const bin_info_t *VAR_5 = &VAR_0[VAR_4];






  if (VAR_5->nregs == 1) {
   FUNC_0(VAR_1, VAR_3, VAR_2);
  } else {
   FUNC_1(VAR_3, VAR_2);
  }
 }
}
