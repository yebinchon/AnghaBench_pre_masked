
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sdma_txreq {int tlen; scalar_t__ num_desc; int list; scalar_t__ sn; scalar_t__ next_descq_idx; int wait; } ;
struct sdma_engine {scalar_t__ desc_avail; int descq_full_count; int flush_worker; int cpu; int flushlist_lock; int flushlist; int tail_sn; int tail_lock; } ;
struct iowait_work {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sdma_engine*) ;
 int FUNC_1 (struct iowait_work*,scalar_t__) ;
 int FUNC_2 (struct iowait_work*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (struct sdma_engine*,struct iowait_work*,struct sdma_txreq*,int) ;
 int FUNC_7 (struct sdma_engine*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (struct sdma_engine*,struct sdma_txreq*) ;
 int VAR_3 ;
 int FUNC_13 (struct sdma_engine*,scalar_t__) ;
 scalar_t__ FUNC_14 (int) ;

int FUNC_15(struct sdma_engine *VAR_4,
      struct iowait_work *VAR_5,
      struct sdma_txreq *VAR_6,
      bool VAR_7)
{
 int VAR_8 = 0;
 u16 VAR_9;
 unsigned long VAR_10;


 if (FUNC_14(VAR_6->tlen))
  return -VAR_2;
 VAR_6->wait = FUNC_2(VAR_5);
 FUNC_9(&VAR_4->tail_lock, VAR_10);
retry:
 if (FUNC_14(!FUNC_0(VAR_4)))
  goto unlock_noconn;
 if (FUNC_14(VAR_6->num_desc > VAR_4->desc_avail))
  goto nodesc;
 VAR_9 = FUNC_12(VAR_4, VAR_6);
 if (VAR_5)
  FUNC_3(FUNC_2(VAR_5));
 FUNC_7(VAR_4, VAR_9);
unlock:
 FUNC_11(&VAR_4->tail_lock, VAR_10);
 return VAR_8;
unlock_noconn:
 if (VAR_5)
  FUNC_3(FUNC_2(VAR_5));
 VAR_6->next_descq_idx = 0;




 FUNC_8(&VAR_4->flushlist_lock);
 FUNC_4(&VAR_6->list, &VAR_4->flushlist);
 FUNC_10(&VAR_4->flushlist_lock);
 FUNC_1(VAR_5, VAR_6->num_desc);
 FUNC_5(VAR_4->cpu, VAR_3, &VAR_4->flush_worker);
 VAR_8 = -VAR_1;
 goto unlock;
nodesc:
 VAR_8 = FUNC_6(VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_8 == -VAR_0) {
  VAR_8 = 0;
  goto retry;
 }
 VAR_4->descq_full_count++;
 goto unlock;
}
