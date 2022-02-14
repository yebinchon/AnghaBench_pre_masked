
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int mtt_buddy; int * fmr_mtt_buddy; } ;
struct mthca_dev {int mthca_flags; TYPE_1__ mr_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mthca_dev*) ;

int FUNC_1(struct mthca_dev *VAR_2)
{
 if (VAR_2->mr_table.fmr_mtt_buddy != &VAR_2->mr_table.mtt_buddy ||
     !(VAR_2->mthca_flags & VAR_0))






  return VAR_1 / sizeof (u64) - 2;


 return FUNC_0(VAR_2) ? (VAR_1 / sizeof (u64)) : 0x7ffffff;
}
