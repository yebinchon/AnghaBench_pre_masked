
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xdrproc_t ;
struct TYPE_2__ {char* name; scalar_t__ state; } ;
typedef TYPE_1__ nlm4_notify ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,int ,int ,int ,int ,void*,int ,int *,int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

int
FUNC_5(int VAR_7, char **VAR_8)
{
 enum clnt_stat VAR_9;
 char *VAR_10;
 nlm4_notify VAR_11;

 if (VAR_7 != 2) {
  FUNC_2(VAR_4, "Usage: clear_locks <hostname>\n");
  FUNC_1(1);
 }
 VAR_10 = VAR_8[1];

 if (FUNC_3() != 0) {
  FUNC_2(VAR_4, "clear_locks: must be root\n");
  FUNC_1(1);
 }

 VAR_11.name = VAR_10;
 VAR_11.state = 0;
 VAR_9 = FUNC_4("localhost", VAR_1, VAR_2, VAR_0,
     (xdrproc_t) VAR_5, (void *) &VAR_11,
     (xdrproc_t) VAR_6, ((void*)0), ((void*)0));

 if (VAR_9 != VAR_3) {
  FUNC_0(VAR_9);
  FUNC_1(1);
 }
 FUNC_2(VAR_4, "clear_locks: cleared locks for hostname %s\n",
     VAR_10);

 return (0);
}
