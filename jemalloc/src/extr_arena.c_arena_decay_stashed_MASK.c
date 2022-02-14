
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int ssize_t ;
typedef int extent_t ;
typedef int extent_list_t ;
typedef int extent_hooks_t ;
typedef int eset_t ;
struct TYPE_18__ {int mapped; } ;
struct TYPE_16__ {TYPE_7__ stats; int eset_muzzy; } ;
typedef TYPE_2__ arena_t ;
struct TYPE_17__ {TYPE_1__* stats; } ;
typedef TYPE_3__ arena_decay_t ;
struct TYPE_15__ {int purged; int nmadvise; int npurge; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_7__*,int *,size_t) ;
 int FUNC_3 (int *,TYPE_7__*) ;
 int FUNC_4 (int *,TYPE_7__*,int *,size_t) ;
 int FUNC_5 (int *,TYPE_7__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_2__*,int **,int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,TYPE_2__*,int **,int *,int ,size_t) ;
 size_t FUNC_11 (int *) ;




 int FUNC_12 (int *,TYPE_2__*,int **,int *,int *) ;
 int FUNC_13 () ;

__attribute__((used)) static size_t
FUNC_14(tsdn_t *VAR_3, arena_t *VAR_4,
    extent_hooks_t **VAR_5, arena_decay_t *VAR_6, eset_t *VAR_7,
    bool VAR_8, extent_list_t *VAR_9, bool VAR_10) {
 size_t VAR_11, VAR_12;
 size_t VAR_13;

 if (VAR_2) {
  VAR_11 = 0;
  VAR_12 = 0;
 }
 VAR_13 = 0;

 ssize_t VAR_14 = FUNC_1(VAR_4);
 for (extent_t *VAR_15 = FUNC_8(VAR_9); VAR_15 !=
     ((void*)0); VAR_15 = FUNC_8(VAR_9)) {
  if (VAR_2) {
   VAR_11++;
  }
  size_t VAR_16 = FUNC_11(VAR_15) >> VAR_1;
  VAR_13 += VAR_16;
  FUNC_9(VAR_9, VAR_15);
  switch (FUNC_6(VAR_7)) {
  case 131:
   FUNC_13();
  case 130:
   if (!VAR_8 && VAR_14 != 0 &&
       !FUNC_10(VAR_3, VAR_4,
       VAR_5, VAR_15, 0,
       FUNC_11(VAR_15))) {
    FUNC_12(VAR_3, VAR_4, VAR_5,
        &VAR_4->eset_muzzy, VAR_15);
    FUNC_0(VAR_3,
        VAR_4, VAR_10);
    break;
   }
   VAR_0;
  case 129:
   FUNC_7(VAR_3, VAR_4, VAR_5,
       VAR_15);
   if (VAR_2) {
    VAR_12 += VAR_16;
   }
   break;
  case 128:
  default:
   FUNC_13();
  }
 }

 if (VAR_2) {
  FUNC_3(VAR_3, &VAR_4->stats);
  FUNC_2(VAR_3, &VAR_4->stats, &VAR_6->stats->npurge,
      1);
  FUNC_2(VAR_3, &VAR_4->stats,
      &VAR_6->stats->nmadvise, VAR_11);
  FUNC_2(VAR_3, &VAR_4->stats, &VAR_6->stats->purged,
      VAR_13);
  FUNC_4(VAR_3, &VAR_4->stats, &VAR_4->stats.mapped,
      VAR_12 << VAR_1);
  FUNC_5(VAR_3, &VAR_4->stats);
 }

 return VAR_13;
}
