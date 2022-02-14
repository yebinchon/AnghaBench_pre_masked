
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {int num_rcv_contexts; } ;
struct hfi1_ctxtdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfi1_devdata*,int ) ;
 struct hfi1_ctxtdata* FUNC_1 (struct hfi1_devdata*,int) ;
 int FUNC_2 (struct hfi1_ctxtdata*) ;
 int FUNC_3 (struct hfi1_devdata*,int ,struct hfi1_ctxtdata*) ;

__attribute__((used)) static void FUNC_4(struct hfi1_devdata *VAR_2)
{
 int VAR_3;
 struct hfi1_ctxtdata *VAR_4;


 FUNC_0(VAR_2, VAR_1);


 for (VAR_3 = 0; VAR_3 < VAR_2->num_rcv_contexts; VAR_3++) {
  VAR_4 = FUNC_1(VAR_2, VAR_3);
  FUNC_3(VAR_2, VAR_0, VAR_4);
  FUNC_2(VAR_4);
 }
}
