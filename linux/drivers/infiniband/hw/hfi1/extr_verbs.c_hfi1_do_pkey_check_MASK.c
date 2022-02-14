
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct hfi1_pportdata {int dummy; } ;
struct hfi1_packet {scalar_t__ etype; int slid; TYPE_1__* qp; int sc; struct hfi1_16b_header* hdr; struct hfi1_ctxtdata* rcd; } ;
struct hfi1_ctxtdata {struct hfi1_pportdata* ppd; } ;
struct hfi1_16b_header {int dummy; } ;
struct TYPE_2__ {int s_pkey_index; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hfi1_16b_header*) ;
 int FUNC_1 (struct hfi1_pportdata*,int ,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct hfi1_packet *VAR_1)
{
 struct hfi1_ctxtdata *VAR_2 = VAR_1->rcd;
 struct hfi1_pportdata *VAR_3 = VAR_2->ppd;
 struct hfi1_16b_header *VAR_4 = VAR_1->hdr;
 u16 VAR_5;


 if (VAR_1->etype != VAR_0)
  return 0;


 VAR_5 = FUNC_0(VAR_4);
 return FUNC_1(VAR_3, VAR_5, VAR_1->sc,
      VAR_1->qp->s_pkey_index,
      VAR_1->slid, 1);
}
