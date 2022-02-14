
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transaction {int dummy; } ;
struct account {int trans_alloc; int trans_num; struct transaction** acc_transactions; } ;


 int FUNC_0 (struct transaction**,struct transaction**,int) ;
 int FUNC_1 (struct transaction**,int) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3 (struct account *VAR_0, struct transaction *VAR_1) {
  if (!VAR_0->trans_alloc) {
    VAR_0->trans_alloc = 8;
    VAR_0->acc_transactions = FUNC_2 (8 * sizeof (void *));
  }
  if (VAR_0->trans_num == VAR_0->trans_alloc) {
    struct transaction **VAR_2 = FUNC_2 ((VAR_0->trans_alloc << 1) * sizeof (void *));
    FUNC_0 (VAR_2, VAR_0->acc_transactions, VAR_0->trans_alloc * sizeof (void *));
    FUNC_1 (VAR_0->acc_transactions, VAR_0->trans_alloc * sizeof (void *));
    VAR_0->acc_transactions = VAR_2;
    VAR_0->trans_alloc <<= 1;
  }

  VAR_0->acc_transactions[VAR_0->trans_num++] = VAR_1;
  return VAR_0->trans_num;
}
