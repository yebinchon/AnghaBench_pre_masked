
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct strbuf {int buf; } ;
struct ref_update {int flags; int type; int refname; struct ref_lock* backend_data; int new_oid; struct ref_update* parent_update; int old_oid; } ;
struct ref_transaction {int dummy; } ;
struct ref_lock {int old_oid; } ;
struct files_ref_store {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct strbuf VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct ref_update*,int *,struct strbuf*) ;
 scalar_t__ FUNC_1 (struct ref_lock*) ;
 int FUNC_2 (struct files_ref_store*,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct files_ref_store*,int ,int,struct string_list*,int *,struct ref_lock**,struct strbuf*,int*,struct strbuf*) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (struct ref_update*) ;
 scalar_t__ FUNC_9 (int *,int ,int ,int *,int *) ;
 int FUNC_10 (struct ref_update*,struct ref_transaction*,char const*,struct string_list*,struct strbuf*) ;
 int FUNC_11 (struct ref_update*,int ,struct ref_transaction*,struct string_list*,struct strbuf*) ;
 int FUNC_12 (struct strbuf*,char*,int ,...) ;
 char* FUNC_13 (struct strbuf*,int *) ;
 int FUNC_14 (struct strbuf*) ;
 scalar_t__ FUNC_15 (struct ref_lock*,int *,struct strbuf*) ;

__attribute__((used)) static int FUNC_16(struct files_ref_store *VAR_9,
          struct ref_update *VAR_10,
          struct ref_transaction *VAR_11,
          const char *VAR_12,
          struct string_list *VAR_13,
          struct strbuf *VAR_14)
{
 struct strbuf VAR_15 = VAR_7;
 int VAR_16 = (VAR_10->flags & VAR_2) &&
  !FUNC_4(&VAR_10->old_oid);
 int VAR_17 = 0;
 struct ref_lock *VAR_18;

 FUNC_2(VAR_9, "lock_ref_for_update");

 if ((VAR_10->flags & VAR_1) && FUNC_4(&VAR_10->new_oid))
  VAR_10->flags |= VAR_0;

 if (VAR_12) {
  VAR_17 = FUNC_10(VAR_10, VAR_11, VAR_12,
     VAR_13, VAR_14);
  if (VAR_17)
   goto out;
 }

 VAR_17 = FUNC_5(VAR_9, VAR_10->refname, VAR_16,
      VAR_13, ((void*)0),
      &VAR_18, &VAR_15,
      &VAR_10->type, VAR_14);
 if (VAR_17) {
  char *VAR_19;

  VAR_19 = FUNC_13(VAR_14, ((void*)0));
  FUNC_12(VAR_14, "cannot lock ref '%s': %s",
       FUNC_8(VAR_10), VAR_19);
  FUNC_3(VAR_19);
  goto out;
 }

 VAR_10->backend_data = VAR_18;

 if (VAR_10->type & VAR_3) {
  if (VAR_10->flags & VAR_6) {





   if (FUNC_9(&VAR_9->base,
            VAR_15.buf, 0,
            &VAR_18->old_oid, ((void*)0))) {
    if (VAR_10->flags & VAR_2) {
     FUNC_12(VAR_14, "cannot lock ref '%s': "
          "error reading reference",
          FUNC_8(VAR_10));
     VAR_17 = VAR_8;
     goto out;
    }
   } else if (FUNC_0(VAR_10, &VAR_18->old_oid, VAR_14)) {
    VAR_17 = VAR_8;
    goto out;
   }
  } else {







   VAR_17 = FUNC_11(VAR_10,
        VAR_15.buf, VAR_11,
        VAR_13, VAR_14);
   if (VAR_17)
    goto out;
  }
 } else {
  struct ref_update *VAR_20;

  if (FUNC_0(VAR_10, &VAR_18->old_oid, VAR_14)) {
   VAR_17 = VAR_8;
   goto out;
  }






  for (VAR_20 = VAR_10->parent_update;
       VAR_20;
       VAR_20 = VAR_20->parent_update) {
   struct ref_lock *VAR_21 = VAR_20->backend_data;
   FUNC_6(&VAR_21->old_oid, &VAR_18->old_oid);
  }
 }

 if ((VAR_10->flags & VAR_1) &&
     !(VAR_10->flags & VAR_0) &&
     !(VAR_10->flags & VAR_4)) {
  if (!(VAR_10->type & VAR_3) &&
      FUNC_7(&VAR_18->old_oid, &VAR_10->new_oid)) {




  } else if (FUNC_15(VAR_18, &VAR_10->new_oid,
       VAR_14)) {
   char *VAR_22 = FUNC_13(VAR_14, ((void*)0));





   VAR_10->backend_data = ((void*)0);
   FUNC_12(VAR_14,
        "cannot update ref '%s': %s",
        VAR_10->refname, VAR_22);
   FUNC_3(VAR_22);
   VAR_17 = VAR_8;
   goto out;
  } else {
   VAR_10->flags |= VAR_5;
  }
 }
 if (!(VAR_10->flags & VAR_5)) {





  if (FUNC_1(VAR_18)) {
   FUNC_12(VAR_14, "couldn't close '%s.lock'",
        VAR_10->refname);
   VAR_17 = VAR_8;
   goto out;
  }
 }

out:
 FUNC_14(&VAR_15);
 return VAR_17;
}
