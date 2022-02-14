
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct finfo {int caller_xid; int caller_addr; } ;
typedef int SVCXPRT ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(SVCXPRT *VAR_0, struct finfo *VAR_1)
{
 u_int32_t *VAR_2;

 FUNC_1(FUNC_2(VAR_0), VAR_1->caller_addr);
 VAR_2 = FUNC_0(VAR_0);
 *VAR_2 = VAR_1->caller_xid;
}
