
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct svc_req {int rq_proc; } ;
typedef int nlm4_unlockargs ;
typedef int nlm4_testres ;
typedef int nlm4_testargs ;
typedef int nlm4_shareres ;
typedef int nlm4_shareargs ;
typedef int nlm4_res ;
typedef int nlm4_notify ;
typedef int nlm4_lockargs ;
typedef int nlm4_cancargs ;
typedef scalar_t__ caddr_t ;
typedef scalar_t__ bool_t ;
typedef int argument ;
typedef int SVCXPRT ;
 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,void*,struct svc_req*) ;
 int FUNC_4 (struct svc_req*,int ,char*) ;
 int FUNC_5 (struct svc_req*) ;
 int FUNC_6 (struct svc_req*,int ,char*) ;
 int FUNC_7 (struct svc_req*,int ,char*) ;
 int FUNC_8 (struct svc_req*) ;
 int FUNC_9 (struct svc_req*) ;
 int FUNC_10 (struct svc_req*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;

void
FUNC_11(struct svc_req *VAR_29, SVCXPRT *VAR_30)
{
 union {
  nlm4_testargs nlm4_test_4_arg;
  nlm4_lockargs nlm4_lock_4_arg;
  nlm4_cancargs nlm4_cancel_4_arg;
  nlm4_unlockargs nlm4_unlock_4_arg;
  nlm4_testargs nlm4_granted_4_arg;
  nlm4_testargs nlm4_test_msg_4_arg;
  nlm4_lockargs nlm4_lock_msg_4_arg;
  nlm4_cancargs nlm4_cancel_msg_4_arg;
  nlm4_unlockargs nlm4_unlock_msg_4_arg;
  nlm4_testargs nlm4_granted_msg_4_arg;
  nlm4_testres nlm4_test_res_4_arg;
  nlm4_res nlm4_lock_res_4_arg;
  nlm4_res nlm4_cancel_res_4_arg;
  nlm4_res nlm4_unlock_res_4_arg;
  nlm4_res nlm4_granted_res_4_arg;
  nlm4_shareargs nlm4_share_4_arg;
  nlm4_shareargs nlm4_unshare_4_arg;
  nlm4_lockargs nlm4_nm_lock_4_arg;
  nlm4_notify nlm4_free_all_4_arg;
 } VAR_31;
 union {
  nlm4_testres nlm4_test_4_res;
  nlm4_res nlm4_lock_4_res;
  nlm4_res nlm4_cancel_4_res;
  nlm4_res nlm4_unlock_4_res;
  nlm4_res nlm4_granted_4_res;
  nlm4_shareres nlm4_share_4_res;
  nlm4_shareres nlm4_unshare_4_res;
  nlm4_res nlm4_nm_lock_4_res;
 } VAR_32;
 bool_t VAR_33;
 xdrproc_t VAR_34, VAR_35;
 bool_t (*VAR_36)(char *, void *, struct svc_req *);

 switch (VAR_29->rq_proc) {
 case 128:
  (void) FUNC_7(VAR_29,
   (xdrproc_t) VAR_28, (char *)((void*)0));
  FUNC_5(VAR_29);
  return;

 case 135:
  VAR_34 = (xdrproc_t) VAR_25;
  VAR_35 = (xdrproc_t) VAR_26;
  VAR_36 = (bool_t (*) (char *, void *, struct svc_req *))VAR_12;
  break;

 case 140:
  VAR_34 = (xdrproc_t) VAR_20;
  VAR_35 = (xdrproc_t) VAR_22;
  VAR_36 = (bool_t (*) (char *, void *, struct svc_req *))VAR_7;
  break;

 case 147:
  VAR_34 = (xdrproc_t) VAR_19;
  VAR_35 = (xdrproc_t) VAR_22;
  VAR_36 = (bool_t (*) (char *, void *, struct svc_req *))VAR_0;
  break;

 case 132:
  VAR_34 = (xdrproc_t) VAR_27;
  VAR_35 = (xdrproc_t) VAR_22;
  VAR_36 = (bool_t (*) (char *, void *, struct svc_req *))VAR_15;
  break;

 case 143:
  VAR_34 = (xdrproc_t) VAR_25;
  VAR_35 = (xdrproc_t) VAR_22;
  VAR_36 = (bool_t (*) (char *, void *, struct svc_req *))VAR_4;
  break;

 case 134:
  VAR_34 = (xdrproc_t) VAR_25;
  VAR_35 = (xdrproc_t) VAR_28;
  VAR_36 = (bool_t (*) (char *, void *, struct svc_req *))VAR_13;
  break;

 case 139:
  VAR_34 = (xdrproc_t) VAR_20;
  VAR_35 = (xdrproc_t) VAR_28;
  VAR_36 = (bool_t (*) (char *, void *, struct svc_req *))VAR_8;
  break;

 case 146:
  VAR_34 = (xdrproc_t) VAR_19;
  VAR_35 = (xdrproc_t) VAR_28;
  VAR_36 = (bool_t (*) (char *, void *, struct svc_req *))VAR_1;
  break;

 case 131:
  VAR_34 = (xdrproc_t) VAR_27;
  VAR_35 = (xdrproc_t) VAR_28;
  VAR_36 = (bool_t (*) (char *, void *, struct svc_req *))VAR_16;
  break;

 case 142:
  VAR_34 = (xdrproc_t) VAR_25;
  VAR_35 = (xdrproc_t) VAR_28;
  VAR_36 = (bool_t (*) (char *, void *, struct svc_req *))VAR_5;
  break;

 case 133:
  VAR_34 = (xdrproc_t) VAR_26;
  VAR_35 = (xdrproc_t) VAR_28;
  VAR_36 = (bool_t (*) (char *, void *, struct svc_req *))VAR_14;
  break;

 case 138:
  VAR_34 = (xdrproc_t) VAR_22;
  VAR_35 = (xdrproc_t) VAR_28;
  VAR_36 = (bool_t (*) (char *, void *, struct svc_req *))VAR_9;
  break;

 case 145:
  VAR_34 = (xdrproc_t) VAR_22;
  VAR_35 = (xdrproc_t) VAR_28;
  VAR_36 = (bool_t (*) (char *, void *, struct svc_req *))VAR_2;
  break;

 case 130:
  VAR_34 = (xdrproc_t) VAR_22;
  VAR_35 = (xdrproc_t) VAR_28;
  VAR_36 = (bool_t (*) (char *, void *, struct svc_req *))VAR_17;
  break;

 case 141:
  VAR_34 = (xdrproc_t) VAR_22;
  VAR_35 = (xdrproc_t) VAR_28;
  VAR_36 = (bool_t (*) (char *, void *, struct svc_req *))VAR_6;
  break;

 case 136:
  VAR_34 = (xdrproc_t) VAR_23;
  VAR_35 = (xdrproc_t) VAR_24;
  VAR_36 = (bool_t (*) (char *, void *, struct svc_req *))VAR_11;
  break;

 case 129:
  VAR_34 = (xdrproc_t) VAR_23;
  VAR_35 = (xdrproc_t) VAR_24;
  VAR_36 = (bool_t (*) (char *, void *, struct svc_req *))VAR_18;
  break;

 case 137:
  VAR_34 = (xdrproc_t) VAR_20;
  VAR_35 = (xdrproc_t) VAR_22;
  VAR_36 = (bool_t (*) (char *, void *, struct svc_req *))VAR_10;
  break;

 case 144:
  VAR_34 = (xdrproc_t) VAR_21;
  VAR_35 = (xdrproc_t) VAR_28;
  VAR_36 = (bool_t (*) (char *, void *, struct svc_req *))VAR_3;
  break;

 default:
  FUNC_9(VAR_29);
  FUNC_5(VAR_29);
  return;
 }
 (void) FUNC_0((char *)&VAR_31, 0, sizeof (VAR_31));
 if (!FUNC_6(VAR_29, VAR_34, (char *)(caddr_t) &VAR_31)) {
  FUNC_8(VAR_29);
  FUNC_5(VAR_29);
  return;
 }
 VAR_33 = (bool_t) (*VAR_36)((char *)&VAR_31, (void *)&VAR_32, VAR_29);
 if (VAR_33 > 0 && !FUNC_7(VAR_29, VAR_35, (char *)&VAR_32)) {
  FUNC_10(VAR_29);
 }
 if (!FUNC_4(VAR_29, VAR_34, (char *)(caddr_t) &VAR_31)) {
  FUNC_2("unable to free arguments");

 }
 FUNC_5(VAR_29);
 if (!FUNC_1(VAR_30, VAR_35, (caddr_t) &VAR_32))
  FUNC_2("unable to free results");

 return;
}
