
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct timeval {int dummy; } ;
struct TYPE_7__ {size_t ss_len; } ;
struct ct_data {char const* ct_waitchan; int ct_lock; TYPE_1__* ct_backchannelxprt; int ct_waitflag; int ct_mcallc; int ct_xid; TYPE_3__ ct_addr; struct timeval ct_wait; void* ct_closeit; } ;
typedef void* bool_t ;
struct TYPE_6__ {scalar_t__ cl_private; } ;
struct TYPE_5__ {struct ct_data* xp_p2; } ;
typedef TYPE_1__ SVCXPRT ;
typedef TYPE_2__ CLIENT ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,TYPE_3__*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct timeval*) ;

__attribute__((used)) static bool_t
FUNC_6(CLIENT *VAR_4, u_int VAR_5, void *VAR_6)
{
 struct ct_data *VAR_7 = (struct ct_data *)VAR_4->cl_private;
 void *VAR_8 = VAR_6;
 SVCXPRT *VAR_9;

 FUNC_2(&VAR_7->ct_lock);

 switch (VAR_5) {
 case 136:
  VAR_7->ct_closeit = VAR_3;
  FUNC_3(&VAR_7->ct_lock);
  return (VAR_3);
 case 135:
  VAR_7->ct_closeit = VAR_1;
  FUNC_3(&VAR_7->ct_lock);
  return (VAR_3);
 default:
  break;
 }


 if (VAR_6 == ((void*)0)) {
  FUNC_3(&VAR_7->ct_lock);
  return (VAR_1);
 }
 switch (VAR_5) {
 case 131:
  if (FUNC_5((struct timeval *)VAR_6)) {
   FUNC_3(&VAR_7->ct_lock);
   return (VAR_1);
  }
  VAR_7->ct_wait = *(struct timeval *)VAR_8;
  break;
 case 141:
  *(struct timeval *)VAR_8 = VAR_7->ct_wait;
  break;
 case 143:
  (void) FUNC_1(VAR_6, &VAR_7->ct_addr, (size_t)VAR_7->ct_addr.ss_len);
  break;
 case 142:




  FUNC_1(VAR_6, &VAR_7->ct_addr, VAR_7->ct_addr.ss_len);
  break;
 case 132:
  FUNC_3(&VAR_7->ct_lock);
  return (VAR_1);
 case 138:
  *(uint32_t *)VAR_6 = VAR_7->ct_xid;
  break;
 case 128:


  VAR_7->ct_xid = *(uint32_t *)VAR_6 - 1;
  break;
 case 140:






  *(uint32_t *)VAR_6 =
      FUNC_4(*(uint32_t *)(void *)(VAR_7->ct_mcallc +
      4 * VAR_0));
  break;

 case 130:
  *(uint32_t *)(void *)(VAR_7->ct_mcallc +
      4 * VAR_0) =
      FUNC_0(*(uint32_t *)VAR_6);
  break;

 case 144:






  *(uint32_t *)VAR_6 =
      FUNC_4(*(uint32_t *)(void *)(VAR_7->ct_mcallc +
      3 * VAR_0));
  break;

 case 133:
  *(uint32_t *)(void *)(VAR_7->ct_mcallc +
      3 * VAR_0) =
      FUNC_0(*(uint32_t *)VAR_6);
  break;

 case 129:
  VAR_7->ct_waitchan = (const char *)VAR_6;
  break;

 case 139:
  *(const char **) VAR_6 = VAR_7->ct_waitchan;
  break;

 case 134:
  if (*(int *) VAR_6)
   VAR_7->ct_waitflag = VAR_2;
  else
   VAR_7->ct_waitflag = 0;
  break;

 case 145:
  if (VAR_7->ct_waitflag)
   *(int *) VAR_6 = VAR_3;
  else
   *(int *) VAR_6 = VAR_1;
  break;

 case 137:
  VAR_9 = (SVCXPRT *)VAR_6;
  if (VAR_7->ct_backchannelxprt == ((void*)0)) {
   VAR_9->xp_p2 = VAR_7;
   VAR_7->ct_backchannelxprt = VAR_9;
  }
  break;

 default:
  FUNC_3(&VAR_7->ct_lock);
  return (VAR_1);
 }

 FUNC_3(&VAR_7->ct_lock);
 return (VAR_3);
}
