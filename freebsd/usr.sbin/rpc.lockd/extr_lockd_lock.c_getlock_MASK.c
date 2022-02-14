
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct svc_req {int rq_xprt; } ;
struct sockaddr {int dummy; } ;
struct file_lock {int dummy; } ;
struct TYPE_6__ {int n_len; scalar_t__ n_bytes; } ;
struct TYPE_7__ {int l_len; int l_offset; int svid; TYPE_1__ fh; int caller_name; int oh; } ;
struct TYPE_8__ {scalar_t__ reclaim; int block; int state; TYPE_2__ alock; int exclusive; int cookie; } ;
typedef TYPE_3__ nlm4_lockargs ;
typedef int fhandle_t ;
typedef enum nlm_stats { ____Placeholder_nlm_stats } nlm_stats ;
struct TYPE_9__ {scalar_t__ buf; } ;


 int const VAR_0 ;
 int VAR_1 ;
 struct file_lock* FUNC_0 (int *,int *,struct sockaddr*,int ) ;
 int FUNC_1 (struct file_lock*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct file_lock*) ;
 int VAR_2 ;
 int FUNC_4 (struct file_lock*,int *,int ,int ,int ,int ,int ,int ,int const,int ) ;
 scalar_t__ VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 TYPE_4__* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,int ) ;

enum nlm_stats
FUNC_10(nlm4_lockargs *VAR_8, struct svc_req *VAR_9, const int VAR_10)
{
 struct file_lock *VAR_11;
 enum nlm_stats VAR_12;

 FUNC_2("Entering getlock...\n");

 if (VAR_3 == 0 && VAR_8->reclaim == 0)
  return (VAR_10 & VAR_0) ?
      VAR_4 : VAR_6;


 VAR_11 = FUNC_0(&VAR_8->alock.oh, &VAR_8->cookie,
       (struct sockaddr *)FUNC_8(VAR_9->rq_xprt)->buf, VAR_8->alock.caller_name);
 if (VAR_11 == ((void*)0)) {
  FUNC_9(VAR_1, "lock allocate failed: %s", FUNC_7(VAR_2));

  return (VAR_10 & VAR_0) ?
      VAR_5 : VAR_7;
 }

 if (VAR_8->alock.fh.n_len != sizeof(fhandle_t)) {
  FUNC_2("received fhandle size %d, local size %d",
      VAR_8->alock.fh.n_len, (int)sizeof(fhandle_t));
 }

 FUNC_4(VAR_11, (fhandle_t *)VAR_8->alock.fh.n_bytes,
     VAR_8->exclusive, VAR_8->alock.svid, VAR_8->alock.l_offset,
     VAR_8->alock.l_len,
     VAR_8->state, 0, VAR_10, VAR_8->block);






 FUNC_5();
 FUNC_2("Pointer to new lock is %p\n",VAR_11);

 VAR_12 = FUNC_3(VAR_11);

 FUNC_2("Pointer to new lock is %p\n",VAR_11);
 FUNC_6();

 switch (VAR_12)
  {
  case 128:


   break;
  case 129:


   break;
  default:
   FUNC_1(VAR_11);
   break;
  }

 FUNC_2("Exiting getlock...\n");

 return VAR_12;
}
