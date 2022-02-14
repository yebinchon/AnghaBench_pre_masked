
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct resolve_cb_context {int status; int comp; } ;
struct rdma_dev_addr {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(int VAR_0, struct sockaddr *VAR_1,
      struct rdma_dev_addr *VAR_2, void *VAR_3)
{
 ((struct resolve_cb_context *)VAR_3)->status = VAR_0;
 FUNC_0(&((struct resolve_cb_context *)VAR_3)->comp);
}
