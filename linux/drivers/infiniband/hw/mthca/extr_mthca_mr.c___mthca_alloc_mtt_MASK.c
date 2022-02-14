
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mthca_mtt {int first_seg; scalar_t__ order; struct mthca_buddy* buddy; } ;
struct TYPE_2__ {int mtt_seg_size; } ;
struct mthca_dev {TYPE_1__ limits; } ;
struct mthca_buddy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mthca_mtt* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct mthca_mtt*) ;
 struct mthca_mtt* FUNC_2 (int,int ) ;
 int FUNC_3 (struct mthca_dev*,scalar_t__,struct mthca_buddy*) ;

__attribute__((used)) static struct mthca_mtt *FUNC_4(struct mthca_dev *VAR_3, int VAR_4,
        struct mthca_buddy *VAR_5)
{
 struct mthca_mtt *VAR_6;
 int VAR_7;

 if (VAR_4 <= 0)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_2(sizeof *VAR_6, VAR_2);
 if (!VAR_6)
  return FUNC_0(-VAR_1);

 VAR_6->buddy = VAR_5;
 VAR_6->order = 0;
 for (VAR_7 = VAR_3->limits.mtt_seg_size / 8; VAR_7 < VAR_4; VAR_7 <<= 1)
  ++VAR_6->order;

 VAR_6->first_seg = FUNC_3(VAR_3, VAR_6->order, VAR_5);
 if (VAR_6->first_seg == -1) {
  FUNC_1(VAR_6);
  return FUNC_0(-VAR_1);
 }

 return VAR_6;
}
