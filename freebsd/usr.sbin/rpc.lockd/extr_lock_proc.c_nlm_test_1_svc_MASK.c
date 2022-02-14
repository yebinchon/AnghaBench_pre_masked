
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct svc_req {int dummy; } ;
struct nlm_holder {int dummy; } ;
struct nlm4_lock {int dummy; } ;
struct nlm4_holder {int l_len; int l_offset; } ;
struct TYPE_12__ {int l_len; int l_offset; } ;
struct TYPE_8__ {TYPE_7__ holder; } ;
struct TYPE_9__ {TYPE_1__ nlm_testrply_u; int stat; } ;
struct TYPE_10__ {TYPE_2__ stat; int cookie; } ;
typedef TYPE_3__ nlm_testres ;
struct TYPE_11__ {int cookie; int exclusive; int alock; } ;
typedef TYPE_4__ nlm_testargs ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct svc_req*) ;
 int FUNC_1 (TYPE_7__*,struct nlm4_holder*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,struct nlm4_lock*) ;
 struct nlm4_holder* FUNC_3 (struct nlm4_lock*,int ,int ) ;

nlm_testres *
FUNC_4(nlm_testargs *VAR_3, struct svc_req *VAR_4)
{
 static nlm_testres VAR_5;
 struct nlm4_lock VAR_6;
 struct nlm4_holder *VAR_7;
 FUNC_2(&VAR_3->alock, &VAR_6);

 if (VAR_0)
  FUNC_0("nlm_test", VAR_4);

 VAR_7 = FUNC_3(&VAR_6, VAR_3->exclusive, 0);







 VAR_5.cookie = VAR_3->cookie;
 if (VAR_7 == ((void*)0)) {
  VAR_5.stat.stat = VAR_2;
 } else {
  VAR_5.stat.stat = VAR_1;
  FUNC_1(&VAR_5.stat.nlm_testrply_u.holder, VAR_7,
      sizeof(struct nlm_holder));
  VAR_5.stat.nlm_testrply_u.holder.l_offset = VAR_7->l_offset;
  VAR_5.stat.nlm_testrply_u.holder.l_len = VAR_7->l_len;
 }
 return (&VAR_5);
}
