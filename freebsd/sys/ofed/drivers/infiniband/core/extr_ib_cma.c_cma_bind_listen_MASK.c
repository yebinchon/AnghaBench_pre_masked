
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rdma_id_private {struct rdma_bind_list* bind_list; } ;
struct TYPE_4__ {TYPE_1__* first; } ;
struct rdma_bind_list {TYPE_2__ owners; } ;
struct TYPE_3__ {scalar_t__ next; } ;


 int FUNC_0 (struct rdma_bind_list*,struct rdma_id_private*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct rdma_id_private *VAR_1)
{
 struct rdma_bind_list *VAR_2 = VAR_1->bind_list;
 int VAR_3 = 0;

 FUNC_1(&VAR_0);
 if (VAR_2->owners.first->next)
  VAR_3 = FUNC_0(VAR_2, VAR_1, 0);
 FUNC_2(&VAR_0);
 return VAR_3;
}
