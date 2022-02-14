
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_transaction_log_entry {int debug_id_done; } ;
struct binder_transaction_log {int full; struct binder_transaction_log_entry* entry; int cur; } ;


 unsigned int FUNC_0 (struct binder_transaction_log_entry*) ;
 int FUNC_1 (int ,int ) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (struct binder_transaction_log_entry*,int ,int) ;
 int FUNC_4 () ;

__attribute__((used)) static struct binder_transaction_log_entry *FUNC_5(
 struct binder_transaction_log *VAR_0)
{
 struct binder_transaction_log_entry *VAR_1;
 unsigned int VAR_2 = FUNC_2(&VAR_0->cur);

 if (VAR_2 >= FUNC_0(VAR_0->entry))
  VAR_0->full = 1;
 VAR_1 = &VAR_0->entry[VAR_2 % FUNC_0(VAR_0->entry)];
 FUNC_1(VAR_1->debug_id_done, 0);





 FUNC_4();
 FUNC_3(VAR_1, 0, sizeof(*VAR_1));
 return VAR_1;
}
