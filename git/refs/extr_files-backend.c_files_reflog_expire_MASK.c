
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {char* buf; } ;
struct ref_store {int dummy; } ;
struct lock_file {int dummy; } ;
struct ref_lock {char* ref_name; struct lock_file lk; } ;
struct object_id {int dummy; } ;
struct files_ref_store {int dummy; } ;
struct expire_reflog_cb {unsigned int flags; int last_kept_oid; void* policy_cb; int newlog; int should_prune_fn; } ;
typedef int reflog_expiry_should_prune_fn ;
typedef int (* reflog_expiry_prepare_fn ) (char const*,struct object_id const*,void*) ;
typedef int (* reflog_expiry_cleanup_fn ) (void*) ;
typedef int cb ;
struct TYPE_2__ {int hexsz; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct lock_file VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct strbuf VAR_6 ;
 scalar_t__ FUNC_0 (struct lock_file*) ;
 scalar_t__ FUNC_1 (struct ref_lock*) ;
 scalar_t__ FUNC_2 (struct lock_file*) ;
 scalar_t__ FUNC_3 (struct ref_lock*) ;
 int VAR_7 ;
 int FUNC_4 (char*,char const*,...) ;
 int VAR_8 ;
 int FUNC_5 (struct lock_file*,char*) ;
 struct files_ref_store* FUNC_6 (struct ref_store*,int ,char*) ;
 int FUNC_7 (struct files_ref_store*,struct strbuf*,char const*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct lock_file*) ;
 char* FUNC_10 (struct lock_file*) ;
 scalar_t__ FUNC_11 (struct lock_file*,char*,int ) ;
 int FUNC_12 (int *) ;
 struct ref_lock* FUNC_13 (struct files_ref_store*,char const*,struct object_id const*,int *,int *,int ,int*,struct strbuf*) ;
 int FUNC_14 (struct expire_reflog_cb*,int ,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct ref_store*,char const*,int ,struct expire_reflog_cb*) ;
 int FUNC_17 (struct ref_store*,char const*) ;
 int FUNC_18 (struct lock_file*) ;
 char* FUNC_19 (struct strbuf*,int *) ;
 int FUNC_20 (struct strbuf*) ;
 char* FUNC_21 (int ) ;
 int FUNC_22 (char const*,struct object_id const*,void*) ;
 int FUNC_23 (void*) ;
 TYPE_1__* VAR_9 ;
 int FUNC_24 (char*,int ,struct strbuf*) ;
 int FUNC_25 (struct ref_lock*) ;
 scalar_t__ FUNC_26 (int ,int ,int ) ;
 scalar_t__ FUNC_27 (int ,char*) ;

__attribute__((used)) static int FUNC_28(struct ref_store *VAR_10,
          const char *VAR_11, const struct object_id *VAR_12,
          unsigned int VAR_13,
          reflog_expiry_prepare_fn VAR_14,
          reflog_expiry_should_prune_fn VAR_15,
          reflog_expiry_cleanup_fn VAR_16,
          void *VAR_17)
{
 struct files_ref_store *VAR_18 =
  FUNC_6(VAR_10, VAR_5, "reflog_expire");
 struct lock_file VAR_19 = VAR_2;
 struct expire_reflog_cb VAR_20;
 struct ref_lock *VAR_21;
 struct strbuf VAR_22 = VAR_6;
 char *VAR_23;
 int VAR_24 = 0;
 int VAR_25;
 struct strbuf VAR_26 = VAR_6;

 FUNC_14(&VAR_20, 0, sizeof(VAR_20));
 VAR_20.flags = VAR_13;
 VAR_20.policy_cb = VAR_17;
 VAR_20.should_prune_fn = VAR_15;






 VAR_21 = FUNC_13(VAR_18, VAR_11, VAR_12,
      ((void*)0), ((void*)0), VAR_4,
      &VAR_25, &VAR_26);
 if (!VAR_21) {
  FUNC_4("cannot lock ref '%s': %s", VAR_11, VAR_26.buf);
  FUNC_20(&VAR_26);
  return -1;
 }
 if (!FUNC_17(VAR_10, VAR_11)) {
  FUNC_25(VAR_21);
  return 0;
 }

 FUNC_7(VAR_18, &VAR_22, VAR_11);
 VAR_23 = FUNC_19(&VAR_22, ((void*)0));
 if (!(VAR_13 & VAR_0)) {







  if (FUNC_11(&VAR_19, VAR_23, 0) < 0) {
   struct strbuf VAR_27 = VAR_6;
   FUNC_24(VAR_23, VAR_7, &VAR_27);
   FUNC_4("%s", VAR_27.buf);
   FUNC_20(&VAR_27);
   goto failure;
  }
  VAR_20.newlog = FUNC_5(&VAR_19, "w");
  if (!VAR_20.newlog) {
   FUNC_4("cannot fdopen %s (%s)",
         FUNC_10(&VAR_19), FUNC_21(VAR_7));
   goto failure;
  }
 }

 (*VAR_14)(VAR_11, VAR_12, VAR_20.policy_cb);
 FUNC_16(VAR_10, VAR_11, VAR_8, &VAR_20);
 (*VAR_16)(VAR_20.policy_cb);

 if (!(VAR_13 & VAR_0)) {







  int VAR_28 = (VAR_13 & VAR_1) &&
   !(VAR_25 & VAR_3) &&
   !FUNC_12(&VAR_20.last_kept_oid);

  if (FUNC_0(&VAR_19)) {
   VAR_24 |= FUNC_4("couldn't write %s: %s", VAR_23,
     FUNC_21(VAR_7));
   FUNC_18(&VAR_19);
  } else if (VAR_28 &&
      (FUNC_26(FUNC_9(&VAR_21->lk),
    FUNC_15(&VAR_20.last_kept_oid), VAR_9->hexsz) < 0 ||
       FUNC_27(FUNC_9(&VAR_21->lk), "\n") < 0 ||
       FUNC_1(VAR_21) < 0)) {
   VAR_24 |= FUNC_4("couldn't write %s",
     FUNC_10(&VAR_21->lk));
   FUNC_18(&VAR_19);
  } else if (FUNC_2(&VAR_19)) {
   VAR_24 |= FUNC_4("unable to write reflog '%s' (%s)",
     VAR_23, FUNC_21(VAR_7));
  } else if (VAR_28 && FUNC_3(VAR_21)) {
   VAR_24 |= FUNC_4("couldn't set %s", VAR_21->ref_name);
  }
 }
 FUNC_8(VAR_23);
 FUNC_25(VAR_21);
 return VAR_24;

 failure:
 FUNC_18(&VAR_19);
 FUNC_8(VAR_23);
 FUNC_25(VAR_21);
 return -1;
}
