
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {unsigned int num_rcv_contexts; } ;
struct hfi1_ctxtdata {int dummy; } ;


 int FUNC_0 (struct hfi1_devdata*,char*,char*,unsigned int) ;
 int FUNC_1 (struct hfi1_ctxtdata*) ;
 struct hfi1_ctxtdata* FUNC_2 (struct hfi1_devdata*,unsigned int) ;
 int FUNC_3 (struct hfi1_ctxtdata*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct hfi1_devdata *VAR_0, unsigned int VAR_1)
{
 struct hfi1_ctxtdata *VAR_2;
 char *VAR_3;

 if (FUNC_4(VAR_1 < VAR_0->num_rcv_contexts)) {
  VAR_2 = FUNC_2(VAR_0, VAR_1);
  if (VAR_2) {
   FUNC_1(VAR_2);
   FUNC_3(VAR_2);
   return;
  }

  VAR_3 = "dataless";
 } else {

  VAR_3 = "out of range";
 }
 FUNC_0(VAR_0, "unexpected %s receive urgent context interrupt %u\n",
     VAR_3, VAR_1);
}
