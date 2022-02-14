
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int szind_t ;
struct TYPE_12__ {int bitmap; } ;
typedef TYPE_1__ slab_data_t ;
typedef int extent_t ;
typedef int extent_hooks_t ;
struct TYPE_13__ {int bitmap_info; int nregs; int slab_size; int reg_size; } ;
typedef TYPE_2__ bin_info_t ;
struct TYPE_14__ {int eset_muzzy; int eset_dirty; } ;
typedef TYPE_3__ arena_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int * FUNC_2 (int *,TYPE_3__*,int **,TYPE_2__ const*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int *,int ,unsigned int) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *,TYPE_3__*,int **,int *,int *,int ,int ,int ,int,int ,int*,int*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ,int ) ;

__attribute__((used)) static extent_t *
FUNC_13(tsdn_t *VAR_4, arena_t *VAR_5, szind_t VAR_6, unsigned VAR_7,
    const bin_info_t *VAR_8) {
 FUNC_12(FUNC_11(VAR_4),
     VAR_3, 0);

 extent_hooks_t *VAR_9 = VAR_0;
 szind_t VAR_10 = FUNC_10(VAR_8->reg_size);
 bool VAR_11 = 0;
 bool VAR_12 = 1;
 extent_t *VAR_13 = FUNC_9(VAR_4, VAR_5, &VAR_9,
     &VAR_5->eset_dirty, ((void*)0), VAR_8->slab_size, 0, VAR_2, 1,
     VAR_6, &VAR_11, &VAR_12);
 if (VAR_13 == ((void*)0) && FUNC_0(VAR_5)) {
  VAR_13 = FUNC_9(VAR_4, VAR_5, &VAR_9,
      &VAR_5->eset_muzzy, ((void*)0), VAR_8->slab_size, 0, VAR_2,
      1, VAR_6, &VAR_11, &VAR_12);
 }
 if (VAR_13 == ((void*)0)) {
  VAR_13 = FUNC_2(VAR_4, VAR_5, &VAR_9,
      VAR_8, VAR_10);
  if (VAR_13 == ((void*)0)) {
   return ((void*)0);
  }
 }
 FUNC_3(FUNC_8(VAR_13));


 slab_data_t *VAR_14 = FUNC_7(VAR_13);
 FUNC_5(VAR_13, VAR_8->nregs, VAR_7);
 FUNC_4(VAR_14->bitmap, &VAR_8->bitmap_info, 0);

 FUNC_1(VAR_5, FUNC_6(VAR_13) >> VAR_1);

 return VAR_13;
}
