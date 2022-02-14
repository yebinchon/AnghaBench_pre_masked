
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct ib_mad_agent {int flags; scalar_t__ hi_tid; scalar_t__ port_num; scalar_t__ qp; void* context; scalar_t__ send_handler; scalar_t__ recv_handler; struct ib_device* device; scalar_t__ rmpp_version; } ;
struct ib_mad_reg_req {int mgmt_class_version; scalar_t__ mgmt_class; struct ib_mad_agent agent; int agent_list; int comp; int refcount; int local_work; int local_list; int timed_work; int rmpp_list; int done_list; int wait_list; int send_list; int lock; struct ib_mad_reg_req* reg_req; TYPE_2__* qp_info; int oui; } ;
struct ib_mad_port_private {int reg_lock; int agent_list; TYPE_1__* version; TYPE_2__* qp_info; } ;
struct ib_mad_mgmt_vendor_class_table {struct ib_mad_mgmt_vendor_class** vendor_class; } ;
struct ib_mad_mgmt_vendor_class {int dummy; } ;
struct ib_mad_mgmt_method_table {int dummy; } ;
struct ib_mad_mgmt_class_table {struct ib_mad_mgmt_method_table** method_table; } ;
struct ib_mad_agent_private {int mgmt_class_version; scalar_t__ mgmt_class; struct ib_mad_agent agent; int agent_list; int comp; int refcount; int local_work; int local_list; int timed_work; int rmpp_list; int done_list; int wait_list; int send_list; int lock; struct ib_mad_agent_private* reg_req; TYPE_2__* qp_info; int oui; } ;
struct ib_device {int dev; } ;
typedef scalar_t__ ib_mad_send_handler ;
typedef scalar_t__ ib_mad_recv_handler ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;
struct TYPE_4__ {scalar_t__ qp; } ;
struct TYPE_3__ {struct ib_mad_mgmt_vendor_class_table* vendor; struct ib_mad_mgmt_class_table* class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ib_mad_agent* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct ib_mad_reg_req*,struct ib_mad_reg_req*,scalar_t__) ;
 int FUNC_5 (struct ib_mad_reg_req*,struct ib_mad_reg_req*) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *,char*,...) ;
 int FUNC_9 (int) ;
 struct ib_mad_port_private* FUNC_10 (struct ib_device*,scalar_t__) ;
 int FUNC_11 (int) ;
 scalar_t__ VAR_12 ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (struct ib_mad_mgmt_vendor_class*,struct ib_mad_reg_req*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct ib_mad_reg_req*) ;
 struct ib_mad_reg_req* FUNC_17 (struct ib_mad_reg_req*,int,int ) ;
 struct ib_mad_reg_req* FUNC_18 (int,int ) ;
 int FUNC_19 (int *,int *) ;
 int VAR_13 ;
 scalar_t__ FUNC_20 (struct ib_mad_mgmt_method_table**,struct ib_mad_reg_req*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,unsigned long) ;
 int FUNC_23 (int *,unsigned long) ;
 int VAR_14 ;
 scalar_t__ FUNC_24 (scalar_t__) ;

struct ib_mad_agent *FUNC_25(struct ib_device *VAR_15,
        u8 VAR_16,
        enum ib_qp_type VAR_17,
        struct ib_mad_reg_req *VAR_18,
        u8 VAR_19,
        ib_mad_send_handler VAR_20,
        ib_mad_recv_handler VAR_21,
        void *VAR_22,
        u32 VAR_23)
{
 struct ib_mad_port_private *VAR_24;
 struct ib_mad_agent *VAR_25 = FUNC_0(-VAR_0);
 struct ib_mad_agent_private *VAR_26;
 struct ib_mad_reg_req *VAR_27 = ((void*)0);
 struct ib_mad_mgmt_class_table *VAR_28;
 struct ib_mad_mgmt_vendor_class_table *VAR_29;
 struct ib_mad_mgmt_vendor_class *VAR_30;
 struct ib_mad_mgmt_method_table *VAR_31;
 int VAR_32, VAR_33;
 unsigned long VAR_34;
 u8 VAR_35, VAR_36;


 VAR_33 = FUNC_9(VAR_17);
 if (VAR_33 == -1) {
  FUNC_8(&VAR_15->dev,
      "ib_register_mad_agent: invalid QP Type %d\n",
      VAR_17);
  goto error1;
 }

 if (VAR_19 && VAR_19 != VAR_8) {
  FUNC_8(&VAR_15->dev,
      "ib_register_mad_agent: invalid RMPP Version %u\n",
      VAR_19);
  goto error1;
 }


 if (VAR_18) {
  if (VAR_18->mgmt_class_version >= VAR_11) {
   FUNC_8(&VAR_15->dev,
       "ib_register_mad_agent: invalid Class Version %u\n",
       VAR_18->mgmt_class_version);
   goto error1;
  }
  if (!VAR_21) {
   FUNC_8(&VAR_15->dev,
       "ib_register_mad_agent: no recv_handler\n");
   goto error1;
  }
  if (VAR_18->mgmt_class >= VAR_10) {




   if (VAR_18->mgmt_class !=
       VAR_6) {
    FUNC_8(&VAR_15->dev,
        "ib_register_mad_agent: Invalid Mgmt Class 0x%x\n",
        VAR_18->mgmt_class);
    goto error1;
   }
  } else if (VAR_18->mgmt_class == 0) {




   FUNC_8(&VAR_15->dev,
       "ib_register_mad_agent: Invalid Mgmt Class 0\n");
   goto error1;
  } else if (FUNC_13(VAR_18->mgmt_class)) {




   if (!FUNC_15(VAR_18->oui)) {
    FUNC_8(&VAR_15->dev,
        "ib_register_mad_agent: No OUI specified for class 0x%x\n",
        VAR_18->mgmt_class);
    goto error1;
   }
  }

  if (!FUNC_11(VAR_18->mgmt_class)) {
   if (VAR_19) {
    FUNC_8(&VAR_15->dev,
        "ib_register_mad_agent: RMPP version for non-RMPP class 0x%x\n",
        VAR_18->mgmt_class);
    goto error1;
   }
  }


  if (VAR_17 == VAR_9) {
   if ((VAR_18->mgmt_class !=
     VAR_7) &&
       (VAR_18->mgmt_class !=
     VAR_6)) {
    FUNC_8(&VAR_15->dev,
        "ib_register_mad_agent: Invalid SM QP type: class 0x%x\n",
        VAR_18->mgmt_class);
    goto error1;
   }
  } else {
   if ((VAR_18->mgmt_class ==
     VAR_7) ||
       (VAR_18->mgmt_class ==
     VAR_6)) {
    FUNC_8(&VAR_15->dev,
        "ib_register_mad_agent: Invalid GS QP type: class 0x%x\n",
        VAR_18->mgmt_class);
    goto error1;
   }
  }
 } else {

  if (!VAR_20)
   goto error1;
  if (VAR_23 & VAR_5)
   goto error1;
 }


 VAR_24 = FUNC_10(VAR_15, VAR_16);
 if (!VAR_24) {
  FUNC_8(&VAR_15->dev, "ib_register_mad_agent: Invalid port\n");
  VAR_25 = FUNC_0(-VAR_1);
  goto error1;
 }



 if (!VAR_24->qp_info[VAR_33].qp) {
  FUNC_8(&VAR_15->dev,
      "ib_register_mad_agent: QP %d not supported\n", VAR_33);
  VAR_25 = FUNC_0(-VAR_3);
  goto error1;
 }


 VAR_26 = FUNC_18(sizeof *VAR_26, VAR_4);
 if (!VAR_26) {
  VAR_25 = FUNC_0(-VAR_2);
  goto error1;
 }

 if (VAR_18) {
  VAR_27 = FUNC_17(VAR_18, sizeof *VAR_27, VAR_4);
  if (!VAR_27) {
   VAR_25 = FUNC_0(-VAR_2);
   goto error3;
  }
 }


 VAR_26->qp_info = &VAR_24->qp_info[VAR_33];
 VAR_26->reg_req = VAR_27;
 VAR_26->agent.rmpp_version = VAR_19;
 VAR_26->agent.device = VAR_15;
 VAR_26->agent.recv_handler = VAR_21;
 VAR_26->agent.send_handler = VAR_20;
 VAR_26->agent.context = VAR_22;
 VAR_26->agent.qp = VAR_24->qp_info[VAR_33].qp;
 VAR_26->agent.port_num = VAR_16;
 VAR_26->agent.flags = VAR_23;
 FUNC_21(&VAR_26->lock);
 FUNC_2(&VAR_26->send_list);
 FUNC_2(&VAR_26->wait_list);
 FUNC_2(&VAR_26->done_list);
 FUNC_2(&VAR_26->rmpp_list);
 FUNC_1(&VAR_26->timed_work, VAR_14);
 FUNC_2(&VAR_26->local_list);
 FUNC_3(&VAR_26->local_work, VAR_13);
 FUNC_6(&VAR_26->refcount, 1);
 FUNC_12(&VAR_26->comp);

 FUNC_22(&VAR_24->reg_lock, VAR_34);
 VAR_26->agent.hi_tid = ++VAR_12;





 if (VAR_18) {
  VAR_35 = FUNC_7(VAR_18->mgmt_class);
  if (!FUNC_13(VAR_35)) {
   VAR_28 = VAR_24->version[VAR_18->
         mgmt_class_version].class;
   if (VAR_28) {
    VAR_31 = VAR_28->method_table[VAR_35];
    if (VAR_31) {
     if (FUNC_20(&VAR_31,
          VAR_18))
      goto error4;
    }
   }
   VAR_32 = FUNC_4(VAR_18, VAR_26,
        VAR_35);
  } else {

   VAR_29 = VAR_24->version[VAR_18->
          mgmt_class_version].vendor;
   if (VAR_29) {
    VAR_36 = FUNC_24(VAR_35);
    VAR_30 = VAR_29->vendor_class[VAR_36];
    if (VAR_30) {
     if (FUNC_14(
       VAR_30,
       VAR_18))
      goto error4;
    }
   }
   VAR_32 = FUNC_5(VAR_18, VAR_26);
  }
  if (VAR_32) {
   VAR_25 = FUNC_0(VAR_32);
   goto error4;
  }
 }


 FUNC_19(&VAR_26->agent_list, &VAR_24->agent_list);
 FUNC_23(&VAR_24->reg_lock, VAR_34);

 return &VAR_26->agent;

error4:
 FUNC_23(&VAR_24->reg_lock, VAR_34);
 FUNC_16(VAR_27);
error3:
 FUNC_16(VAR_26);
error1:
 return VAR_25;
}
