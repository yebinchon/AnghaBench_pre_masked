
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {scalar_t__ sa_family; } ;
struct request_info {int dummy; } ;
struct pmap {int pm_prog; } ;
struct netbuf {scalar_t__ buf; } ;
typedef int rpcprog_t ;
typedef int const rpcproc_t ;
struct TYPE_2__ {int r_prog; } ;
typedef TYPE_1__ rpcb ;
typedef int SVCXPRT ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct request_info*) ;
 int VAR_5 ;
 int FUNC_1 (struct netbuf*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,struct sockaddr*,int const,int ,char*) ;
 int FUNC_3 (struct request_info*,int ,char*,int ,struct sockaddr*,int ) ;
 int FUNC_4 (struct request_info*) ;
 struct netbuf* FUNC_5 (int *) ;
 scalar_t__ VAR_8 ;

int
FUNC_6(SVCXPRT *VAR_9, rpcproc_t VAR_10, void *VAR_11, unsigned int VAR_12)
{
 struct netbuf *VAR_13 = FUNC_5(VAR_9);
 struct sockaddr *VAR_14 = (struct sockaddr *)VAR_13->buf;



 rpcprog_t VAR_15 = 0;
 rpcb *VAR_16;
 struct pmap *VAR_17;





 switch (VAR_10) {
 case 137:
 case 131:
 case 128:
  if (VAR_12 > VAR_1) {
   VAR_16 = (rpcb *)VAR_11;
   VAR_15 = VAR_16->r_prog;
  } else {
   VAR_17 = (struct pmap *)VAR_11;
   VAR_15 = VAR_17->pm_prog;
  }
  if (VAR_10 == 137)
   break;
  if (!VAR_5 && !FUNC_1(VAR_13)) {
   if (VAR_8)
    FUNC_2(VAR_7, VAR_14, VAR_10, VAR_15,
        " declined (non-loopback sender)");
   return 0;
  }
  break;
 case 139:
 case 132:
 case 138:
 case 134:
 case 129:
 case 130:
 case 133:
 case 136:
 case 135:
 default:
  break;
 }
 if (VAR_8)
  FUNC_2(VAR_7, VAR_14, VAR_10, VAR_15, "");
     return 1;
}
