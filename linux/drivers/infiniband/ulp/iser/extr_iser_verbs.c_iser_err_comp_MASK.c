
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iser_conn {scalar_t__ iscsi_conn; } ;
struct ib_wc {scalar_t__ status; int vendor_err; TYPE_1__* qp; } ;
struct TYPE_2__ {int qp_context; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (char*,char const*,int ,scalar_t__) ;
 int FUNC_3 (char*,char const*,int ,scalar_t__,int ) ;
 struct iser_conn* FUNC_4 (int ) ;

void FUNC_5(struct ib_wc *VAR_2, const char *VAR_3)
{
 if (VAR_2->status != VAR_0) {
  struct iser_conn *VAR_4 = FUNC_4(VAR_2->qp->qp_context);

  FUNC_3("%s failure: %s (%d) vend_err %#x\n", VAR_3,
    FUNC_0(VAR_2->status), VAR_2->status,
    VAR_2->vendor_err);

  if (VAR_4->iscsi_conn)
   FUNC_1(VAR_4->iscsi_conn,
        VAR_1);
 } else {
  FUNC_2("%s failure: %s (%d)\n", VAR_3,
    FUNC_0(VAR_2->status), VAR_2->status);
 }
}
