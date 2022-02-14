
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cm_id {scalar_t__ context; } ;
struct iser_conn {int state; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct rdma_cm_id *VAR_1)
{
 struct iser_conn *VAR_2;

 VAR_2 = (struct iser_conn *)VAR_1->context;
 VAR_2->state = VAR_0;
}
