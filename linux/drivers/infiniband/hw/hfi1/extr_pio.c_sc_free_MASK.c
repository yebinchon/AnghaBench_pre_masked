
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct send_context {size_t sw_index; size_t hw_context; int buffers_allocated; struct send_context* sr; int halt_work; int piowait; struct hfi1_devdata* dd; int flags; } ;
struct hfi1_devdata {int sc_lock; TYPE_1__* send_contexts; } ;
struct TYPE_2__ {int * sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (struct hfi1_devdata*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct send_context*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct send_context*) ;
 int FUNC_7 (struct hfi1_devdata*,size_t,size_t) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct hfi1_devdata*,size_t,int ,int ) ;

void FUNC_11(struct send_context *VAR_8)
{
 struct hfi1_devdata *VAR_9;
 unsigned long VAR_10;
 u32 VAR_11;
 u32 VAR_12;

 if (!VAR_8)
  return;

 VAR_8->flags |= VAR_7;
 VAR_9 = VAR_8->dd;
 if (!FUNC_5(&VAR_8->piowait))
  FUNC_1(VAR_9, "piowait list not empty!\n");
 VAR_11 = VAR_8->sw_index;
 VAR_12 = VAR_8->hw_context;
 FUNC_6(VAR_8);
 FUNC_2(&VAR_8->halt_work);

 FUNC_8(&VAR_9->sc_lock, VAR_10);
 VAR_9->send_contexts[VAR_11].sc = ((void*)0);


 FUNC_10(VAR_9, VAR_12, FUNC_0(VAR_5), 0);
 FUNC_10(VAR_9, VAR_12, FUNC_0(VAR_0), 0);
 FUNC_10(VAR_9, VAR_12, FUNC_0(VAR_6), 0);
 FUNC_10(VAR_9, VAR_12, FUNC_0(VAR_2), 0);
 FUNC_10(VAR_9, VAR_12, FUNC_0(VAR_1), 0);
 FUNC_10(VAR_9, VAR_12, FUNC_0(VAR_4), 0);
 FUNC_10(VAR_9, VAR_12, FUNC_0(VAR_3), 0);


 FUNC_7(VAR_9, VAR_11, VAR_12);
 FUNC_9(&VAR_9->sc_lock, VAR_10);

 FUNC_4(VAR_8->sr);
 FUNC_3(VAR_8->buffers_allocated);
 FUNC_4(VAR_8);
}
