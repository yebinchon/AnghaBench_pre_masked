
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int alloc; int pool; scalar_t__ av_map; } ;
struct mthca_dev {TYPE_1__ av_table; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct mthca_dev*) ;

void FUNC_4(struct mthca_dev *VAR_0)
{
 if (FUNC_3(VAR_0))
  return;

 if (VAR_0->av_table.av_map)
  FUNC_1(VAR_0->av_table.av_map);
 FUNC_0(VAR_0->av_table.pool);
 FUNC_2(&VAR_0->av_table.alloc);
}
