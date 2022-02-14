
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ddr_av_base; int pool; int alloc; } ;
struct mthca_dev {TYPE_1__ av_table; } ;
struct mthca_ah {int type; int avdma; int av; } ;





 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;

int FUNC_3(struct mthca_dev *VAR_1, struct mthca_ah *VAR_2)
{
 switch (VAR_2->type) {
 case 129:
  FUNC_2(&VAR_1->av_table.alloc,
      (VAR_2->avdma - VAR_1->av_table.ddr_av_base) /
      VAR_0);
  break;

 case 128:
  FUNC_0(VAR_1->av_table.pool, VAR_2->av, VAR_2->avdma);
  break;

 case 130:
  FUNC_1(VAR_2->av);
  break;
 }

 return 0;
}
