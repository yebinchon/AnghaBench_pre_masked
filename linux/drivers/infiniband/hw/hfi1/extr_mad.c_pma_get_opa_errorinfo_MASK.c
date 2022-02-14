
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct opa_port_error_info_msg {int * port_select_mask; struct _port_ei* port; } ;
struct TYPE_16__ {int status; int attr_mod; } ;
struct opa_pma_mad {TYPE_1__ mad_hdr; scalar_t__ data; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_device {int dummy; } ;
struct TYPE_13__ {int slid; int pkey; int status; } ;
struct TYPE_23__ {int slid; int pkey; int status; } ;
struct TYPE_20__ {int packet_flit2; int packet_flit1; int status_and_code; } ;
struct hfi1_devdata {int err_info_fmconfig; int err_info_uncorrectable; TYPE_10__ err_info_rcv_constraint; TYPE_8__ err_info_xmit_constraint; TYPE_5__ err_info_rcvport; } ;
struct TYPE_15__ {int status_and_code; } ;
struct TYPE_14__ {int status_and_code; } ;
struct TYPE_24__ {void* slid; void* pkey; int status; } ;
struct TYPE_22__ {void* slid; void* pkey; int status; } ;
struct TYPE_21__ {int status_and_sc; } ;
struct TYPE_17__ {int packet_flit2; int packet_flit1; } ;
struct TYPE_18__ {TYPE_2__ ei1to12; } ;
struct TYPE_19__ {TYPE_3__ ei; int status_and_code; } ;
struct _port_ei {int port_number; TYPE_12__ fm_config_ei; TYPE_11__ uncorrectable_ei; TYPE_9__ port_rcv_constraint_ei; TYPE_7__ port_xmit_constraint_ei; TYPE_6__ excessive_buffer_overrun_ei; TYPE_4__ port_rcv_ei; } ;
typedef int port_mask ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 struct hfi1_devdata* FUNC_5 (struct ib_device*) ;
 int FUNC_6 (unsigned long*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (struct _port_ei*,int ,int) ;
 int FUNC_10 (struct hfi1_devdata*,int ) ;
 int FUNC_11 (struct ib_mad_hdr*) ;

__attribute__((used)) static int FUNC_12(struct opa_pma_mad *VAR_4,
     struct ib_device *VAR_5,
     u8 VAR_6, u32 *VAR_7)
{
 size_t VAR_8;
 struct _port_ei *VAR_9;
 struct opa_port_error_info_msg *VAR_10;
 struct hfi1_devdata *VAR_11 = FUNC_5(VAR_5);
 u64 VAR_12;
 u32 VAR_13;
 u8 VAR_14;
 u8 VAR_15;
 u64 VAR_16;

 VAR_10 = (struct opa_port_error_info_msg *)VAR_4->data;
 VAR_9 = &VAR_10->port[0];

 VAR_13 = FUNC_0(FUNC_1(VAR_4->mad_hdr.attr_mod));
 VAR_15 = FUNC_7(FUNC_2(VAR_10->port_select_mask[3]));

 FUNC_9(VAR_9, 0, sizeof(*VAR_9));

 if (VAR_13 != 1 || VAR_13 != VAR_15) {
  VAR_4->mad_hdr.status |= VAR_0;
  return FUNC_11((struct ib_mad_hdr *)VAR_4);
 }


 VAR_8 = sizeof(struct opa_port_error_info_msg);

 if (VAR_8 > sizeof(VAR_4->data)) {
  VAR_4->mad_hdr.status |= VAR_0;
  return FUNC_11((struct ib_mad_hdr *)VAR_4);
 }





 VAR_12 = FUNC_2(VAR_10->port_select_mask[3]);
 VAR_14 = FUNC_6((unsigned long *)&VAR_12,
      sizeof(VAR_12) * 8);

 if (VAR_14 != VAR_6) {
  VAR_4->mad_hdr.status |= VAR_0;
  return FUNC_11((struct ib_mad_hdr *)VAR_4);
 }
 VAR_9->port_number = VAR_6;


 VAR_9->port_rcv_ei.status_and_code =
  VAR_11->err_info_rcvport.status_and_code;
 FUNC_8(&VAR_9->port_rcv_ei.ei.ei1to12.packet_flit1,
        &VAR_11->err_info_rcvport.packet_flit1, sizeof(u64));
 FUNC_8(&VAR_9->port_rcv_ei.ei.ei1to12.packet_flit2,
        &VAR_11->err_info_rcvport.packet_flit2, sizeof(u64));


 VAR_16 = FUNC_10(VAR_11, VAR_1);
 if (VAR_16 & VAR_3) {




  u8 VAR_17 = (u8)VAR_16;

  VAR_17 &= VAR_2;
  VAR_17 <<= 2;
  VAR_9->excessive_buffer_overrun_ei.status_and_sc = VAR_17;

  VAR_9->excessive_buffer_overrun_ei.status_and_sc |= 0x80;
 }

 VAR_9->port_xmit_constraint_ei.status =
  VAR_11->err_info_xmit_constraint.status;
 VAR_9->port_xmit_constraint_ei.pkey =
  FUNC_3(VAR_11->err_info_xmit_constraint.pkey);
 VAR_9->port_xmit_constraint_ei.slid =
  FUNC_4(VAR_11->err_info_xmit_constraint.slid);

 VAR_9->port_rcv_constraint_ei.status =
  VAR_11->err_info_rcv_constraint.status;
 VAR_9->port_rcv_constraint_ei.pkey =
  FUNC_3(VAR_11->err_info_rcv_constraint.pkey);
 VAR_9->port_rcv_constraint_ei.slid =
  FUNC_4(VAR_11->err_info_rcv_constraint.slid);


 VAR_9->uncorrectable_ei.status_and_code = VAR_11->err_info_uncorrectable;


 VAR_9->fm_config_ei.status_and_code = VAR_11->err_info_fmconfig;

 if (VAR_7)
  *VAR_7 += VAR_8;

 return FUNC_11((struct ib_mad_hdr *)VAR_4);
}
