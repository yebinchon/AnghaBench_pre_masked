
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct timeval {scalar_t__ tv_usec; void* tv_sec; } ;
struct _dom_binding {int dom_vers; char* dom_domain; scalar_t__ dom_alive; int dom_server_addr; scalar_t__ dom_broadcast_pid; } ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef scalar_t__ bool_t ;
typedef int CLIENT ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct _dom_binding*) ;
 int FUNC_1 (int *,int ,int ,char**,int ,scalar_t__*,struct timeval) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ,int ,struct timeval,int*,int ,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

int
FUNC_4(struct _dom_binding *VAR_10)
{
 bool_t VAR_11;
 struct timeval VAR_12, VAR_13;
 enum clnt_stat VAR_14;
 int VAR_15 = VAR_3;
 CLIENT *VAR_16;

 VAR_12.tv_sec = VAR_0;
 VAR_12.tv_usec = 0;
 VAR_13.tv_sec = VAR_0;
 VAR_13.tv_usec = 0;

 if (VAR_10->dom_broadcast_pid)
  return(1);

 if ((VAR_16 = FUNC_3(&VAR_10->dom_server_addr,
  VAR_6, VAR_7, VAR_12, &VAR_15, VAR_2,
  VAR_2)) == (CLIENT *)((void*)0)) {

  VAR_10->dom_alive = 0;
  VAR_10->dom_vers = -1;
  FUNC_0(VAR_10);
  return(1);
 }

 {
  char *VAR_17;

  VAR_17 = VAR_10->dom_domain;

  VAR_14 = FUNC_1(VAR_16, VAR_5,
      (xdrproc_t)VAR_9, &VAR_17,
      (xdrproc_t)VAR_8, &VAR_11, VAR_13);
  if (VAR_14 != VAR_4 || VAR_11 == VAR_1) {
   VAR_10->dom_alive = 0;
   VAR_10->dom_vers = -1;
   FUNC_2(VAR_16);
   FUNC_0(VAR_10);
   return(1);
  }
 }

 FUNC_2(VAR_16);
 return(0);
}
