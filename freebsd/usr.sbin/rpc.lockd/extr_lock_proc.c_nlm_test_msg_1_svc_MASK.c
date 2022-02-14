
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int xdrproc_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct svc_req {int rq_xprt; } ;
struct sockaddr {int dummy; } ;
struct nlm_holder {int dummy; } ;
struct nlm4_lock {int dummy; } ;
struct nlm4_holder {int l_len; int l_offset; } ;
struct TYPE_14__ {int l_len; int l_offset; } ;
struct TYPE_9__ {TYPE_7__ holder; } ;
struct TYPE_10__ {TYPE_1__ nlm_testrply_u; int stat; } ;
struct TYPE_11__ {TYPE_2__ stat; int cookie; } ;
typedef TYPE_3__ nlm_testres ;
struct TYPE_12__ {int cookie; int exclusive; int alock; } ;
typedef TYPE_4__ nlm_testargs ;
struct TYPE_13__ {struct sockaddr* buf; } ;
typedef int CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,TYPE_3__*,int ,char*,struct timeval) ;
 int VAR_3 ;
 int * FUNC_1 (struct sockaddr*,int ) ;
 int FUNC_2 (char*,struct svc_req*) ;
 int FUNC_3 (TYPE_7__*,struct nlm4_holder*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,struct nlm4_lock*) ;
 TYPE_5__* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int) ;
 struct nlm4_holder* FUNC_7 (struct nlm4_lock*,int ,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

void *
FUNC_8(nlm_testargs *VAR_8, struct svc_req *VAR_9)
{
 nlm_testres VAR_10;
 static char VAR_11;
 struct sockaddr *VAR_12;
 CLIENT *VAR_13;
 int VAR_14;
 struct timeval VAR_15;
 struct nlm4_lock VAR_16;
 struct nlm4_holder *VAR_17;

 FUNC_4(&VAR_8->alock, &VAR_16);

 if (VAR_3)
  FUNC_2("nlm_test_msg", VAR_9);

 VAR_17 = FUNC_7(&VAR_16, VAR_8->exclusive, 0);

 VAR_10.cookie = VAR_8->cookie;
 if (VAR_17 == ((void*)0)) {
  VAR_10.stat.stat = VAR_5;
 } else {
  VAR_10.stat.stat = VAR_4;
  FUNC_3(&VAR_10.stat.nlm_testrply_u.holder, VAR_17,
      sizeof(struct nlm_holder));
  VAR_10.stat.nlm_testrply_u.holder.l_offset = VAR_17->l_offset;
  VAR_10.stat.nlm_testrply_u.holder.l_len = VAR_17->l_len;
 }





 VAR_12 = FUNC_5(VAR_9->rq_xprt)->buf;
 if ((VAR_13 = FUNC_1(VAR_12, VAR_2)) != ((void*)0)) {
  VAR_15.tv_sec = 0;
  VAR_15.tv_usec = 0;

  VAR_14 = FUNC_0(VAR_13, VAR_1,
      (xdrproc_t)VAR_6, &VAR_10,
      (xdrproc_t)VAR_7, &VAR_11, VAR_15);

  if (VAR_3 > 2)
   FUNC_6(VAR_0, "clnt_call returns %d", VAR_14);
 }
 return (((void*)0));
}
