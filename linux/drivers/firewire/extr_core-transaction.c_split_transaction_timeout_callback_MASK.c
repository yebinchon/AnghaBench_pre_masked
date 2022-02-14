
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct fw_transaction {unsigned long long tlabel; int callback_data; int (* callback ) (struct fw_card*,int ,int *,int ,int ) ;int link; struct fw_card* card; } ;
struct fw_card {unsigned long long tlabel_mask; int lock; } ;


 int VAR_0 ;
 struct fw_transaction* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_1 ;
 int FUNC_5 (struct fw_card*,int ,int *,int ,int ) ;
 struct fw_transaction* VAR_2 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_3)
{
 struct fw_transaction *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_1);
 struct fw_card *VAR_5 = VAR_4->card;
 unsigned long VAR_6;

 FUNC_3(&VAR_5->lock, VAR_6);
 if (FUNC_2(&VAR_4->link)) {
  FUNC_4(&VAR_5->lock, VAR_6);
  return;
 }
 FUNC_1(&VAR_4->link);
 VAR_5->tlabel_mask &= ~(1ULL << VAR_4->tlabel);
 FUNC_4(&VAR_5->lock, VAR_6);

 VAR_4->callback(VAR_5, VAR_0, ((void*)0), 0, VAR_4->callback_data);
}
