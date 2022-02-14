
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xdrproc_t ;
typedef scalar_t__ u_long ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_2__ {scalar_t__ low; scalar_t__ high; } ;
struct rpc_err {TYPE_1__ re_vers; } ;
struct netconfig {int dummy; } ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef int CLIENT ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,char*,int ,char*,struct timeval) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_3 (char*,struct netconfig*,scalar_t__,scalar_t__) ;
 int FUNC_4 (int *,struct rpc_err*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,char*,char*) ;
 int FUNC_7 (int) ;
 struct netconfig* FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int *,scalar_t__,scalar_t__) ;
 int FUNC_12 () ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void
FUNC_13(char *VAR_8, char *VAR_9, int VAR_10, char **VAR_11)
{
 CLIENT *VAR_12;
 struct timeval VAR_13;
 enum clnt_stat VAR_14;
 u_long VAR_15, VAR_16, VAR_17, VAR_18;
 struct rpc_err VAR_19;
 int VAR_20 = 0;
 struct netconfig *VAR_21;
 int VAR_22;

 if (VAR_10 < 1 || VAR_10 > 2 || (VAR_9 == ((void*)0)))
  FUNC_12();
 VAR_21 = FUNC_8(VAR_9);
 if (VAR_21 == (struct netconfig *)((void*)0))
  FUNC_6(1, "could not find %s", VAR_9);
 VAR_13.tv_sec = 10;
 VAR_13.tv_usec = 0;
 VAR_15 = FUNC_9(VAR_11[0]);
 if (VAR_10 == 1) {




  VAR_16 = VAR_3;
 } else {
  VAR_16 = FUNC_10(VAR_11[1]);
 }
 VAR_12 = FUNC_3(VAR_8, VAR_21, VAR_15, VAR_16);
 VAR_14 = FUNC_0(VAR_12, VAR_4, (xdrproc_t) VAR_7,
   (char *)((void*)0), (xdrproc_t) VAR_7,
   (char *)((void*)0), VAR_13);
 if (VAR_10 == 2) {

  if (FUNC_11(VAR_12, VAR_15, VAR_16) < 0)
   VAR_20 = 1;
  (void) FUNC_2(VAR_12);
  if (VAR_20)
   FUNC_7(1);
  return;
 }

 (void) FUNC_1(VAR_12, VAR_1, (char *)((void*)0));
 (void) FUNC_1(VAR_12, VAR_0, (char *)&VAR_22);
 if (VAR_14 == VAR_5) {
  FUNC_4(VAR_12, &VAR_19);
  VAR_17 = VAR_19.re_vers.low;
  VAR_18 = VAR_19.re_vers.high;
 } else if (VAR_14 == VAR_6) {




  (void) FUNC_2(VAR_12);
  VAR_12 = FUNC_3(VAR_8, VAR_21, VAR_15, VAR_2);
  VAR_14 = FUNC_0(VAR_12, VAR_4, (xdrproc_t) VAR_7,
    (char *)((void*)0), (xdrproc_t) VAR_7,
    (char *)((void*)0), VAR_13);
  if (VAR_14 == VAR_5) {
   FUNC_4(VAR_12, &VAR_19);
   VAR_17 = VAR_19.re_vers.low;
   VAR_18 = VAR_19.re_vers.high;
  } else if (VAR_14 == VAR_6) {






   VAR_17 = 0;
   VAR_18 = VAR_2;
  } else {
   (void) FUNC_11(VAR_12, VAR_15, VAR_2);
   FUNC_7(1);
  }
 } else {
  (void) FUNC_11(VAR_12, VAR_15, (u_long)0);
  FUNC_7(1);
 }
 (void) FUNC_2(VAR_12);
 for (VAR_16 = VAR_17; VAR_16 <= VAR_18; VAR_16++) {
  VAR_12 = FUNC_3(VAR_8, VAR_21, VAR_15, VAR_16);
  VAR_14 = FUNC_0(VAR_12, VAR_4, (xdrproc_t) VAR_7,
    (char *)((void*)0), (xdrproc_t) VAR_7,
    (char *)((void*)0), VAR_13);
  if (FUNC_11(VAR_12, VAR_15, VAR_16) < 0)
    VAR_20 = 1;
  (void) FUNC_2(VAR_12);
 }
 (void) FUNC_5(VAR_22);
 if (VAR_20)
  FUNC_7(1);
 return;
}
