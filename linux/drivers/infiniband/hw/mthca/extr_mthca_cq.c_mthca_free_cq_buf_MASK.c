
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mthca_dev {int dummy; } ;
struct mthca_cq_buf {int mr; int is_direct; int queue; } ;


 int VAR_0 ;
 int FUNC_0 (struct mthca_dev*,int,int *,int ,int *) ;

void FUNC_1(struct mthca_dev *VAR_1, struct mthca_cq_buf *VAR_2, int VAR_3)
{
 FUNC_0(VAR_1, (VAR_3 + 1) * VAR_0, &VAR_2->queue,
         VAR_2->is_direct, &VAR_2->mr);
}
