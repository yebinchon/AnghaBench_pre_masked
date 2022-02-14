
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct resolve_cb_context {int status; int comp; int addr; } ;
struct rdma_dev_addr {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct rdma_dev_addr*,int) ;

__attribute__((used)) static void FUNC_2(int VAR_0, struct sockaddr *VAR_1,
      struct rdma_dev_addr *VAR_2, void *VAR_3)
{
 if (!VAR_0)
  FUNC_1(((struct resolve_cb_context *)VAR_3)->addr,
         VAR_2, sizeof(struct rdma_dev_addr));
 ((struct resolve_cb_context *)VAR_3)->status = VAR_0;
 FUNC_0(&((struct resolve_cb_context *)VAR_3)->comp);
}
