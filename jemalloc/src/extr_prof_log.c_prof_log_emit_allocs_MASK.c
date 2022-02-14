
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_4__ {struct TYPE_4__* next; int usize; int free_time_ns; int alloc_time_ns; int free_bt_ind; int alloc_bt_ind; int free_thr_ind; int alloc_thr_ind; } ;
typedef TYPE_1__ prof_alloc_node_t ;
typedef int emitter_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ,TYPE_1__*,int *,int *,int,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(tsd_t *VAR_3, emitter_t *VAR_4) {
 FUNC_1(VAR_4, "allocations");
 prof_alloc_node_t *VAR_5 = VAR_2;
 prof_alloc_node_t *VAR_6;
 while (VAR_5 != ((void*)0)) {
  FUNC_3(VAR_4);

  FUNC_2(VAR_4, "alloc_thread", VAR_0,
      &VAR_5->alloc_thr_ind);

  FUNC_2(VAR_4, "free_thread", VAR_0,
      &VAR_5->free_thr_ind);

  FUNC_2(VAR_4, "alloc_trace", VAR_0,
      &VAR_5->alloc_bt_ind);

  FUNC_2(VAR_4, "free_trace", VAR_0,
      &VAR_5->free_bt_ind);

  FUNC_2(VAR_4, "alloc_timestamp",
      VAR_1, &VAR_5->alloc_time_ns);

  FUNC_2(VAR_4, "free_timestamp", VAR_1,
      &VAR_5->free_time_ns);

  FUNC_2(VAR_4, "usize", VAR_1,
      &VAR_5->usize);

  FUNC_4(VAR_4);

  VAR_6 = VAR_5;
  VAR_5 = VAR_5->next;
  FUNC_5(FUNC_6(VAR_3), VAR_6, ((void*)0), ((void*)0), 1,
      1);
 }
 FUNC_0(VAR_4);
}
