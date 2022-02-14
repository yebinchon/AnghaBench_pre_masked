
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct svc_req {int rq_proc; } ;
struct nlm_sm_status {int dummy; } ;
typedef scalar_t__ caddr_t ;
typedef scalar_t__ bool_t ;
typedef int argument ;
typedef int SVCXPRT ;




 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,void*,struct svc_req*) ;
 int FUNC_3 (struct svc_req*,int ,char*) ;
 int FUNC_4 (struct svc_req*) ;
 int FUNC_5 (struct svc_req*,int ,char*) ;
 int FUNC_6 (struct svc_req*,int ,char*) ;
 int FUNC_7 (struct svc_req*) ;
 int FUNC_8 (struct svc_req*) ;
 int FUNC_9 (struct svc_req*) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_10(struct svc_req *VAR_3, SVCXPRT *VAR_4)
{
 union {
  struct nlm_sm_status nlm_sm_notify_0_arg;
 } VAR_5;
 char VAR_6;
 bool_t VAR_7;
 xdrproc_t VAR_8, VAR_9;
 bool_t (*VAR_10)(char *, void *, struct svc_req *);

 switch (VAR_3->rq_proc) {
 case 128:
  (void) FUNC_6(VAR_3,
   (xdrproc_t) VAR_2, (char *)((void*)0));
  FUNC_4(VAR_3);
  return;

 case 129:
  VAR_8 = (xdrproc_t) VAR_1;
  VAR_9 = (xdrproc_t) VAR_2;
  VAR_10 = (bool_t (*) (char *, void *, struct svc_req *))VAR_0;
  break;

 default:
  FUNC_8(VAR_3);
  FUNC_4(VAR_3);
  return;
 }
 (void) FUNC_0((char *)&VAR_5, 0, sizeof (VAR_5));
 if (!FUNC_5(VAR_3, VAR_8, (char *)(caddr_t) &VAR_5)) {
  FUNC_7(VAR_3);
  FUNC_4(VAR_3);
  return;
 }
 VAR_7 = (bool_t) (*VAR_10)((char *)&VAR_5, (void *)&VAR_6, VAR_3);
 if (VAR_7 > 0 && !FUNC_6(VAR_3, VAR_9, (char *)&VAR_6)) {
  FUNC_9(VAR_3);
 }
 if (!FUNC_3(VAR_3, VAR_8, (char *)(caddr_t) &VAR_5)) {
  FUNC_1("unable to free arguments");

 }
 FUNC_4(VAR_3);

 return;
}
