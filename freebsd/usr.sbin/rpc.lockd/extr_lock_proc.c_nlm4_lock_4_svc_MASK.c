
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct svc_req {int dummy; } ;
struct TYPE_9__ {int stat; } ;
struct TYPE_10__ {TYPE_2__ stat; int cookie; } ;
typedef TYPE_3__ nlm4_res ;
struct TYPE_8__ {char* caller_name; char* svid; scalar_t__ l_len; scalar_t__ l_offset; int oh; int fh; } ;
struct TYPE_11__ {char* state; int cookie; scalar_t__ reclaim; scalar_t__ exclusive; scalar_t__ block; TYPE_1__ alock; } ;
typedef TYPE_4__ nlm4_lockargs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,struct svc_req*,int) ;
 int FUNC_1 (char*,struct svc_req*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,...) ;

nlm4_res *
FUNC_4(nlm4_lockargs *VAR_4, struct svc_req *VAR_5)
{
 static nlm4_res VAR_6;

 if (VAR_3)
  FUNC_1("nlm4_lock", VAR_5);
 if (VAR_3 > 5) {
  FUNC_3(VAR_2, "Locking arguments:\n");
  FUNC_2(&(VAR_4->cookie));
  FUNC_3(VAR_2, "Alock arguments:\n");
  FUNC_3(VAR_2, "Caller Name: %s\n",VAR_4->alock.caller_name);
  FUNC_3(VAR_2, "File Handle:\n");
  FUNC_2(&(VAR_4->alock.fh));
  FUNC_3(VAR_2, "Owner Handle:\n");
  FUNC_2(&(VAR_4->alock.oh));
  FUNC_3(VAR_2, "SVID:        %d\n", VAR_4->alock.svid);
  FUNC_3(VAR_2, "Lock Offset: %llu\n",
      (unsigned long long)VAR_4->alock.l_offset);
  FUNC_3(VAR_2, "Lock Length: %llu\n",
      (unsigned long long)VAR_4->alock.l_len);
  FUNC_3(VAR_2, "Block:       %s\n", (VAR_4->block ? "true" : "false"));
  FUNC_3(VAR_2, "Exclusive:   %s\n", (VAR_4->exclusive ? "true" : "false"));
  FUNC_3(VAR_2, "Reclaim:     %s\n", (VAR_4->reclaim ? "true" : "false"));
  FUNC_3(VAR_2, "State num:   %d\n", VAR_4->state);
 }


 VAR_6.cookie = VAR_4->cookie;

 VAR_6.stat.stat = FUNC_0(VAR_4, VAR_5, VAR_0 | VAR_1);
 return (&VAR_6);
}
