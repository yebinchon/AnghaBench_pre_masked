
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfi1_devdata {int num_rcv_contexts; int num_send_contexts; TYPE_1__* send_contexts; } ;
struct hfi1_ctxtdata {int dummy; } ;
struct TYPE_2__ {int sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct hfi1_ctxtdata* FUNC_0 (struct hfi1_devdata*,int) ;
 int FUNC_1 (struct hfi1_ctxtdata*) ;
 int FUNC_2 (struct hfi1_devdata*,int,struct hfi1_ctxtdata*) ;
 int FUNC_3 (struct hfi1_devdata*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct hfi1_devdata *VAR_4)
{
 int VAR_5;
 struct hfi1_ctxtdata *VAR_6;





 for (VAR_5 = 0; VAR_5 < VAR_4->num_rcv_contexts; VAR_5++) {
  VAR_6 = FUNC_0(VAR_4, VAR_5);
  FUNC_2(VAR_4, VAR_0 |
        VAR_1 |
        VAR_2, VAR_6);
  FUNC_1(VAR_6);
 }
 FUNC_3(VAR_4, VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_4->num_send_contexts; VAR_5++)
  FUNC_4(VAR_4->send_contexts[VAR_5].sc);

 return 0;
}
