
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfi1_pportdata {int* statusp; int * link_wq; int * hfi1_wq; scalar_t__ linkup; } ;
struct hfi1_devdata {int flags; unsigned int num_pports; int num_rcv_contexts; int num_send_contexts; TYPE_1__* send_contexts; struct hfi1_pportdata* pport; } ;
struct hfi1_ctxtdata {int dummy; } ;
struct TYPE_2__ {int sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct hfi1_pportdata*) ;
 struct hfi1_ctxtdata* FUNC_2 (struct hfi1_devdata*,int) ;
 int FUNC_3 (struct hfi1_ctxtdata*) ;
 int FUNC_4 (struct hfi1_devdata*,int,struct hfi1_ctxtdata*) ;
 int FUNC_5 (struct hfi1_devdata*) ;
 int FUNC_6 (struct hfi1_devdata*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct hfi1_devdata*) ;
 int FUNC_10 (struct hfi1_devdata*,int ,int ,int) ;
 int FUNC_11 (struct hfi1_pportdata*) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(struct hfi1_devdata *VAR_12)
{
 struct hfi1_pportdata *VAR_13;
 struct hfi1_ctxtdata *VAR_14;
 unsigned VAR_15;
 int VAR_16;

 if (VAR_12->flags & VAR_6)
  return;
 VAR_12->flags |= VAR_6;

 for (VAR_15 = 0; VAR_15 < VAR_12->num_pports; ++VAR_15) {
  VAR_13 = VAR_12->pport + VAR_15;

  VAR_13->linkup = 0;
  if (VAR_13->statusp)
   *VAR_13->statusp &= ~(VAR_7 |
        VAR_8);
 }
 VAR_12->flags &= ~VAR_0;


 FUNC_10(VAR_12, VAR_9, VAR_10, 0);
 FUNC_5(VAR_12);

 for (VAR_15 = 0; VAR_15 < VAR_12->num_pports; ++VAR_15) {
  VAR_13 = VAR_12->pport + VAR_15;
  for (VAR_16 = 0; VAR_16 < VAR_12->num_rcv_contexts; VAR_16++) {
   VAR_14 = FUNC_2(VAR_12, VAR_16);
   FUNC_4(VAR_12, VAR_5 |
         VAR_1 |
         VAR_2 |
         VAR_4 |
         VAR_3, VAR_14);
   FUNC_3(VAR_14);
  }




  for (VAR_16 = 0; VAR_16 < VAR_12->num_send_contexts; VAR_16++)
   FUNC_8(VAR_12->send_contexts[VAR_16].sc);
 }





 FUNC_12(20);

 for (VAR_15 = 0; VAR_15 < VAR_12->num_pports; ++VAR_15) {
  VAR_13 = VAR_12->pport + VAR_15;


  for (VAR_16 = 0; VAR_16 < VAR_12->num_send_contexts; VAR_16++)
   FUNC_7(VAR_12->send_contexts[VAR_16].sc);

  FUNC_6(VAR_12, VAR_11);

  FUNC_11(VAR_13);





  FUNC_1(VAR_13);

  if (VAR_13->hfi1_wq) {
   FUNC_0(VAR_13->hfi1_wq);
   VAR_13->hfi1_wq = ((void*)0);
  }
  if (VAR_13->link_wq) {
   FUNC_0(VAR_13->link_wq);
   VAR_13->link_wq = ((void*)0);
  }
 }
 FUNC_9(VAR_12);
}
