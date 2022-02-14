
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct send_context {int dummy; } ;
struct rvt_qp {int srate_mbps; } ;
struct pio_buf {int dummy; } ;
struct ib_other_headers {void** bth; } ;
struct ib_grh {int hop_limit; int sgid; int dgid; int paylen; int version_tclass_flow; } ;
struct hfi1_pportdata {TYPE_3__* dd; } ;
struct TYPE_7__ {struct ib_other_headers oth; struct ib_grh grh; } ;
struct TYPE_8__ {struct ib_other_headers oth; TYPE_1__ l; } ;
struct TYPE_10__ {TYPE_2__ u; } ;
struct hfi1_opa_header {TYPE_6__ opah; int hdr_type; } ;
struct hfi1_ibport {int dummy; } ;
struct TYPE_9__ {int (* pio_inline_send ) (TYPE_3__*,struct pio_buf*,int,struct hfi1_opa_header*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pio_buf*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct hfi1_pportdata*,int,int ,int,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_6__*,int,int,int,int,int,int ,int ,int ) ;
 struct hfi1_pportdata* FUNC_6 (struct hfi1_ibport*) ;
 struct send_context* FUNC_7 (struct rvt_qp*,int ) ;
 struct pio_buf* FUNC_8 (struct send_context*,int,int *,int *) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_3__*,struct pio_buf*,int,struct hfi1_opa_header*,int) ;
 int FUNC_11 (TYPE_3__*,struct hfi1_opa_header*,int ) ;

void FUNC_12(struct hfi1_ibport *VAR_9, struct rvt_qp *VAR_10,
      u32 VAR_11, u16 VAR_12, u32 VAR_13, u32 VAR_14,
      u8 VAR_15, const struct ib_grh *VAR_16)
{
 u64 VAR_17, VAR_18 = 0;
 u32 VAR_19, VAR_20, VAR_21, VAR_22 = 7;
 u16 VAR_23;
 u8 VAR_24;
 struct hfi1_opa_header VAR_25;
 struct ib_other_headers *VAR_26;
 struct pio_buf *VAR_27;
 struct send_context *VAR_28 = FUNC_7(VAR_10, VAR_15);
 struct hfi1_pportdata *VAR_29 = FUNC_6(VAR_9);
 u32 VAR_30;

 VAR_25.hdr_type = VAR_0;

 VAR_30 = ((FUNC_4(VAR_22 << 2, 0) +
     VAR_8) >> 2) + VAR_7;
 if (VAR_16) {
  struct ib_grh *VAR_31 = &VAR_25.opah.u.l.grh;

  VAR_31->version_tclass_flow = VAR_16->version_tclass_flow;
  VAR_31->paylen = FUNC_1(
   (VAR_22 - VAR_2 + VAR_30) << 2);
  VAR_31->hop_limit = 0xff;
  VAR_31->sgid = VAR_16->dgid;
  VAR_31->dgid = VAR_16->sgid;
  VAR_26 = &VAR_25.opah.u.l.oth;
  VAR_24 = VAR_3;
  VAR_22 += sizeof(struct ib_grh) / sizeof(u32);
 } else {
  VAR_26 = &VAR_25.opah.u.oth;
  VAR_24 = VAR_4;
 }


 VAR_19 = (VAR_1 << 24) | (1 << 16) |
        (FUNC_4(VAR_22 << 2, 0) << 20);
 VAR_26->bth[0] = FUNC_2(VAR_19);

 VAR_26->bth[1] = FUNC_2(VAR_11);
 VAR_26->bth[2] = 0;


 VAR_23 = (VAR_22 + VAR_30) >> 1;
 FUNC_5(&VAR_25.opah, VAR_13, VAR_14, VAR_23, VAR_12, 1, 0, VAR_24, VAR_15);

 VAR_20 = 2 + VAR_22 + VAR_30;
 VAR_18 |= VAR_6 | VAR_5;
 VAR_21 = FUNC_9(VAR_29->dd, VAR_15);
 VAR_17 = FUNC_3(VAR_29, VAR_18, VAR_10->srate_mbps, VAR_21, VAR_20);
 if (VAR_28) {
  VAR_27 = FUNC_8(VAR_28, VAR_20, ((void*)0), ((void*)0));
  if (!FUNC_0(VAR_27)) {
   FUNC_11(VAR_29->dd, &VAR_25, VAR_15);
   VAR_29->dd->pio_inline_send(VAR_29->dd, VAR_27, VAR_17,
       &VAR_25, VAR_22);
  }
 }
}
