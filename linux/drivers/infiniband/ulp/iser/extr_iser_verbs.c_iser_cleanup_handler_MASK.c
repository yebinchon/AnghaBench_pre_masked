
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cm_id {scalar_t__ context; } ;
struct iser_conn {int ib_completion; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct rdma_cm_id*) ;
 int FUNC_2 (struct iser_conn*,int) ;

__attribute__((used)) static void FUNC_3(struct rdma_cm_id *VAR_0,
     bool VAR_1)
{
 struct iser_conn *VAR_2 = (struct iser_conn *)VAR_0->context;






 FUNC_1(VAR_0);
 FUNC_2(VAR_2, VAR_1);
 FUNC_0(&VAR_2->ib_completion);
}
