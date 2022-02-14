
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int xdrproc_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef int caddr_t ;
struct TYPE_6__ {int cl_auth; } ;
typedef TYPE_1__ CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,int ,int ,struct timeval) ;
 TYPE_1__* FUNC_3 (char*,int ,int ,char*,struct timeval*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (char*,char*,int ) ;
 scalar_t__ VAR_4 ;

int
FUNC_8(char *VAR_5) {
 enum clnt_stat VAR_6;
 struct timeval VAR_7;
 CLIENT *VAR_8;

 VAR_7.tv_sec = 3;
 VAR_7.tv_usec = 0;
 VAR_8 = FUNC_3(VAR_5, VAR_1, VAR_2, "udp",
     &VAR_7);
 if (VAR_8 == ((void*)0)) {
  FUNC_7("%s: %s", VAR_5, FUNC_5("MOUNTPROG"));
  return (0);
 }
 VAR_8->cl_auth = FUNC_1();
 VAR_6 = FUNC_2(VAR_8, VAR_0,
     (xdrproc_t)VAR_4, (caddr_t)0,
     (xdrproc_t)VAR_4, (caddr_t)0, VAR_7);
 if (VAR_6 != VAR_3)
  FUNC_7("%s: %s", VAR_5, FUNC_6(VAR_8, "MOUNTPROC_UMNTALL"));
 FUNC_0(VAR_8->cl_auth);
 FUNC_4(VAR_8);
 return (VAR_6 == VAR_3);
}
