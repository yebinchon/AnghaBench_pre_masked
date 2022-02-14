
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int tsdn_t ;
typedef size_t szind_t ;
typedef int slab_data_t ;
typedef int extent_t ;
struct TYPE_11__ {int curregs; int ndalloc; } ;
struct TYPE_12__ {TYPE_1__ stats; int * slabcur; } ;
typedef TYPE_2__ bin_t ;
struct TYPE_13__ {unsigned int nregs; } ;
typedef TYPE_3__ bin_info_t ;
typedef int arena_t ;


 int FUNC_0 (int *,int *,int *,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*,int *) ;
 int FUNC_2 (int *,int *,int *,TYPE_2__*) ;
 int FUNC_3 (void*,TYPE_3__ const*) ;
 int FUNC_4 (int *,int *,TYPE_2__*) ;
 int FUNC_5 (int *,int *,void*) ;
 TYPE_3__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(tsdn_t *VAR_4, arena_t *VAR_5, bin_t *VAR_6,
    szind_t VAR_7, extent_t *VAR_8, void *VAR_9, bool VAR_10) {
 slab_data_t *VAR_11 = FUNC_7(VAR_8);
 const bin_info_t *VAR_12 = &VAR_0[VAR_7];

 if (!VAR_10 && VAR_1 && FUNC_8(VAR_3)) {
  FUNC_3(VAR_9, VAR_12);
 }

 FUNC_5(VAR_8, VAR_11, VAR_9);
 unsigned VAR_13 = FUNC_6(VAR_8);
 if (VAR_13 == VAR_12->nregs) {
  FUNC_4(VAR_5, VAR_8, VAR_6);
  FUNC_2(VAR_4, VAR_5, VAR_8, VAR_6);
 } else if (VAR_13 == 1 && VAR_8 != VAR_6->slabcur) {
  FUNC_1(VAR_5, VAR_6, VAR_8);
  FUNC_0(VAR_4, VAR_5, VAR_8, VAR_6);
 }

 if (VAR_2) {
  VAR_6->stats.ndalloc++;
  VAR_6->stats.curregs--;
 }
}
