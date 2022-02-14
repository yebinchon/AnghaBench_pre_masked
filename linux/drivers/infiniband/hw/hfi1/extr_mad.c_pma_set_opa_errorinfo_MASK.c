
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct opa_port_error_info_msg {int error_info_select_mask; int * port_select_mask; struct _port_ei* port; } ;
struct TYPE_5__ {int status; int attr_mod; } ;
struct opa_pma_mad {TYPE_1__ mad_hdr; scalar_t__ data; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_device {int dummy; } ;
struct TYPE_8__ {int status; } ;
struct TYPE_7__ {int status; } ;
struct TYPE_6__ {int status_and_code; } ;
struct hfi1_devdata {int err_info_fmconfig; int err_info_uncorrectable; TYPE_4__ err_info_rcv_constraint; TYPE_3__ err_info_xmit_constraint; TYPE_2__ err_info_rcvport; } ;
struct _port_ei {int dummy; } ;
typedef int port_mask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct hfi1_devdata* FUNC_3 (struct ib_device*) ;
 int FUNC_4 (unsigned long*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct _port_ei*,int ,int) ;
 int FUNC_7 (struct ib_mad_hdr*) ;
 int FUNC_8 (struct hfi1_devdata*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct opa_pma_mad *VAR_10,
     struct ib_device *VAR_11,
     u8 VAR_12, u32 *VAR_13)
{
 struct _port_ei *VAR_14;
 struct opa_port_error_info_msg *VAR_15;
 struct hfi1_devdata *VAR_16 = FUNC_3(VAR_11);
 u64 VAR_17;
 u32 VAR_18;
 u8 VAR_19;
 u8 VAR_20;
 u32 VAR_21;

 VAR_15 = (struct opa_port_error_info_msg *)VAR_10->data;
 VAR_14 = &VAR_15->port[0];

 VAR_18 = FUNC_0(FUNC_1(VAR_10->mad_hdr.attr_mod));
 VAR_20 = FUNC_5(FUNC_2(VAR_15->port_select_mask[3]));

 FUNC_6(VAR_14, 0, sizeof(*VAR_14));

 if (VAR_18 != 1 || VAR_18 != VAR_20) {
  VAR_10->mad_hdr.status |= VAR_6;
  return FUNC_7((struct ib_mad_hdr *)VAR_10);
 }





 VAR_17 = FUNC_2(VAR_15->port_select_mask[3]);
 VAR_19 = FUNC_4((unsigned long *)&VAR_17,
      sizeof(VAR_17) * 8);

 if (VAR_19 != VAR_12) {
  VAR_10->mad_hdr.status |= VAR_6;
  return FUNC_7((struct ib_mad_hdr *)VAR_10);
 }

 VAR_21 = FUNC_1(VAR_15->error_info_select_mask);


 if (VAR_21 & VAR_3)

  VAR_16->err_info_rcvport.status_and_code &= ~VAR_7;


 if (VAR_21 & VAR_0)




  FUNC_8(VAR_16, VAR_8,
     VAR_9);

 if (VAR_21 & VAR_4)
  VAR_16->err_info_xmit_constraint.status &= ~VAR_7;

 if (VAR_21 & VAR_2)
  VAR_16->err_info_rcv_constraint.status &= ~VAR_7;


 if (VAR_21 & VAR_5)

  VAR_16->err_info_uncorrectable &= ~VAR_7;


 if (VAR_21 & VAR_1)

  VAR_16->err_info_fmconfig &= ~VAR_7;

 if (VAR_13)
  *VAR_13 += sizeof(*VAR_15);

 return FUNC_7((struct ib_mad_hdr *)VAR_10);
}
