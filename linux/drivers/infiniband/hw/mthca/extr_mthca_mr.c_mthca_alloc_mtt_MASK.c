
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mthca_mtt {int dummy; } ;
struct TYPE_2__ {int mtt_buddy; } ;
struct mthca_dev {TYPE_1__ mr_table; } ;


 struct mthca_mtt* FUNC_0 (struct mthca_dev*,int,int *) ;

struct mthca_mtt *FUNC_1(struct mthca_dev *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0, VAR_1, &VAR_0->mr_table.mtt_buddy);
}
