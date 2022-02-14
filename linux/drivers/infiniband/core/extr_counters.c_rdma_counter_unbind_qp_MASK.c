
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_counter {int kref; } ;
struct ib_qp {struct rdma_counter* counter; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_qp*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;

int FUNC_2(struct ib_qp *VAR_2, bool VAR_3)
{
 struct rdma_counter *VAR_4 = VAR_2->counter;
 int VAR_5;

 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5 && !VAR_3)
  return VAR_5;

 FUNC_1(&VAR_4->kref, VAR_1);
 return 0;
}
