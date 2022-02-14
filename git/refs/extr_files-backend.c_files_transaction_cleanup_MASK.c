
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct ref_update {struct ref_lock* backend_data; } ;
struct ref_transaction {size_t nr; int state; struct ref_update** updates; struct files_transaction_backend_data* backend_data; } ;
struct ref_lock {int dummy; } ;
struct files_transaction_backend_data {scalar_t__ packed_refs_locked; scalar_t__ packed_transaction; } ;
struct files_ref_store {int packed_ref_store; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct files_transaction_backend_data*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,struct strbuf*) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct ref_lock*) ;

__attribute__((used)) static void FUNC_6(struct files_ref_store *VAR_2,
          struct ref_transaction *VAR_3)
{
 size_t VAR_4;
 struct files_transaction_backend_data *VAR_5 =
  VAR_3->backend_data;
 struct strbuf VAR_6 = VAR_1;

 for (VAR_4 = 0; VAR_4 < VAR_3->nr; VAR_4++) {
  struct ref_update *VAR_7 = VAR_3->updates[VAR_4];
  struct ref_lock *VAR_8 = VAR_7->backend_data;

  if (VAR_8) {
   FUNC_5(VAR_8);
   VAR_7->backend_data = ((void*)0);
  }
 }

 if (VAR_5->packed_transaction &&
     FUNC_3(VAR_5->packed_transaction, &VAR_6)) {
  FUNC_0("error aborting transaction: %s", VAR_6.buf);
  FUNC_4(&VAR_6);
 }

 if (VAR_5->packed_refs_locked)
  FUNC_2(VAR_2->packed_ref_store);

 FUNC_1(VAR_5);

 VAR_3->state = VAR_0;
}
