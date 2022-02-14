
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_link_ops {int list; int type; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct rdma_link_ops *VAR_2)
{
 FUNC_1(&VAR_1);
 if (FUNC_0(FUNC_2(VAR_2->type)))
  goto out;
 FUNC_3(&VAR_2->list, &VAR_0);
out:
 FUNC_4(&VAR_1);
}
