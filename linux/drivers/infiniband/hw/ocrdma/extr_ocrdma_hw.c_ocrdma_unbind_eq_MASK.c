
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ocrdma_dev {int dev_lock; TYPE_1__* eq_tbl; } ;
struct TYPE_2__ {int cq_cnt; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ocrdma_dev*,int ) ;

__attribute__((used)) static void FUNC_4(struct ocrdma_dev *VAR_1, u16 VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_1->dev_lock);
 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3 == -VAR_0)
  FUNC_0();
 VAR_1->eq_tbl[VAR_3].cq_cnt -= 1;
 FUNC_2(&VAR_1->dev_lock);
}
