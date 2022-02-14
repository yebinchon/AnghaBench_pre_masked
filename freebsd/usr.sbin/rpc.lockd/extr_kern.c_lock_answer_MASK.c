
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_5__ {int pid; int msg_seq; } ;
struct lockd_ans {int la_set_getlk_pid; int la_getlk_pid; TYPE_2__ la_msg_ident; void* la_errno; } ;
struct TYPE_4__ {int n_len; int n_bytes; } ;
typedef TYPE_1__ netobj ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_1 (int ,struct lockd_ans*) ;
 int FUNC_2 (int ,char*,...) ;

int
FUNC_3(int VAR_15, netobj *VAR_16, int VAR_17, int *VAR_18, int VAR_19)
{
 struct lockd_ans VAR_20;

 if (VAR_16->n_len != sizeof(VAR_20.la_msg_ident)) {
  if (VAR_15 == -1) {
   FUNC_2(VAR_10, "inedible nlm cookie");
   return -1;
  }
  VAR_20.la_msg_ident.pid = VAR_15;
  VAR_20.la_msg_ident.msg_seq = -1;
 } else {
  FUNC_0(&VAR_20.la_msg_ident, VAR_16->n_bytes,
      sizeof(VAR_20.la_msg_ident));
 }

 if (VAR_13)
  FUNC_2(VAR_9, "lock answer: pid %lu: %s %d",
      (unsigned long)VAR_20.la_msg_ident.pid,
      VAR_19 == VAR_12 ? "nlmv4" : "nlmv3",
      VAR_17);

 VAR_20.la_set_getlk_pid = 0;
 if (VAR_19 == VAR_12)
  switch (VAR_17) {
  case 136:
   VAR_20.la_errno = 0;
   break;
  default:
   VAR_20.la_errno = VAR_0;
   break;
  case 141:
   if (VAR_18 == ((void*)0))
    VAR_20.la_errno = VAR_1;
   else {

    VAR_20.la_set_getlk_pid = 1;
    VAR_20.la_getlk_pid = *VAR_18;
    VAR_20.la_errno = 0;
   }
   break;
  case 139:
   VAR_20.la_errno = VAR_1;
   break;
  case 143:
   return -1;

  case 140:
   VAR_20.la_errno = VAR_1;
   break;
  case 142:
   VAR_20.la_errno = VAR_2;
   break;
  case 135:
   VAR_20.la_errno = VAR_5;
   break;
  case 134:
   VAR_20.la_errno = VAR_7;
   break;
  case 137:
   VAR_20.la_errno = VAR_3;
   break;
  case 138:
   VAR_20.la_errno = VAR_0;
   break;
  }
 else
  switch (VAR_17) {
  case 128:
   VAR_20.la_errno = 0;
   break;
  default:
   VAR_20.la_errno = VAR_0;
   break;
  case 131:
   if (VAR_18 == ((void*)0))
    VAR_20.la_errno = VAR_1;
   else {

    VAR_20.la_set_getlk_pid = 1;
    VAR_20.la_getlk_pid = *VAR_18;
    VAR_20.la_errno = 0;
   }
   break;
  case 129:
   VAR_20.la_errno = VAR_1;
   break;
  case 133:
   return -1;

  case 130:
   VAR_20.la_errno = VAR_1;
   break;
  case 132:
   VAR_20.la_errno = VAR_2;
   break;
  }

 if (FUNC_1(VAR_8, &VAR_20)) {
  FUNC_2(((VAR_14 == VAR_4 || VAR_14 == VAR_6) ?
   VAR_11 : VAR_10),
   "process %lu: %m", (u_long)VAR_20.la_msg_ident.pid);
  return -1;
 }
 return 0;
}
