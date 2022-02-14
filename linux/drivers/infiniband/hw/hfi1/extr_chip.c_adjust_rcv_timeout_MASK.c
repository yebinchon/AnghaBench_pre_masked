
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct hfi1_devdata {scalar_t__ rcv_intr_timeout_csr; } ;
struct hfi1_ctxtdata {scalar_t__ rcvavail_timeout; int ctxt; struct hfi1_devdata* dd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct hfi1_devdata*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct hfi1_ctxtdata *VAR_3, u32 VAR_4)
{
 struct hfi1_devdata *VAR_5 = VAR_3->dd;
 u32 VAR_6 = VAR_3->rcvavail_timeout;
 if (VAR_4 < VAR_2) {




  if (VAR_6 < 2)
   return;
  VAR_6 >>= 1;
 } else {




  if (VAR_6 >= VAR_5->rcv_intr_timeout_csr)
   return;
  VAR_6 = FUNC_0(VAR_6 << 1, VAR_5->rcv_intr_timeout_csr);
 }

 VAR_3->rcvavail_timeout = VAR_6;




 FUNC_1(VAR_5, VAR_3->ctxt, VAR_0,
   (u64)VAR_6 <<
   VAR_1);
}
