
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct svc_req {int dummy; } ;
struct nlm4_holder {int dummy; } ;
struct TYPE_8__ {int holder; } ;
struct TYPE_9__ {TYPE_1__ nlm4_testrply_u; int stat; } ;
struct TYPE_10__ {TYPE_2__ stat; int cookie; } ;
typedef TYPE_3__ nlm4_testres ;
struct TYPE_12__ {char* caller_name; char* svid; scalar_t__ l_len; scalar_t__ l_offset; int oh; int fh; } ;
struct TYPE_11__ {int cookie; scalar_t__ exclusive; TYPE_5__ alock; } ;
typedef TYPE_4__ nlm4_testargs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct svc_req*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct nlm4_holder*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,...) ;
 struct nlm4_holder* FUNC_4 (TYPE_5__*,scalar_t__,int ) ;

nlm4_testres *
FUNC_5(nlm4_testargs *VAR_5, struct svc_req *VAR_6)
{
 static nlm4_testres VAR_7;
 struct nlm4_holder *VAR_8;

 if (VAR_2)
  FUNC_0("nlm4_test", VAR_6);
 if (VAR_2 > 5) {
  FUNC_3(VAR_1, "Locking arguments:\n");
  FUNC_1(&(VAR_5->cookie));
  FUNC_3(VAR_1, "Alock arguments:\n");
  FUNC_3(VAR_1, "Caller Name: %s\n",VAR_5->alock.caller_name);
  FUNC_3(VAR_1, "File Handle:\n");
  FUNC_1(&(VAR_5->alock.fh));
  FUNC_3(VAR_1, "Owner Handle:\n");
  FUNC_1(&(VAR_5->alock.oh));
  FUNC_3(VAR_1, "SVID:        %d\n", VAR_5->alock.svid);
  FUNC_3(VAR_1, "Lock Offset: %llu\n",
      (unsigned long long)VAR_5->alock.l_offset);
  FUNC_3(VAR_1, "Lock Length: %llu\n",
      (unsigned long long)VAR_5->alock.l_len);
  FUNC_3(VAR_1, "Exclusive:   %s\n",
      (VAR_5->exclusive ? "true" : "false"));
 }

 VAR_8 = FUNC_4(&VAR_5->alock, VAR_5->exclusive, VAR_0);
 VAR_7.cookie = VAR_5->cookie;
 if (VAR_8 == ((void*)0)) {
  VAR_7.stat.stat = VAR_4;
 } else {
  VAR_7.stat.stat = VAR_3;
  FUNC_2(&VAR_7.stat.nlm4_testrply_u.holder, VAR_8,
      sizeof(struct nlm4_holder));
 }
 return (&VAR_7);
}
