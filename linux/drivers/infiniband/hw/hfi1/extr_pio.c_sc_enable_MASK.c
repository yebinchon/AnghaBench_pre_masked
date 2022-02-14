
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct send_context {int hw_context; int alloc_lock; int flags; int sw_index; scalar_t__ sr_tail; scalar_t__ sr_head; scalar_t__ fill_wrap; scalar_t__ fill; scalar_t__ alloc_free; scalar_t__ free; scalar_t__* hw_free; struct hfi1_devdata* dd; } ;
struct hfi1_devdata {int sc_init_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct hfi1_devdata*,char*,int ,int,int) ;
 int FUNC_2 (struct hfi1_devdata*) ;
 int FUNC_3 (struct hfi1_devdata*,int,int) ;
 int FUNC_4 (struct send_context*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct hfi1_devdata*,int ,int) ;
 int FUNC_11 (struct hfi1_devdata*,int,int,int) ;

int FUNC_12(struct send_context *VAR_10)
{
 u64 VAR_11, VAR_12, VAR_13;
 struct hfi1_devdata *VAR_14;
 unsigned long VAR_15;
 int VAR_16 = 0;

 if (!VAR_10)
  return -VAR_2;
 VAR_14 = VAR_10->dd;
 FUNC_6(&VAR_10->alloc_lock, VAR_15);
 VAR_11 = FUNC_3(VAR_14, VAR_10->hw_context, FUNC_0(VAR_0));
 if ((VAR_11 & FUNC_0(VAR_1)))
  goto unlock;



 *VAR_10->hw_free = 0;
 VAR_10->free = 0;
 VAR_10->alloc_free = 0;
 VAR_10->fill = 0;
 VAR_10->fill_wrap = 0;
 VAR_10->sr_head = 0;
 VAR_10->sr_tail = 0;
 VAR_10->flags = 0;

 FUNC_4(VAR_10);







 VAR_12 = FUNC_3(VAR_14, VAR_10->hw_context, FUNC_0(VAR_4));
 if (VAR_12)
  FUNC_11(VAR_14, VAR_10->hw_context, FUNC_0(VAR_3), VAR_12);





 FUNC_5(&VAR_14->sc_init_lock);







 VAR_13 = ((VAR_10->hw_context & VAR_7) <<
        VAR_8) |
  VAR_9;
 FUNC_10(VAR_14, VAR_6, VAR_13);




 FUNC_9(2);
 VAR_16 = FUNC_2(VAR_14);
 FUNC_7(&VAR_14->sc_init_lock);
 if (VAR_16) {
  FUNC_1(VAR_14,
      "sctxt%u(%u): Context not enabled due to init failure %d\n",
      VAR_10->sw_index, VAR_10->hw_context, VAR_16);
  goto unlock;
 }




 VAR_11 |= FUNC_0(VAR_1);
 FUNC_11(VAR_14, VAR_10->hw_context, FUNC_0(VAR_0), VAR_11);




 FUNC_3(VAR_14, VAR_10->hw_context, FUNC_0(VAR_0));
 VAR_10->flags |= VAR_5;

unlock:
 FUNC_8(&VAR_10->alloc_lock, VAR_15);

 return VAR_16;
}
