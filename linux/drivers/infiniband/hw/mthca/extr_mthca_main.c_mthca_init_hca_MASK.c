
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int inta_pin; } ;
struct mthca_dev {int board_id; int rev_id; TYPE_1__ eq_table; } ;
struct mthca_adapter {int board_id; int revision_id; int inta_pin; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct mthca_dev*,struct mthca_adapter*) ;
 int FUNC_2 (struct mthca_dev*) ;
 int FUNC_3 (struct mthca_dev*,char*,int) ;
 int FUNC_4 (struct mthca_dev*) ;
 int FUNC_5 (struct mthca_dev*) ;
 scalar_t__ FUNC_6 (struct mthca_dev*) ;

__attribute__((used)) static int FUNC_7(struct mthca_dev *VAR_0)
{
 int VAR_1;
 struct mthca_adapter VAR_2;

 if (FUNC_6(VAR_0))
  VAR_1 = FUNC_4(VAR_0);
 else
  VAR_1 = FUNC_5(VAR_0);

 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_1(VAR_0, &VAR_2);
 if (VAR_1) {
  FUNC_3(VAR_0, "QUERY_ADAPTER command returned %d, aborting.\n", VAR_1);
  goto err_close;
 }

 VAR_0->eq_table.inta_pin = VAR_2.inta_pin;
 if (!FUNC_6(VAR_0))
  VAR_0->rev_id = VAR_2.revision_id;
 FUNC_0(VAR_0->board_id, VAR_2.board_id, sizeof VAR_0->board_id);

 return 0;

err_close:
 FUNC_2(VAR_0);
 return VAR_1;
}
