
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_transaction {int state; struct packed_transaction_backend_data* backend_data; } ;
struct packed_transaction_backend_data {scalar_t__ own_lock; int updates; } ;
struct packed_ref_store {int base; int lock; int tempfile; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct packed_transaction_backend_data*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct packed_ref_store *VAR_1,
           struct ref_transaction *VAR_2)
{
 struct packed_transaction_backend_data *VAR_3 = VAR_2->backend_data;

 if (VAR_3) {
  FUNC_5(&VAR_3->updates, 0);

  if (FUNC_3(VAR_1->tempfile))
   FUNC_0(&VAR_1->tempfile);

  if (VAR_3->own_lock && FUNC_2(&VAR_1->lock)) {
   FUNC_4(&VAR_1->base);
   VAR_3->own_lock = 0;
  }

  FUNC_1(VAR_3);
  VAR_2->backend_data = ((void*)0);
 }

 VAR_2->state = VAR_0;
}
