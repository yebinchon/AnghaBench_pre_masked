
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mthca_mtt {int order; scalar_t__ first_seg; int buddy; } ;
struct TYPE_2__ {int mtt_table; } ;
struct mthca_dev {TYPE_1__ mr_table; } ;


 int FUNC_0 (struct mthca_mtt*) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (struct mthca_dev*,int ,scalar_t__,scalar_t__) ;

void FUNC_3(struct mthca_dev *VAR_0, struct mthca_mtt *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_1(VAR_1->buddy, VAR_1->first_seg, VAR_1->order);

 FUNC_2(VAR_0, VAR_0->mr_table.mtt_table,
         VAR_1->first_seg,
         VAR_1->first_seg + (1 << VAR_1->order) - 1);

 FUNC_0(VAR_1);
}
