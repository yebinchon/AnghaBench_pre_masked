
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct svc_req {int rq_proc; } ;
typedef int nlm_shareres ;
typedef int nlm_shareargs ;
typedef int nlm_res ;
typedef int nlm_notify ;
typedef int nlm_lockargs ;
typedef scalar_t__ caddr_t ;
typedef scalar_t__ bool_t ;
typedef int argument ;
typedef int SVCXPRT ;
 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct svc_req*,int *) ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,void*,struct svc_req*) ;
 int FUNC_5 (struct svc_req*,int ,char*) ;
 int FUNC_6 (struct svc_req*) ;
 int FUNC_7 (struct svc_req*,int ,char*) ;
 int FUNC_8 (struct svc_req*,int ,char*) ;
 int FUNC_9 (struct svc_req*) ;
 int FUNC_10 (struct svc_req*) ;
 int FUNC_11 (struct svc_req*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void
FUNC_12(struct svc_req *VAR_10, SVCXPRT *VAR_11)
{
 union {
  nlm_shareargs nlm_share_3_arg;
  nlm_shareargs nlm_unshare_3_arg;
  nlm_lockargs nlm_nm_lock_3_arg;
  nlm_notify nlm_free_all_3_arg;
 } VAR_12;
 union {
  nlm_shareres nlm_share_3_res;
  nlm_shareres nlm_unshare_3_res;
  nlm_res nlm_nm_lock_3_res;
 } VAR_13;
 bool_t VAR_14;
 xdrproc_t VAR_15, VAR_16;
 bool_t (*VAR_17)(char *, void *, struct svc_req *);

 switch (VAR_10->rq_proc) {
 case 128:
  (void) FUNC_8(VAR_10,
   (xdrproc_t) VAR_9, (char *)((void*)0));
  FUNC_6(VAR_10);
  return;

 case 135:
 case 140:
 case 147:
 case 132:
 case 143:
 case 134:
 case 139:
 case 146:
 case 131:
 case 142:
 case 133:
 case 138:
 case 145:
 case 130:
 case 141:
  FUNC_1(VAR_10, VAR_11);
  return;

 case 136:
  VAR_15 = (xdrproc_t) VAR_7;
  VAR_16 = (xdrproc_t) VAR_8;
  VAR_17 = (bool_t (*) (char *, void *, struct svc_req *))VAR_2;
  break;

 case 129:
  VAR_15 = (xdrproc_t) VAR_7;
  VAR_16 = (xdrproc_t) VAR_8;
  VAR_17 = (bool_t (*) (char *, void *, struct svc_req *))VAR_3;
  break;

 case 137:
  VAR_15 = (xdrproc_t) VAR_4;
  VAR_16 = (xdrproc_t) VAR_6;
  VAR_17 = (bool_t (*) (char *, void *, struct svc_req *))VAR_1;
  break;

 case 144:
  VAR_15 = (xdrproc_t) VAR_5;
  VAR_16 = (xdrproc_t) VAR_9;
  VAR_17 = (bool_t (*) (char *, void *, struct svc_req *))VAR_0;
  break;

 default:
  FUNC_10(VAR_10);
  FUNC_6(VAR_10);
  return;
 }
 (void) FUNC_0((char *)&VAR_12, 0, sizeof (VAR_12));
 if (!FUNC_7(VAR_10, VAR_15, (char *)(caddr_t) &VAR_12)) {
  FUNC_9(VAR_10);
  FUNC_6(VAR_10);
  return;
 }
 VAR_14 = (bool_t) (*VAR_17)((char *)&VAR_12, (void *)&VAR_13, VAR_10);
 if (VAR_14 > 0 && !FUNC_8(VAR_10, VAR_16, (char *)&VAR_13)) {
  FUNC_11(VAR_10);
 }
 if (!FUNC_5(VAR_10, VAR_15, (char *)(caddr_t) &VAR_12)) {
  FUNC_3("unable to free arguments");

 }
 FUNC_6(VAR_10);
 if (!FUNC_2(VAR_11, VAR_16, (caddr_t) &VAR_13))
  FUNC_3("unable to free results");

 return;
}
