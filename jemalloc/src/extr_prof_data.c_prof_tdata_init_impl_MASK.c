
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int tsd_t ;
struct TYPE_5__ {char* thread_name; int attached; int expired; int enq; int enq_idump; int enq_gdump; int dumping; int active; int bt2tctx; scalar_t__ tctx_uid_next; void* thr_discrim; void* thr_uid; int lock; } ;
typedef TYPE_1__ prof_tdata_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int *,int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ,int,int ,int,int *,int,int ,int) ;
 int FUNC_5 (int ,TYPE_1__*,int *,int *,int,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *,TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

prof_tdata_t *
FUNC_14(tsd_t *VAR_7, uint64_t VAR_8, uint64_t VAR_9,
    char *VAR_10, bool VAR_11, bool VAR_12) {
 FUNC_1(FUNC_12(VAR_7) == 0);

 prof_tdata_t *VAR_13;

 FUNC_2(VAR_2);


 VAR_13 = (prof_tdata_t *)FUNC_4(FUNC_13(VAR_7), sizeof(prof_tdata_t),
     FUNC_10(sizeof(prof_tdata_t)), 0, ((void*)0), 1,
     FUNC_0(VAR_1, 0, 1), 1);
 if (VAR_13 == ((void*)0)) {
  return ((void*)0);
 }

 VAR_13->lock = FUNC_9(VAR_8);
 VAR_13->thr_uid = VAR_8;
 VAR_13->thr_discrim = VAR_9;
 VAR_13->thread_name = VAR_10;
 VAR_13->attached = 1;
 VAR_13->expired = 0;
 VAR_13->tctx_uid_next = 0;

 if (FUNC_3(VAR_7, &VAR_13->bt2tctx, VAR_0, VAR_3,
     VAR_4)) {
  FUNC_5(FUNC_13(VAR_7), VAR_13, ((void*)0), ((void*)0), 1, 1);
  return ((void*)0);
 }

 if (VAR_12) {
  FUNC_8(VAR_7);
 }

 VAR_13->enq = 0;
 VAR_13->enq_idump = 0;
 VAR_13->enq_gdump = 0;

 VAR_13->dumping = 0;
 VAR_13->active = VAR_11;

 FUNC_6(FUNC_13(VAR_7), &VAR_6);
 FUNC_11(&VAR_5, VAR_13);
 FUNC_7(FUNC_13(VAR_7), &VAR_6);

 return VAR_13;
}
