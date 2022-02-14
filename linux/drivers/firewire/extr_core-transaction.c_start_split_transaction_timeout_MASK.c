
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_transaction {int is_split_transaction; int split_timeout_timer; int link; } ;
struct fw_card {int lock; scalar_t__ split_timeout_jiffies; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct fw_transaction *VAR_1,
         struct fw_card *VAR_2)
{
 unsigned long VAR_3;

 FUNC_3(&VAR_2->lock, VAR_3);

 if (FUNC_1(&VAR_1->link) || FUNC_0(VAR_1->is_split_transaction)) {
  FUNC_4(&VAR_2->lock, VAR_3);
  return;
 }

 VAR_1->is_split_transaction = 1;
 FUNC_2(&VAR_1->split_timeout_timer,
    VAR_0 + VAR_2->split_timeout_jiffies);

 FUNC_4(&VAR_2->lock, VAR_3);
}
