
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_12__ {int thr_uid; int vec; } ;
typedef TYPE_3__ prof_tdata_t ;
struct TYPE_13__ {TYPE_2__* tdata; TYPE_1__* gctx; } ;
typedef TYPE_4__ prof_tctx_t ;
typedef int prof_bt_t ;
struct TYPE_14__ {size_t usize; struct TYPE_14__* next; void* free_time_ns; void* alloc_time_ns; void* free_bt_ind; void* alloc_bt_ind; void* free_thr_ind; void* alloc_thr_ind; } ;
typedef TYPE_5__ prof_alloc_node_t ;
typedef int nstime_t ;
struct TYPE_11__ {char* thread_name; int thr_uid; int lock; } ;
struct TYPE_10__ {int bt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,size_t,int ,int,int *,int,int ,int) ;
 TYPE_5__* VAR_3 ;
 TYPE_5__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,void const*) ;
 int FUNC_10 (int *,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_11 (int *,int *) ;
 void* FUNC_12 (int *,int ,char const*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_3__* FUNC_13 (int *,int) ;
 int VAR_13 ;
 int VAR_14 ;
 char* FUNC_14 (int *) ;
 int FUNC_15 (size_t) ;
 int FUNC_16 (int *) ;

void
FUNC_17(tsd_t *VAR_15, const void *VAR_16, size_t VAR_17, prof_tctx_t *VAR_18) {
 FUNC_4(FUNC_16(VAR_15), VAR_18->tdata->lock);

 prof_tdata_t *VAR_19 = FUNC_13(VAR_15, 0);
 if (VAR_19 == ((void*)0)) {





  return;
 }

 FUNC_5(FUNC_16(VAR_15), &VAR_6);

 if (VAR_11 != VAR_12) {
  goto label_done;
 }

 if (!VAR_7) {
  bool VAR_20 = FUNC_2(VAR_15, &VAR_5, VAR_1,
    VAR_9, VAR_10);
  bool VAR_21 = FUNC_2(VAR_15, &VAR_8, VAR_1,
    VAR_13, VAR_14);
  if (VAR_20 || VAR_21) {
   goto label_done;
  }
  VAR_7 = 1;
 }

 nstime_t VAR_22 = FUNC_9(FUNC_16(VAR_15), VAR_16);
 nstime_t VAR_23 = VAR_0;
 FUNC_8(&VAR_23);

 size_t VAR_24 = sizeof(prof_alloc_node_t);
 prof_alloc_node_t *VAR_25 = (prof_alloc_node_t *)
     FUNC_3(FUNC_16(VAR_15), VAR_24, FUNC_15(VAR_24), 0, ((void*)0), 1,
     FUNC_0(VAR_2, 0, 1), 1);

 const char *VAR_26 = (VAR_18->tdata->thread_name == ((void*)0))?
            "" : VAR_18->tdata->thread_name;
 const char *VAR_27 = FUNC_14(VAR_15);

 prof_bt_t VAR_28;

 FUNC_1(&VAR_28, VAR_19->vec);
 FUNC_10(VAR_15, &VAR_28);
 prof_bt_t *VAR_29 = &VAR_28;


 prof_bt_t *VAR_30 = &VAR_18->gctx->bt;

 VAR_25->next = ((void*)0);
 VAR_25->alloc_thr_ind = FUNC_12(VAR_15, VAR_18->tdata->thr_uid,
          VAR_26);
 VAR_25->free_thr_ind = FUNC_12(VAR_15, VAR_19->thr_uid,
         VAR_27);
 VAR_25->alloc_bt_ind = FUNC_11(VAR_15, VAR_30);
 VAR_25->free_bt_ind = FUNC_11(VAR_15, VAR_29);
 VAR_25->alloc_time_ns = FUNC_7(&VAR_22);
 VAR_25->free_time_ns = FUNC_7(&VAR_23);
 VAR_25->usize = VAR_17;

 if (VAR_3 == ((void*)0)) {
  VAR_3 = VAR_25;
  VAR_4 = VAR_25;
 } else {
  VAR_4->next = VAR_25;
  VAR_4 = VAR_25;
 }

label_done:
 FUNC_6(FUNC_16(VAR_15), &VAR_6);
}
