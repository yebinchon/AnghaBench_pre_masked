
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocrdma_dev {int eq_cnt; TYPE_2__* eq_tbl; } ;
struct TYPE_3__ {int id; } ;
struct TYPE_4__ {TYPE_1__ q; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct ocrdma_dev *VAR_1,
  int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->eq_cnt; VAR_3++) {
  if (VAR_1->eq_tbl[VAR_3].q.id == VAR_2)
   return VAR_3;
 }

 return -VAR_0;
}
