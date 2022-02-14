
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
typedef int u32 ;
typedef size_t u16 ;
struct send_context {int dummy; } ;
struct rvt_qp {int srate_mbps; } ;
struct pio_buf {int dummy; } ;
struct ib_other_headers {void** bth; } ;
struct ib_grh {int hop_limit; int sgid; int dgid; int paylen; int version_tclass_flow; } ;
struct hfi1_pportdata {TYPE_3__* dd; } ;
struct TYPE_7__ {struct ib_other_headers oth; struct ib_grh grh; } ;
struct TYPE_8__ {struct ib_other_headers oth; TYPE_1__ l; } ;
struct TYPE_10__ {TYPE_2__ u; } ;
struct hfi1_opa_header {TYPE_6__ ibh; int hdr_type; } ;
struct hfi1_ibport {size_t* sc_to_sl; } ;
struct TYPE_9__ {int (* pio_inline_send ) (TYPE_3__*,struct pio_buf*,int,struct hfi1_opa_header*,int) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pio_buf*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct hfi1_pportdata*,int,int ,int,int) ;
 int FUNC_4 (TYPE_6__*,size_t,int,int,int) ;
 int FUNC_5 (size_t) ;
 struct hfi1_pportdata* FUNC_6 (struct hfi1_ibport*) ;
 struct send_context* FUNC_7 (struct rvt_qp*,size_t) ;
 struct pio_buf* FUNC_8 (struct send_context*,int,int *,int *) ;
 int FUNC_9 (TYPE_3__*,size_t) ;
 int FUNC_10 (TYPE_3__*,struct pio_buf*,int,struct hfi1_opa_header*,int) ;
 int FUNC_11 (TYPE_3__*,struct hfi1_opa_header*,size_t) ;

void FUNC_12(struct hfi1_ibport *VAR_8, struct rvt_qp *VAR_9, u32 VAR_10,
  u16 VAR_11, u32 VAR_12, u32 VAR_13, u8 VAR_14,
  const struct ib_grh *VAR_15)
{
 u64 VAR_16, VAR_17 = 0;
 u32 VAR_18, VAR_19, VAR_20, VAR_21 = 5;
 u16 VAR_22;
 u8 VAR_23 = VAR_8->sc_to_sl[VAR_14];
 struct hfi1_opa_header VAR_24;
 struct ib_other_headers *VAR_25;
 struct pio_buf *VAR_26;
 struct send_context *VAR_27 = FUNC_7(VAR_9, VAR_14);
 struct hfi1_pportdata *VAR_28 = FUNC_6(VAR_8);

 VAR_24.hdr_type = VAR_2;
 if (VAR_15) {
  struct ib_grh *VAR_29 = &VAR_24.ibh.u.l.grh;

  VAR_29->version_tclass_flow = VAR_15->version_tclass_flow;
  VAR_29->paylen = FUNC_1(
   (VAR_21 - VAR_5 + VAR_7) << 2);
  VAR_29->hop_limit = 0xff;
  VAR_29->sgid = VAR_15->dgid;
  VAR_29->dgid = VAR_15->sgid;
  VAR_25 = &VAR_24.ibh.u.l.oth;
  VAR_22 = VAR_1;
  VAR_21 += sizeof(struct ib_grh) / sizeof(u32);
 } else {
  VAR_25 = &VAR_24.ibh.u.oth;
  VAR_22 = VAR_0;
 }

 VAR_22 |= (VAR_14 & 0xf) << 12 | VAR_23 << 4;

 VAR_18 = VAR_11 | (VAR_4 << 24);
 VAR_25->bth[0] = FUNC_2(VAR_18);

 VAR_25->bth[1] = FUNC_2(VAR_10 | (1 << VAR_3));
 VAR_25->bth[2] = 0;

 FUNC_4(&VAR_24.ibh, VAR_22, VAR_21 + VAR_7, VAR_13, VAR_12);
 VAR_19 = 2 + VAR_21;
 VAR_17 |= (FUNC_5(VAR_14) << VAR_6);
 VAR_20 = FUNC_9(VAR_28->dd, VAR_14);
 VAR_16 = FUNC_3(VAR_28, VAR_17, VAR_9->srate_mbps, VAR_20, VAR_19);
 if (VAR_27) {
  VAR_26 = FUNC_8(VAR_27, VAR_19, ((void*)0), ((void*)0));
  if (!FUNC_0(VAR_26)) {
   FUNC_11(VAR_28->dd, &VAR_24, VAR_14);
   VAR_28->dd->pio_inline_send(VAR_28->dd, VAR_26, VAR_16,
       &VAR_24, VAR_21);
  }
 }
}
