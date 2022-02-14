
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bitmap; } ;
struct hns_roce_srq {int lock; int tail; TYPE_1__ idx_que; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct hns_roce_srq *VAR_0, int VAR_1)
{

 FUNC_1(&VAR_0->lock);

 FUNC_0(VAR_0->idx_que.bitmap, VAR_1, 1);
 VAR_0->tail++;

 FUNC_2(&VAR_0->lock);
}
