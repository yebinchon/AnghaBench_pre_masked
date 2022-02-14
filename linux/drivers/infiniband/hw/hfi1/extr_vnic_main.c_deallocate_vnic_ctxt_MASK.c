
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfi1_devdata {int dummy; } ;
struct hfi1_ctxtdata {scalar_t__ event_flags; scalar_t__ msix_intr; int ctxt; } ;
struct TYPE_2__ {int sps_ctxts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hfi1_devdata*,char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct hfi1_devdata*,struct hfi1_ctxtdata*) ;
 int FUNC_3 (struct hfi1_ctxtdata*) ;
 int FUNC_4 (struct hfi1_ctxtdata*) ;
 int FUNC_5 (struct hfi1_devdata*,int,struct hfi1_ctxtdata*) ;
 TYPE_1__ VAR_6 ;
 int FUNC_6 (struct hfi1_devdata*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct hfi1_devdata *VAR_7,
     struct hfi1_ctxtdata *VAR_8)
{
 FUNC_0(VAR_7, "closing vnic context %d\n", VAR_8->ctxt);
 FUNC_1();





 FUNC_5(VAR_7, VAR_0 |
       VAR_5 |
       VAR_1 |
       VAR_4 |
       VAR_3 |
       VAR_2, VAR_8);


 if (VAR_8->msix_intr)
  FUNC_6(VAR_7, VAR_8->msix_intr);

 VAR_8->event_flags = 0;

 FUNC_3(VAR_8);
 FUNC_2(VAR_7, VAR_8);

 VAR_6.sps_ctxts--;

 FUNC_4(VAR_8);
}
