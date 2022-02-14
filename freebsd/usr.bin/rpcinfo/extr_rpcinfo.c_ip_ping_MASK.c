
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xdrproc_t ;
typedef int u_short ;
typedef scalar_t__ u_long ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct sockaddr_in {void* sin_port; } ;
struct TYPE_2__ {scalar_t__ low; scalar_t__ high; } ;
struct rpc_err {TYPE_1__ re_vers; } ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef int CLIENT ;


 int FUNC_0 (int *,int ,int ,char*,int ,char*,struct timeval) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_3 (struct sockaddr_in*,scalar_t__,scalar_t__,int*,char const*) ;
 int FUNC_4 (int *,struct rpc_err*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct sockaddr_in*,char*) ;
 scalar_t__ FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*) ;
 void* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int *,scalar_t__,scalar_t__) ;
 int FUNC_12 () ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void
FUNC_13(u_short VAR_8, const char *VAR_9, int VAR_10, char **VAR_11)
{
 CLIENT *VAR_12;
 int VAR_13 = VAR_4;
 struct timeval VAR_14;
 struct sockaddr_in VAR_15;
 enum clnt_stat VAR_16;
 u_long VAR_17, VAR_18, VAR_19, VAR_20;
 struct rpc_err VAR_21;
 int VAR_22 = 0;

 if (VAR_10 < 2 || VAR_10 > 3)
  FUNC_12();
 VAR_14.tv_sec = 10;
 VAR_14.tv_usec = 0;
 VAR_17 = FUNC_8(VAR_11[1]);
 FUNC_7(&VAR_15, VAR_11[0]);
 if (VAR_10 == 2) {




  VAR_18 = VAR_2;
 } else {
  VAR_18 = FUNC_9(VAR_11[2]);
 }
 VAR_15.sin_port = FUNC_10(VAR_8);
 VAR_12 = FUNC_3(&VAR_15, VAR_17, VAR_18, &VAR_13, VAR_9);
 VAR_16 = FUNC_0(VAR_12, VAR_3, (xdrproc_t) VAR_7,
   (char *)((void*)0), (xdrproc_t) VAR_7, (char *)((void*)0),
   VAR_14);
 if (VAR_10 != 2) {

  if (FUNC_11(VAR_12, VAR_17, VAR_18) < 0)
   FUNC_6(1);
  (void) FUNC_2(VAR_12);
  return;
 }

 (void) FUNC_1(VAR_12, VAR_0, (char *)((void*)0));
 if (VAR_16 == VAR_5) {
  FUNC_4(VAR_12, &VAR_21);
  VAR_19 = VAR_21.re_vers.low;
  VAR_20 = VAR_21.re_vers.high;
 } else if (VAR_16 == VAR_6) {




  (void) FUNC_2(VAR_12);
  VAR_15.sin_port = FUNC_10(VAR_8);
  VAR_12 = FUNC_3(&VAR_15, VAR_17, VAR_1, &VAR_13, VAR_9);
  VAR_16 = FUNC_0(VAR_12, VAR_3, (xdrproc_t) VAR_7,
    (char *)((void*)0), (xdrproc_t) VAR_7,
    (char *)((void*)0), VAR_14);
  if (VAR_16 == VAR_5) {
   FUNC_4(VAR_12, &VAR_21);
   VAR_19 = VAR_21.re_vers.low;
   VAR_20 = VAR_21.re_vers.high;
  } else if (VAR_16 == VAR_6) {






   VAR_19 = 0;
   VAR_20 = VAR_1;
  } else {
   (void) FUNC_11(VAR_12, VAR_17, VAR_1);
   FUNC_6(1);
  }
 } else {
  (void) FUNC_11(VAR_12, VAR_17, (u_long)0);
  FUNC_6(1);
 }
 (void) FUNC_2(VAR_12);
 for (VAR_18 = VAR_19; VAR_18 <= VAR_20; VAR_18++) {
  VAR_15.sin_port = FUNC_10(VAR_8);
  VAR_12 = FUNC_3(&VAR_15, VAR_17, VAR_18, &VAR_13, VAR_9);
  VAR_16 = FUNC_0(VAR_12, VAR_3, (xdrproc_t) VAR_7,
    (char *)((void*)0), (xdrproc_t) VAR_7,
    (char *)((void*)0), VAR_14);
  if (FUNC_11(VAR_12, VAR_17, VAR_18) < 0)
    VAR_22 = 1;
  (void) FUNC_2(VAR_12);
 }
 if (VAR_22)
  FUNC_6(1);
 (void) FUNC_5(VAR_13);
 return;
}
