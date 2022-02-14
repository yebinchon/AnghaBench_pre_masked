
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct list_head {int dummy; } ;
struct ib_qp {int mr_lock; int pd; } ;
struct ib_mr {int qp_entry; } ;
typedef enum ib_mr_type { ____Placeholder_ib_mr_type } ib_mr_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ib_mr*) ;
 int FUNC_1 (struct ib_mr*) ;
 struct ib_mr* FUNC_2 (int ,int,int ) ;
 struct ib_mr* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct ib_qp*,struct list_head*) ;
 int FUNC_5 (int *,struct list_head*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int FUNC_8(struct ib_qp *VAR_1, struct list_head *VAR_2, int VAR_3,
  enum ib_mr_type VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct ib_mr *VAR_7;
 unsigned long VAR_8;
 int VAR_9, VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  if (VAR_4 == VAR_0)
   VAR_7 = FUNC_3(VAR_1->pd, VAR_5,
         VAR_6);
  else
   VAR_7 = FUNC_2(VAR_1->pd, VAR_4, VAR_5);
  if (FUNC_0(VAR_7)) {
   VAR_9 = FUNC_1(VAR_7);
   goto out;
  }

  FUNC_6(&VAR_1->mr_lock, VAR_8);
  FUNC_5(&VAR_7->qp_entry, VAR_2);
  FUNC_7(&VAR_1->mr_lock, VAR_8);
 }

 return 0;
out:
 FUNC_4(VAR_1, VAR_2);
 return VAR_9;
}
