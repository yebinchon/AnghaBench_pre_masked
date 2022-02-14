
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


 int FUNC_0 (int *,int ,int ,char*,int ,char*,struct timeval) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_3 (char*,scalar_t__,scalar_t__,char*) ;
 int FUNC_4 (int *,struct rpc_err*) ;
 int FUNC_5 (char*) ;
 int * FUNC_6 (char*,scalar_t__,scalar_t__,struct netconfig*) ;
 int FUNC_7 (int,char*,char*) ;
 int FUNC_8 (int) ;
 struct netconfig* FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int *,scalar_t__,scalar_t__) ;
 int FUNC_13 () ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_14(char *VAR_7, int VAR_8, char **VAR_9)
{
 CLIENT *VAR_10;
 struct timeval VAR_11;
 enum clnt_stat VAR_12;
 u_long VAR_13, VAR_14, VAR_15, VAR_16;
 struct rpc_err VAR_17;
 int VAR_18 = 0;
 struct netconfig *VAR_19;

 if (VAR_8 < 2 || VAR_8 > 3 || (VAR_7 == ((void*)0)))
  FUNC_13();
 VAR_13 = FUNC_10(VAR_9[1]);
 if (VAR_8 == 2) {




  VAR_14 = VAR_2;
 } else {
  VAR_14 = FUNC_11(VAR_9[2]);
 }
 if (VAR_7) {
  VAR_19 = FUNC_9(VAR_7);
  if (VAR_19 == (struct netconfig *)((void*)0))
   FUNC_7(1, "could not find %s", VAR_7);
  VAR_10 = FUNC_6(VAR_9[0], VAR_13, VAR_14, VAR_19);
 } else {
  VAR_10 = FUNC_3(VAR_9[0], VAR_13, VAR_14, "NETPATH");
 }
 if (VAR_10 == (CLIENT *)((void*)0)) {
  FUNC_5("rpcinfo");
  FUNC_8(1);
 }
 VAR_11.tv_sec = 10;
 VAR_11.tv_usec = 0;
 VAR_12 = FUNC_0(VAR_10, VAR_3, (xdrproc_t) VAR_6,
   (char *)((void*)0), (xdrproc_t) VAR_6,
   (char *)((void*)0), VAR_11);
 if (VAR_8 == 3) {

  if (FUNC_12(VAR_10, VAR_13, VAR_14) < 0)
   VAR_18 = 1;
  (void) FUNC_2(VAR_10);
  if (VAR_18)
   FUNC_8(1);
  return;
 }

 if (VAR_12 == VAR_4) {
  FUNC_4(VAR_10, &VAR_17);
  VAR_15 = VAR_17.re_vers.low;
  VAR_16 = VAR_17.re_vers.high;
 } else if (VAR_12 == VAR_5) {




  VAR_14 = VAR_1;
  (void) FUNC_1(VAR_10, VAR_0, (char *)&VAR_14);
  VAR_12 = FUNC_0(VAR_10, VAR_3,
    (xdrproc_t) VAR_6, (char *)((void*)0),
    (xdrproc_t) VAR_6, (char *)((void*)0), VAR_11);
  if (VAR_12 == VAR_4) {
   FUNC_4(VAR_10, &VAR_17);
   VAR_15 = VAR_17.re_vers.low;
   VAR_16 = VAR_17.re_vers.high;
  } else if (VAR_12 == VAR_5) {






   VAR_15 = 0;
   VAR_16 = VAR_1;
  } else {
   (void) FUNC_12(VAR_10, VAR_13, VAR_1);
   FUNC_8(1);
  }
 } else {
  (void) FUNC_12(VAR_10, VAR_13, (u_long)0);
  FUNC_8(1);
 }
 for (VAR_14 = VAR_15; VAR_14 <= VAR_16; VAR_14++) {
  (void) FUNC_1(VAR_10, VAR_0, (char *)&VAR_14);
  VAR_12 = FUNC_0(VAR_10, VAR_3, (xdrproc_t) VAR_6,
     (char *)((void*)0), (xdrproc_t) VAR_6,
     (char *)((void*)0), VAR_11);
  if (FUNC_12(VAR_10, VAR_13, VAR_14) < 0)
    VAR_18 = 1;
 }
 (void) FUNC_2(VAR_10);
 if (VAR_18)
  FUNC_8(1);
 return;
}
