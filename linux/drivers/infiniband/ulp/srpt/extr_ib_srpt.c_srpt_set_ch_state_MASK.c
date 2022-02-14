
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srpt_rdma_ch {int state; int spinlock; } ;
typedef enum rdma_ch_state { ____Placeholder_rdma_ch_state } rdma_ch_state ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_2(struct srpt_rdma_ch *VAR_0, enum rdma_ch_state VAR_1)
{
 unsigned long VAR_2;
 enum rdma_ch_state VAR_3;
 bool VAR_4 = 0;

 FUNC_0(&VAR_0->spinlock, VAR_2);
 VAR_3 = VAR_0->state;
 if (VAR_1 > VAR_3) {
  VAR_0->state = VAR_1;
  VAR_4 = 1;
 }
 FUNC_1(&VAR_0->spinlock, VAR_2);

 return VAR_4;
}
