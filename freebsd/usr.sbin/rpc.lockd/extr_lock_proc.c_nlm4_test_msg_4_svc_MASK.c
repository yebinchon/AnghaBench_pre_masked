
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int xdrproc_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct svc_req {int rq_xprt; } ;
struct sockaddr {int dummy; } ;
struct nlm4_holder {int dummy; } ;
struct TYPE_8__ {int holder; } ;
struct TYPE_9__ {TYPE_1__ nlm4_testrply_u; int stat; } ;
struct TYPE_10__ {TYPE_2__ stat; int cookie; } ;
typedef TYPE_3__ nlm4_testres ;
struct TYPE_11__ {int cookie; int exclusive; int alock; } ;
typedef TYPE_4__ nlm4_testargs ;
struct TYPE_12__ {struct sockaddr* buf; } ;
typedef int CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,TYPE_3__*,int ,char*,struct timeval) ;
 int VAR_4 ;
 int * FUNC_1 (struct sockaddr*,int ) ;
 int FUNC_2 (char*,struct svc_req*) ;
 int FUNC_3 (int *,struct nlm4_holder*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_5__* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 struct nlm4_holder* FUNC_6 (int *,int ,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

void *
FUNC_7(nlm4_testargs *VAR_9, struct svc_req *VAR_10)
{
 nlm4_testres VAR_11;
 static char VAR_12;
 struct sockaddr *VAR_13;
 CLIENT *VAR_14;
 int VAR_15;
 struct timeval VAR_16;
 struct nlm4_holder *VAR_17;

 if (VAR_4)
  FUNC_2("nlm4_test_msg", VAR_10);

 VAR_17 = FUNC_6(&VAR_9->alock, VAR_9->exclusive, VAR_0);

 VAR_11.cookie = VAR_9->cookie;
 if (VAR_17 == ((void*)0)) {
  VAR_11.stat.stat = VAR_6;
 } else {
  VAR_11.stat.stat = VAR_5;
  FUNC_3(&VAR_11.stat.nlm4_testrply_u.holder, VAR_17,
      sizeof(struct nlm4_holder));
 }





 VAR_13 = FUNC_4(VAR_10->rq_xprt)->buf;
 if ((VAR_14 = FUNC_1(VAR_13, VAR_3)) != ((void*)0)) {
  VAR_16.tv_sec = 0;
  VAR_16.tv_usec = 0;

  VAR_15 = FUNC_0(VAR_14, VAR_2,
      (xdrproc_t)VAR_7, &VAR_11,
      (xdrproc_t)VAR_8, &VAR_12, VAR_16);

  if (VAR_4 > 2)
   FUNC_5(VAR_1, "clnt_call returns %d", VAR_15);
 }
 return (((void*)0));
}
