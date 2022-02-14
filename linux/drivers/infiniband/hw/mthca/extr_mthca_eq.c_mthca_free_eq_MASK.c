
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mthca_mailbox {scalar_t__ buf; } ;
struct mthca_eq_context {int dummy; } ;
struct mthca_eq {int nent; TYPE_2__* page_list; int mr; int eqn; int eqn_mask; } ;
struct TYPE_4__ {int arm_mask; } ;
struct mthca_dev {int pdev; TYPE_1__ eq_table; } ;
struct TYPE_5__ {int buf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mthca_mailbox*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_4 (struct mthca_dev*,struct mthca_mailbox*,int ) ;
 struct mthca_mailbox* FUNC_5 (struct mthca_dev*,int ) ;
 int FUNC_6 (struct mthca_dev*,char*,int ) ;
 int FUNC_7 (struct mthca_dev*,struct mthca_mailbox*) ;
 int FUNC_8 (struct mthca_dev*,int *) ;
 int FUNC_9 (struct mthca_dev*,char*,int) ;
 int FUNC_10 (int ,int,int ,int ) ;
 int FUNC_11 (char*,...) ;

__attribute__((used)) static void FUNC_12(struct mthca_dev *VAR_4,
     struct mthca_eq *VAR_5)
{
 struct mthca_mailbox *VAR_6;
 int VAR_7;
 int VAR_8 = (VAR_5->nent * VAR_1 + VAR_2 - 1) /
  VAR_2;
 int VAR_9;

 VAR_6 = FUNC_5(VAR_4, VAR_0);
 if (FUNC_0(VAR_6))
  return;

 VAR_7 = FUNC_4(VAR_4, VAR_6, VAR_5->eqn);
 if (VAR_7)
  FUNC_9(VAR_4, "HW2SW_EQ returned %d\n", VAR_7);

 VAR_4->eq_table.arm_mask &= ~VAR_5->eqn_mask;

 if (0) {
  FUNC_6(VAR_4, "Dumping EQ context %02x:\n", VAR_5->eqn);
  for (VAR_9 = 0; VAR_9 < sizeof (struct mthca_eq_context) / 4; ++VAR_9) {
   if (VAR_9 % 4 == 0)
    FUNC_11("[%02x] ", VAR_9 * 4);
   FUNC_11(" %08x", FUNC_1(VAR_6->buf + VAR_9 * 4));
   if ((VAR_9 + 1) % 4 == 0)
    FUNC_11("\n");
  }
 }

 FUNC_8(VAR_4, &VAR_5->mr);
 for (VAR_9 = 0; VAR_9 < VAR_8; ++VAR_9)
  FUNC_10(VAR_4->pdev, VAR_2,
        VAR_5->page_list[VAR_9].buf,
        FUNC_2(&VAR_5->page_list[VAR_9], VAR_3));

 FUNC_3(VAR_5->page_list);
 FUNC_7(VAR_4, VAR_6);
}
