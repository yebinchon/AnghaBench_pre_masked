
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct send_context {int flags; } ;
struct hfi1_pportdata {int freeze_work; int hfi1_wq; struct hfi1_devdata* dd; } ;
struct hfi1_devdata {int num_send_contexts; TYPE_1__* send_contexts; int flags; } ;
struct TYPE_2__ {struct send_context* sc; } ;


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
 int FUNC_0 (struct hfi1_devdata*,char*) ;
 int FUNC_1 (struct hfi1_pportdata*,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct send_context*,int) ;
 int FUNC_4 (struct hfi1_devdata*,int) ;
 int FUNC_5 (struct hfi1_devdata*,int ,int ) ;

void FUNC_6(struct hfi1_pportdata *VAR_11, int VAR_12)
{
 struct hfi1_devdata *VAR_13 = VAR_11->dd;
 struct send_context *VAR_14;
 int VAR_15;
 int VAR_16;

 if (VAR_12 & VAR_4)
  FUNC_5(VAR_13, VAR_0, VAR_1);


 VAR_13->flags |= VAR_5;


 FUNC_4(VAR_13, !!(VAR_12 & VAR_3));

 VAR_16 = VAR_7 | VAR_8 | (VAR_12 & VAR_3 ?
           VAR_9 : 0);

 for (VAR_15 = 0; VAR_15 < VAR_13->num_send_contexts; VAR_15++) {
  VAR_14 = VAR_13->send_contexts[VAR_15].sc;
  if (VAR_14 && (VAR_14->flags & VAR_6))
   FUNC_3(VAR_14, VAR_16);
 }


 FUNC_1(VAR_11, VAR_10);

 if (VAR_12 & VAR_2) {
  FUNC_0(VAR_13,
      "Aborted freeze recovery. Please REBOOT system\n");
  return;
 }

 FUNC_2(VAR_11->hfi1_wq, &VAR_11->freeze_work);
}
