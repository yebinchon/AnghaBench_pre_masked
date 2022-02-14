
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int tidinfo ;
struct hfi1_tid_info {int tidcnt; int tidlist; } ;
struct hfi1_filedata {int tid_used; int tid_lock; struct hfi1_ctxtdata* uctxt; } ;
struct hfi1_ctxtdata {int exp_mutex; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct hfi1_filedata*,int ,int *) ;

int FUNC_12(struct hfi1_filedata *VAR_2,
       struct hfi1_tid_info *VAR_3)
{
 int VAR_4 = 0;
 struct hfi1_ctxtdata *VAR_5 = VAR_2->uctxt;
 u32 *VAR_6;
 unsigned VAR_7;

 if (FUNC_10(VAR_3->tidcnt > VAR_2->tid_used))
  return -VAR_0;

 VAR_6 = FUNC_4(FUNC_9(VAR_3->tidlist),
         sizeof(VAR_6[0]) * VAR_3->tidcnt);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 FUNC_5(&VAR_5->exp_mutex);
 for (VAR_7 = 0; VAR_7 < VAR_3->tidcnt; VAR_7++) {
  VAR_4 = FUNC_11(VAR_2, VAR_6[VAR_7], ((void*)0));
  if (VAR_4) {
   FUNC_2(VAR_1, "Failed to unprogram rcv array %d",
      VAR_4);
   break;
  }
 }
 FUNC_7(&VAR_2->tid_lock);
 VAR_2->tid_used -= VAR_7;
 FUNC_8(&VAR_2->tid_lock);
 VAR_3->tidcnt = VAR_7;
 FUNC_6(&VAR_5->exp_mutex);

 FUNC_3(VAR_6);
 return VAR_4;
}
