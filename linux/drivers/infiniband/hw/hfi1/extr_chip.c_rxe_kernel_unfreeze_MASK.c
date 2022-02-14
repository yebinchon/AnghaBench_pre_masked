
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct hfi1_devdata {scalar_t__ num_rcv_contexts; scalar_t__ first_dyn_alloc_ctxt; } ;
struct hfi1_ctxtdata {scalar_t__ rcvhdrtail_kvaddr; int is_vnic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hfi1_devdata*,int ) ;
 struct hfi1_ctxtdata* FUNC_1 (struct hfi1_devdata*,scalar_t__) ;
 int FUNC_2 (struct hfi1_ctxtdata*) ;
 int FUNC_3 (struct hfi1_devdata*,int ,struct hfi1_ctxtdata*) ;

__attribute__((used)) static void FUNC_4(struct hfi1_devdata *VAR_4)
{
 u32 VAR_5;
 u16 VAR_6;
 struct hfi1_ctxtdata *VAR_7;


 for (VAR_6 = 0; VAR_6 < VAR_4->num_rcv_contexts; VAR_6++) {
  VAR_7 = FUNC_1(VAR_4, VAR_6);


  if (!VAR_7 ||
      (VAR_6 >= VAR_4->first_dyn_alloc_ctxt && !VAR_7->is_vnic)) {
   FUNC_2(VAR_7);
   continue;
  }
  VAR_5 = VAR_0;

  VAR_5 |= VAR_7->rcvhdrtail_kvaddr ?
   VAR_2 : VAR_1;
  FUNC_3(VAR_4, VAR_5, VAR_7);
  FUNC_2(VAR_7);
 }


 FUNC_0(VAR_4, VAR_3);
}
