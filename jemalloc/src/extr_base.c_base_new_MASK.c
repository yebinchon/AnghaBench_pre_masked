
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tsdn_t ;
typedef size_t szind_t ;
typedef int pszind_t ;
typedef int extent_hooks_t ;
struct TYPE_8__ {unsigned int ind; size_t extent_sn_next; int auto_thp_switched; int allocated; int resident; int mapped; int n_thp; int * avail; TYPE_2__* blocks; int pind_last; int mtx; int extent_hooks; } ;
typedef TYPE_1__ base_t ;
struct TYPE_9__ {int size; int extent; } ;
typedef TYPE_2__ base_block_t ;


 size_t FUNC_0 (int,size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int *,int ) ;
 TYPE_2__* FUNC_5 (int *,int *,int *,unsigned int,int *,size_t*,int,int ) ;
 scalar_t__ FUNC_6 (int *,size_t*,size_t,size_t) ;
 int FUNC_7 (TYPE_1__*,int *,size_t,TYPE_1__*,size_t) ;
 int FUNC_8 (int *,int *,unsigned int,TYPE_2__*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,char*,int ,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ VAR_9 ;

base_t *
FUNC_12(tsdn_t *VAR_10, unsigned VAR_11, extent_hooks_t *VAR_12) {
 pszind_t VAR_13 = 0;
 size_t VAR_14 = 0;
 base_block_t *VAR_15 = FUNC_5(VAR_10, ((void*)0), VAR_12, VAR_11,
     &VAR_13, &VAR_14, sizeof(base_t), VAR_3);
 if (VAR_15 == ((void*)0)) {
  return ((void*)0);
 }

 size_t VAR_16;
 size_t VAR_17 = VAR_1;
 size_t VAR_18 = FUNC_0(sizeof(base_t), VAR_17);
 base_t *VAR_19 = (base_t *)FUNC_6(&VAR_15->extent,
     &VAR_16, VAR_18, VAR_17);
 VAR_19->ind = VAR_11;
 FUNC_4(&VAR_19->extent_hooks, VAR_12, VAR_0);
 if (FUNC_10(&VAR_19->mtx, "base", VAR_5,
     VAR_7)) {
  FUNC_8(VAR_10, VAR_12, VAR_11, VAR_15, VAR_15->size);
  return ((void*)0);
 }
 VAR_19->pind_last = VAR_13;
 VAR_19->extent_sn_next = VAR_14;
 VAR_19->blocks = VAR_15;
 VAR_19->auto_thp_switched = 0;
 for (szind_t VAR_20 = 0; VAR_20 < VAR_4; VAR_20++) {
  FUNC_9(&VAR_19->avail[VAR_20]);
 }
 if (VAR_6) {
  VAR_19->allocated = sizeof(base_block_t);
  VAR_19->resident = FUNC_2(sizeof(base_block_t));
  VAR_19->mapped = VAR_15->size;
  VAR_19->n_thp = (VAR_9 == VAR_8) &&
      FUNC_11() ? FUNC_1(sizeof(base_block_t))
      >> VAR_2 : 0;
  FUNC_3(VAR_19->allocated <= VAR_19->resident);
  FUNC_3(VAR_19->resident <= VAR_19->mapped);
  FUNC_3(VAR_19->n_thp << VAR_2 <= VAR_19->mapped);
 }
 FUNC_7(VAR_19, &VAR_15->extent, VAR_16, VAR_19,
     VAR_18);

 return VAR_19;
}
