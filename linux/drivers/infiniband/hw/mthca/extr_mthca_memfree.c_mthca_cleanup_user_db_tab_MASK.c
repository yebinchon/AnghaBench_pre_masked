
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mthca_user_db_table {TYPE_2__* page; } ;
struct mthca_uar {int dummy; } ;
struct TYPE_3__ {int uarc_size; } ;
struct mthca_dev {int pdev; TYPE_1__ uar_table; } ;
struct TYPE_4__ {int mem; scalar_t__ uvirt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mthca_user_db_table*) ;
 int FUNC_1 (struct mthca_dev*,int ,int) ;
 int FUNC_2 (struct mthca_dev*) ;
 int FUNC_3 (struct mthca_dev*,struct mthca_uar*,int) ;
 int FUNC_4 (int ,int *,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct mthca_dev *VAR_2, struct mthca_uar *VAR_3,
          struct mthca_user_db_table *VAR_4)
{
 int VAR_5;

 if (!FUNC_2(VAR_2))
  return;

 for (VAR_5 = 0; VAR_5 < VAR_2->uar_table.uarc_size / VAR_0; ++VAR_5) {
  if (VAR_4->page[VAR_5].uvirt) {
   FUNC_1(VAR_2, FUNC_3(VAR_2, VAR_3, VAR_5), 1);
   FUNC_4(VAR_2->pdev, &VAR_4->page[VAR_5].mem, 1, VAR_1);
   FUNC_5(FUNC_6(&VAR_4->page[VAR_5].mem));
  }
 }

 FUNC_0(VAR_4);
}
