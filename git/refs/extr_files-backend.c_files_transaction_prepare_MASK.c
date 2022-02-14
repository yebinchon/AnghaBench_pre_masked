
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {struct ref_update* util; } ;
struct string_list {int dummy; } ;
struct strbuf {int dummy; } ;
struct ref_update {int flags; int new_oid; int refname; } ;
struct ref_transaction {size_t nr; int state; struct ref_update** updates; struct files_transaction_backend_data* backend_data; } ;
struct ref_store {int dummy; } ;
struct files_transaction_backend_data {int packed_refs_locked; struct ref_transaction* packed_transaction; } ;
struct files_ref_store {int packed_ref_store; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct string_list VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct strbuf*) ;
 struct files_ref_store* FUNC_3 (struct ref_store*,int ,char*) ;
 int FUNC_4 (struct files_ref_store*,struct ref_transaction*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ,struct ref_transaction*) ;
 int FUNC_7 (struct files_ref_store*,struct ref_update*,struct ref_transaction*,char*,struct string_list*,struct strbuf*) ;
 scalar_t__ FUNC_8 (int ,int ,struct strbuf*) ;
 struct ref_transaction* FUNC_9 (int ,struct strbuf*) ;
 scalar_t__ FUNC_10 (struct ref_transaction*,struct strbuf*) ;
 int FUNC_11 (struct ref_transaction*,int ,int,int *,int *,int *) ;
 int FUNC_12 (struct ref_transaction*) ;
 int FUNC_13 (struct ref_transaction*,struct strbuf*) ;
 scalar_t__ FUNC_14 (struct string_list*,struct strbuf*) ;
 char* FUNC_15 (struct ref_store*,char*,int ,int *,int*) ;
 struct string_list_item* FUNC_16 (struct string_list*,int ) ;
 int FUNC_17 (struct string_list*,int ) ;
 int FUNC_18 (struct string_list*) ;
 struct files_transaction_backend_data* FUNC_19 (int,int) ;

__attribute__((used)) static int FUNC_20(struct ref_store *VAR_11,
         struct ref_transaction *VAR_12,
         struct strbuf *VAR_13)
{
 struct files_ref_store *VAR_14 =
  FUNC_3(VAR_11, VAR_6,
          "ref_transaction_prepare");
 size_t VAR_15;
 int VAR_16 = 0;
 struct string_list VAR_17 = VAR_9;
 char *VAR_18 = ((void*)0);
 int VAR_19;
 struct files_transaction_backend_data *VAR_20;
 struct ref_transaction *VAR_21 = ((void*)0);

 FUNC_2(VAR_13);

 if (!VAR_12->nr)
  goto cleanup;

 VAR_20 = FUNC_19(1, sizeof(*VAR_20));
 VAR_12->backend_data = VAR_20;
 for (VAR_15 = 0; VAR_15 < VAR_12->nr; VAR_15++) {
  struct ref_update *VAR_22 = VAR_12->updates[VAR_15];
  struct string_list_item *VAR_23 =
   FUNC_16(&VAR_17, VAR_22->refname);

  if ((VAR_22->flags & VAR_3) &&
      !(VAR_22->flags & VAR_5))
   FUNC_0("REF_IS_PRUNING set without REF_NO_DEREF");






  VAR_23->util = VAR_22;
 }
 FUNC_18(&VAR_17);
 if (FUNC_14(&VAR_17, VAR_13)) {
  VAR_16 = VAR_10;
  goto cleanup;
 }
 VAR_18 = FUNC_15(VAR_11, "HEAD",
           VAR_8,
           ((void*)0), &VAR_19);

 if (VAR_18 && !(VAR_19 & VAR_2)) {
  FUNC_1(VAR_18);
 }
 for (VAR_15 = 0; VAR_15 < VAR_12->nr; VAR_15++) {
  struct ref_update *VAR_24 = VAR_12->updates[VAR_15];

  VAR_16 = FUNC_7(VAR_14, VAR_24, VAR_12,
       VAR_18, &VAR_17, VAR_13);
  if (VAR_16)
   goto cleanup;

  if (VAR_24->flags & VAR_0 &&
      !(VAR_24->flags & VAR_4) &&
      !(VAR_24->flags & VAR_3)) {




   if (!VAR_21) {
    VAR_21 = FUNC_9(
      VAR_14->packed_ref_store, VAR_13);
    if (!VAR_21) {
     VAR_16 = VAR_10;
     goto cleanup;
    }

    VAR_20->packed_transaction =
     VAR_21;
   }

   FUNC_11(
     VAR_21, VAR_24->refname,
     VAR_1 | VAR_5,
     &VAR_24->new_oid, ((void*)0),
     ((void*)0));
  }
 }

 if (VAR_21) {
  if (FUNC_8(VAR_14->packed_ref_store, 0, VAR_13)) {
   VAR_16 = VAR_10;
   goto cleanup;
  }
  VAR_20->packed_refs_locked = 1;

  if (FUNC_6(VAR_14->packed_ref_store,
       VAR_21)) {
   VAR_16 = FUNC_13(VAR_21, VAR_13);






   if (VAR_16) {
    FUNC_12(VAR_21);
    VAR_20->packed_transaction = ((void*)0);
   }
  } else {
   VAR_20->packed_transaction = ((void*)0);
   if (FUNC_10(VAR_21, VAR_13)) {
    VAR_16 = VAR_10;
    goto cleanup;
   }
  }
 }

cleanup:
 FUNC_5(VAR_18);
 FUNC_17(&VAR_17, 0);

 if (VAR_16)
  FUNC_4(VAR_14, VAR_12);
 else
  VAR_12->state = VAR_7;

 return VAR_16;
}
