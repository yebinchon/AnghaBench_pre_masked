
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct rvt_k_cq_wc {size_t tail; size_t head; struct ib_wc* kqueue; } ;
struct TYPE_2__ {size_t cqe; } ;
struct rvt_cq {int lock; TYPE_1__ ibcq; struct rvt_k_cq_wc* kqueue; scalar_t__ ip; } ;
struct ib_wc {int dummy; } ;
struct ib_cq {int dummy; } ;


 int VAR_0 ;
 struct rvt_cq* FUNC_0 (struct ib_cq*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct rvt_cq*,struct ib_wc*,int) ;

int FUNC_4(struct ib_cq *VAR_1, int VAR_2, struct ib_wc *VAR_3)
{
 struct rvt_cq *VAR_4 = FUNC_0(VAR_1);
 struct rvt_k_cq_wc *VAR_5;
 unsigned long VAR_6;
 int VAR_7;
 u32 VAR_8;


 if (VAR_4->ip)
  return -VAR_0;

 FUNC_1(&VAR_4->lock, VAR_6);

 VAR_5 = VAR_4->kqueue;
 VAR_8 = VAR_5->tail;
 if (VAR_8 > (u32)VAR_4->ibcq.cqe)
  VAR_8 = (u32)VAR_4->ibcq.cqe;
 for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7, ++VAR_3) {
  if (VAR_8 == VAR_5->head)
   break;

  FUNC_3(VAR_4, &VAR_5->kqueue[VAR_8], VAR_7);
  *VAR_3 = VAR_5->kqueue[VAR_8];
  if (VAR_8 >= VAR_4->ibcq.cqe)
   VAR_8 = 0;
  else
   VAR_8++;
 }
 VAR_5->tail = VAR_8;

 FUNC_2(&VAR_4->lock, VAR_6);

 return VAR_7;
}
