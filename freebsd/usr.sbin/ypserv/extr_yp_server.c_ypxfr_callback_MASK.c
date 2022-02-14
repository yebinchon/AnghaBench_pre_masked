
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ypxfrstat ;
struct TYPE_3__ {unsigned int transid; int status; } ;
typedef TYPE_1__ yppushresp_xfr ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct sockaddr_in {int sin_addr; int sin_port; } ;
struct rpc_err {scalar_t__ re_status; } ;
typedef int CLIENT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ,struct timeval*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct rpc_err*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char*) ;
 int * FUNC_5 (struct sockaddr_in*,unsigned int,int,struct timeval,int*) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,...) ;
 int * FUNC_9 (TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_10(ypxfrstat VAR_5, struct sockaddr_in *VAR_6, unsigned int VAR_7,
    unsigned int VAR_8, unsigned long VAR_9)
{
 CLIENT *VAR_10;
 int VAR_11 = VAR_2;
 struct timeval VAR_12;
 yppushresp_xfr VAR_13;
 struct rpc_err VAR_14;

 VAR_12.tv_sec = 5;
 VAR_12.tv_usec = 0;
 VAR_6->sin_port = FUNC_6(VAR_9);

 if ((VAR_10 = FUNC_5(VAR_6,VAR_8,1,VAR_12,&VAR_11)) == ((void*)0)) {
  FUNC_8("%s: %s", FUNC_7(VAR_6->sin_addr),
    FUNC_3("failed to establish callback handle"));
  return;
 }

 VAR_13.status = VAR_5;
 VAR_13.transid = VAR_7;


 VAR_12.tv_sec = 0;
 if (FUNC_0(VAR_10, VAR_0, &VAR_12) == VAR_1)
  FUNC_8("failed to set timeout on ypproc_xfr callback");

 if (FUNC_9(&VAR_13, VAR_10) == ((void*)0)) {
  FUNC_2(VAR_10, &VAR_14);
  if (VAR_14.re_status != VAR_3 &&
      VAR_14.re_status != VAR_4)
   FUNC_8("%s", FUNC_4(VAR_10,
    "ypxfr callback failed"));
 }

 FUNC_1(VAR_10);
 return;
}
