
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct svc_req {int rq_proc; } ;
struct nlm_unlockargs {int dummy; } ;
struct nlm_testargs {int dummy; } ;
struct nlm_lockargs {int dummy; } ;
struct nlm_cancargs {int dummy; } ;
typedef int nlm_testres ;
typedef int nlm_res ;
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
 int FUNC_1 (int *,int ,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,void*,struct svc_req*) ;
 int FUNC_4 (struct svc_req*,int ,char*) ;
 int FUNC_5 (struct svc_req*) ;
 int FUNC_6 (struct svc_req*,int ,char*) ;
 int FUNC_7 (struct svc_req*,int ,char*) ;
 int FUNC_8 (struct svc_req*) ;
 int FUNC_9 (struct svc_req*) ;
 int FUNC_10 (struct svc_req*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

void
FUNC_11(struct svc_req *VAR_22, SVCXPRT *VAR_23)
{
 union {
  struct nlm_testargs nlm_test_1_arg;
  struct nlm_lockargs nlm_lock_1_arg;
  struct nlm_cancargs nlm_cancel_1_arg;
  struct nlm_unlockargs nlm_unlock_1_arg;
  struct nlm_testargs nlm_granted_1_arg;
  struct nlm_testargs nlm_test_msg_1_arg;
  struct nlm_lockargs nlm_lock_msg_1_arg;
  struct nlm_cancargs nlm_cancel_msg_1_arg;
  struct nlm_unlockargs nlm_unlock_msg_1_arg;
  struct nlm_testargs nlm_granted_msg_1_arg;
  nlm_testres nlm_test_res_1_arg;
  nlm_res nlm_lock_res_1_arg;
  nlm_res nlm_cancel_res_1_arg;
  nlm_res nlm_unlock_res_1_arg;
  nlm_res nlm_granted_res_1_arg;
 } VAR_24;
 union {
  nlm_testres nlm_test_1_res;
  nlm_res nlm_lock_1_res;
  nlm_res nlm_cancel_1_res;
  nlm_res nlm_unlock_1_res;
  nlm_res nlm_granted_1_res;
 } VAR_25;
 bool_t VAR_26;
 xdrproc_t VAR_27, VAR_28;
 bool_t (*VAR_29)(char *, void *, struct svc_req *);

 switch (VAR_22->rq_proc) {
 case 128:
  (void) FUNC_7(VAR_22,
   (xdrproc_t) VAR_21, (char *)((void*)0));
  FUNC_5(VAR_22);
  return;

 case 134:
  VAR_27 = (xdrproc_t) VAR_18;
  VAR_28 = (xdrproc_t) VAR_19;
  VAR_29 = (bool_t (*) (char *, void *, struct svc_req *))VAR_9;
  break;

 case 137:
  VAR_27 = (xdrproc_t) VAR_16;
  VAR_28 = (xdrproc_t) VAR_17;
  VAR_29 = (bool_t (*) (char *, void *, struct svc_req *))VAR_6;
  break;

 case 143:
  VAR_27 = (xdrproc_t) VAR_15;
  VAR_28 = (xdrproc_t) VAR_17;
  VAR_29 = (bool_t (*) (char *, void *, struct svc_req *))VAR_0;
  break;

 case 131:
  VAR_27 = (xdrproc_t) VAR_20;
  VAR_28 = (xdrproc_t) VAR_17;
  VAR_29 = (bool_t (*) (char *, void *, struct svc_req *))VAR_12;
  break;

 case 140:
  VAR_27 = (xdrproc_t) VAR_18;
  VAR_28 = (xdrproc_t) VAR_17;
  VAR_29 = (bool_t (*) (char *, void *, struct svc_req *))VAR_3;
  break;

 case 133:
  VAR_27 = (xdrproc_t) VAR_18;
  VAR_28 = (xdrproc_t) VAR_21;
  VAR_29 = (bool_t (*) (char *, void *, struct svc_req *))VAR_10;
  break;

 case 136:
  VAR_27 = (xdrproc_t) VAR_16;
  VAR_28 = (xdrproc_t) VAR_21;
  VAR_29 = (bool_t (*) (char *, void *, struct svc_req *))VAR_7;
  break;

 case 142:
  VAR_27 = (xdrproc_t) VAR_15;
  VAR_28 = (xdrproc_t) VAR_21;
  VAR_29 = (bool_t (*) (char *, void *, struct svc_req *))VAR_1;
  break;

 case 130:
  VAR_27 = (xdrproc_t) VAR_20;
  VAR_28 = (xdrproc_t) VAR_21;
  VAR_29 = (bool_t (*) (char *, void *, struct svc_req *))VAR_13;
  break;

 case 139:
  VAR_27 = (xdrproc_t) VAR_18;
  VAR_28 = (xdrproc_t) VAR_21;
  VAR_29 = (bool_t (*) (char *, void *, struct svc_req *))VAR_4;
  break;

 case 132:
  VAR_27 = (xdrproc_t) VAR_19;
  VAR_28 = (xdrproc_t) VAR_21;
  VAR_29 = (bool_t (*) (char *, void *, struct svc_req *))VAR_11;
  break;

 case 135:
  VAR_27 = (xdrproc_t) VAR_17;
  VAR_28 = (xdrproc_t) VAR_21;
  VAR_29 = (bool_t (*) (char *, void *, struct svc_req *))VAR_8;
  break;

 case 141:
  VAR_27 = (xdrproc_t) VAR_17;
  VAR_28 = (xdrproc_t) VAR_21;
  VAR_29 = (bool_t (*) (char *, void *, struct svc_req *))VAR_2;
  break;

 case 129:
  VAR_27 = (xdrproc_t) VAR_17;
  VAR_28 = (xdrproc_t) VAR_21;
  VAR_29 = (bool_t (*) (char *, void *, struct svc_req *))VAR_14;
  break;

 case 138:
  VAR_27 = (xdrproc_t) VAR_17;
  VAR_28 = (xdrproc_t) VAR_21;
  VAR_29 = (bool_t (*) (char *, void *, struct svc_req *))VAR_5;
  break;

 default:
  FUNC_9(VAR_22);
  FUNC_5(VAR_22);
  return;
 }
 (void) FUNC_0((char *)&VAR_24, 0, sizeof (VAR_24));
 if (!FUNC_6(VAR_22, VAR_27, (char *)(caddr_t) &VAR_24)) {
  FUNC_8(VAR_22);
  FUNC_5(VAR_22);
  return;
 }
 VAR_26 = (bool_t) (*VAR_29)((char *)&VAR_24, (void *)&VAR_25, VAR_22);
 if (VAR_26 > 0 && !FUNC_7(VAR_22, VAR_28, (char *)&VAR_25)) {
  FUNC_10(VAR_22);
 }
 if (!FUNC_4(VAR_22, VAR_27, (char *)(caddr_t) &VAR_24)) {
  FUNC_2("unable to free arguments");

 }
 FUNC_5(VAR_22);
 if (!FUNC_1(VAR_23, VAR_28, (caddr_t) &VAR_25))
  FUNC_2("unable to free results");

 return;
}
