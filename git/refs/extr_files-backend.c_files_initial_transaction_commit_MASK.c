
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct strbuf {int dummy; } ;
struct ref_update {int flags; int old_oid; int new_oid; int refname; } ;
struct ref_transaction {scalar_t__ state; size_t nr; struct ref_update** updates; } ;
struct ref_store {int dummy; } ;
struct files_ref_store {int packed_ref_store; int base; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct string_list VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct strbuf*) ;
 struct files_ref_store* FUNC_2 (struct ref_store*,int ,char*) ;
 scalar_t__ FUNC_3 (struct ref_transaction*,struct strbuf*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ,struct strbuf*) ;
 int FUNC_6 (int ) ;
 int VAR_7 ;
 struct ref_transaction* FUNC_7 (int ,struct strbuf*) ;
 int FUNC_8 (struct ref_transaction*,int ,int,int *,int *,int *) ;
 int FUNC_9 (struct ref_transaction*) ;
 scalar_t__ FUNC_10 (struct string_list*,struct strbuf*) ;
 scalar_t__ FUNC_11 (int *,int ,struct string_list*) ;
 scalar_t__ FUNC_12 (int *,int ,struct string_list*,int *,struct strbuf*) ;
 int FUNC_13 (struct string_list*,int ) ;
 int FUNC_14 (struct string_list*,int ) ;
 int FUNC_15 (struct string_list*) ;

__attribute__((used)) static int FUNC_16(struct ref_store *VAR_8,
         struct ref_transaction *VAR_9,
         struct strbuf *VAR_10)
{
 struct files_ref_store *VAR_11 =
  FUNC_2(VAR_8, VAR_1,
          "initial_ref_transaction_commit");
 size_t VAR_12;
 int VAR_13 = 0;
 struct string_list VAR_14 = VAR_4;
 struct ref_transaction *VAR_15 = ((void*)0);

 FUNC_1(VAR_10);

 if (VAR_9->state != VAR_3)
  FUNC_0("commit called for transaction that is not open");


 for (VAR_12 = 0; VAR_12 < VAR_9->nr; VAR_12++)
  FUNC_13(&VAR_14,
       VAR_9->updates[VAR_12]->refname);
 FUNC_15(&VAR_14);
 if (FUNC_10(&VAR_14, VAR_10)) {
  VAR_13 = VAR_5;
  goto cleanup;
 }
 if (FUNC_11(&VAR_11->base, VAR_7,
     &VAR_14))
  FUNC_0("initial ref transaction called with existing refs");

 VAR_15 = FUNC_7(VAR_11->packed_ref_store, VAR_10);
 if (!VAR_15) {
  VAR_13 = VAR_5;
  goto cleanup;
 }

 for (VAR_12 = 0; VAR_12 < VAR_9->nr; VAR_12++) {
  struct ref_update *VAR_16 = VAR_9->updates[VAR_12];

  if ((VAR_16->flags & VAR_0) &&
      !FUNC_4(&VAR_16->old_oid))
   FUNC_0("initial ref transaction with old_sha1 set");
  if (FUNC_12(&VAR_11->base, VAR_16->refname,
        &VAR_14, ((void*)0),
        VAR_10)) {
   VAR_13 = VAR_6;
   goto cleanup;
  }





  FUNC_8(VAR_15, VAR_16->refname,
        VAR_16->flags & ~VAR_0,
        &VAR_16->new_oid, &VAR_16->old_oid,
        ((void*)0));
 }

 if (FUNC_5(VAR_11->packed_ref_store, 0, VAR_10)) {
  VAR_13 = VAR_5;
  goto cleanup;
 }

 if (FUNC_3(VAR_15, VAR_10)) {
  VAR_13 = VAR_5;
 }

 FUNC_6(VAR_11->packed_ref_store);
cleanup:
 if (VAR_15)
  FUNC_9(VAR_15);
 VAR_9->state = VAR_2;
 FUNC_14(&VAR_14, 0);
 return VAR_13;
}
