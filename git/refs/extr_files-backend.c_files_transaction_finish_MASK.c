
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct ref_update {int flags; int type; int refname; struct ref_lock* backend_data; int msg; int new_oid; } ;
struct ref_transaction {size_t nr; struct ref_update** updates; struct files_transaction_backend_data* backend_data; int state; } ;
struct ref_store {int dummy; } ;
struct ref_lock {int ref_name; int old_oid; } ;
struct files_transaction_backend_data {struct ref_transaction* packed_transaction; } ;
struct files_ref_store {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct strbuf VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct strbuf*) ;
 int FUNC_1 (struct files_ref_store*) ;
 scalar_t__ FUNC_2 (struct ref_lock*) ;
 struct files_ref_store* FUNC_3 (struct ref_store*,int ,char*) ;
 scalar_t__ FUNC_4 (struct files_ref_store*,int ,int *,int *,int ,int,struct strbuf*) ;
 int FUNC_5 (struct files_ref_store*,struct strbuf*,int ) ;
 int FUNC_6 (struct files_ref_store*,struct strbuf*,int ) ;
 int FUNC_7 (struct files_ref_store*,struct ref_transaction*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct ref_transaction*,struct strbuf*) ;
 int FUNC_10 (struct ref_transaction*) ;
 int FUNC_11 (struct strbuf*,char*,int ,...) ;
 char* FUNC_12 (struct strbuf*,int *) ;
 int FUNC_13 (struct strbuf*) ;
 int FUNC_14 (struct strbuf*) ;
 int FUNC_15 (struct files_ref_store*,int ,int ) ;
 scalar_t__ FUNC_16 (int ,struct strbuf*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct ref_lock*) ;

__attribute__((used)) static int FUNC_19(struct ref_store *VAR_12,
        struct ref_transaction *VAR_13,
        struct strbuf *VAR_14)
{
 struct files_ref_store *VAR_15 =
  FUNC_3(VAR_12, 0, "ref_transaction_finish");
 size_t VAR_16;
 int VAR_17 = 0;
 struct strbuf VAR_18 = VAR_10;
 struct files_transaction_backend_data *VAR_19;
 struct ref_transaction *VAR_20;


 FUNC_0(VAR_14);

 if (!VAR_13->nr) {
  VAR_13->state = VAR_7;
  return 0;
 }

 VAR_19 = VAR_13->backend_data;
 VAR_20 = VAR_19->packed_transaction;


 for (VAR_16 = 0; VAR_16 < VAR_13->nr; VAR_16++) {
  struct ref_update *VAR_21 = VAR_13->updates[VAR_16];
  struct ref_lock *VAR_22 = VAR_21->backend_data;

  if (VAR_21->flags & VAR_6 ||
      VAR_21->flags & VAR_5) {
   if (FUNC_4(VAR_15,
      VAR_22->ref_name,
      &VAR_22->old_oid,
      &VAR_21->new_oid,
      VAR_21->msg, VAR_21->flags,
      VAR_14)) {
    char *VAR_23 = FUNC_12(VAR_14, ((void*)0));

    FUNC_11(VAR_14, "cannot update the ref '%s': %s",
         VAR_22->ref_name, VAR_23);
    FUNC_8(VAR_23);
    FUNC_18(VAR_22);
    VAR_21->backend_data = ((void*)0);
    VAR_17 = VAR_11;
    goto cleanup;
   }
  }
  if (VAR_21->flags & VAR_6) {
   FUNC_1(VAR_15);
   if (FUNC_2(VAR_22)) {
    FUNC_11(VAR_14, "couldn't set '%s'", VAR_22->ref_name);
    FUNC_18(VAR_22);
    VAR_21->backend_data = ((void*)0);
    VAR_17 = VAR_11;
    goto cleanup;
   }
  }
 }
 for (VAR_16 = 0; VAR_16 < VAR_13->nr; VAR_16++) {
  struct ref_update *VAR_24 = VAR_13->updates[VAR_16];
  if (VAR_24->flags & VAR_1 &&
      !(VAR_24->flags & VAR_5) &&
      !(VAR_24->flags & VAR_4)) {
   FUNC_14(&VAR_18);
   FUNC_6(VAR_15, &VAR_18, VAR_24->refname);
   if (!FUNC_17(VAR_18.buf))
    FUNC_15(VAR_15, VAR_24->refname,
        VAR_9);
  }
 }







 if (VAR_20) {
  VAR_17 = FUNC_9(VAR_20, VAR_14);
  FUNC_10(VAR_20);
  VAR_20 = ((void*)0);
  VAR_19->packed_transaction = ((void*)0);
  if (VAR_17)
   goto cleanup;
 }


 for (VAR_16 = 0; VAR_16 < VAR_13->nr; VAR_16++) {
  struct ref_update *VAR_25 = VAR_13->updates[VAR_16];
  struct ref_lock *VAR_26 = VAR_25->backend_data;

  if (VAR_25->flags & VAR_1 &&
      !(VAR_25->flags & VAR_5)) {
   if (!(VAR_25->type & VAR_2) ||
       VAR_25->type & VAR_3) {

    FUNC_14(&VAR_18);
    FUNC_5(VAR_15, &VAR_18, VAR_26->ref_name);
    if (FUNC_16(VAR_18.buf, VAR_14)) {
     VAR_17 = VAR_11;
     goto cleanup;
    }
    VAR_25->flags |= VAR_0;
   }
  }
 }

 FUNC_1(VAR_15);

cleanup:
 FUNC_7(VAR_15, VAR_13);

 for (VAR_16 = 0; VAR_16 < VAR_13->nr; VAR_16++) {
  struct ref_update *VAR_27 = VAR_13->updates[VAR_16];

  if (VAR_27->flags & VAR_0) {






   FUNC_15(VAR_15, VAR_27->refname,
       VAR_8);
  }
 }

 FUNC_13(&VAR_18);
 return VAR_17;
}
