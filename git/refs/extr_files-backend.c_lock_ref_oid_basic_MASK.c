
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct strbuf {int buf; } ;
struct object_id {int dummy; } ;
struct ref_lock {int lk; int ref_name; struct object_id const old_oid; } ;
struct files_ref_store {int base; int * packed_ref_store; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct strbuf VAR_6 ;
 int FUNC_0 (struct strbuf*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct files_ref_store*,char*) ;
 int FUNC_2 (struct files_ref_store*,struct strbuf*,char const*) ;
 scalar_t__ FUNC_3 (struct object_id const*) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int *,char const*,int,struct object_id const*,int*) ;
 scalar_t__ FUNC_6 (int *,char const*,struct string_list const*,struct string_list const*,struct strbuf*) ;
 scalar_t__ FUNC_7 (struct strbuf*) ;
 int FUNC_8 (struct strbuf*,char*,char const*,...) ;
 int FUNC_9 (struct strbuf*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int,struct strbuf*) ;
 int FUNC_12 (struct ref_lock*) ;
 scalar_t__ FUNC_13 (int *,struct ref_lock*,struct object_id const*,int,struct strbuf*) ;
 struct ref_lock* FUNC_14 (int,int) ;
 int FUNC_15 (char const*) ;

__attribute__((used)) static struct ref_lock *FUNC_16(struct files_ref_store *VAR_9,
        const char *VAR_10,
        const struct object_id *VAR_11,
        const struct string_list *VAR_12,
        const struct string_list *VAR_13,
        unsigned int VAR_14, int *VAR_15,
        struct strbuf *VAR_16)
{
 struct strbuf VAR_17 = VAR_6;
 struct ref_lock *VAR_18;
 int VAR_19 = 0;
 int VAR_20 = (VAR_11 && !FUNC_3(VAR_11));
 int VAR_21 = VAR_4;
 int VAR_22;

 FUNC_1(VAR_9, "lock_ref_oid_basic");
 FUNC_0(VAR_16);

 VAR_18 = FUNC_14(1, sizeof(struct ref_lock));

 if (VAR_20)
  VAR_21 |= VAR_5;
 if (VAR_14 & VAR_2)
  VAR_21 |= VAR_3;

 FUNC_2(VAR_9, &VAR_17, VAR_10);
 VAR_22 = !!FUNC_5(&VAR_9->base,
          VAR_10, VAR_21,
          &VAR_18->old_oid, VAR_15);
 if (!VAR_22 && VAR_8 == VAR_0) {






  if (FUNC_7(&VAR_17)) {
   VAR_19 = VAR_8;
   if (!FUNC_6(
         &VAR_9->base,
         VAR_10, VAR_12, VAR_13, VAR_16))
    FUNC_8(VAR_16, "there are still refs under '%s'",
         VAR_10);
   goto error_return;
  }
  VAR_22 = !!FUNC_5(&VAR_9->base,
           VAR_10, VAR_21,
           &VAR_18->old_oid, VAR_15);
 }
 if (!VAR_22) {
  VAR_19 = VAR_8;
  if (VAR_19 != VAR_1 ||
      !FUNC_6(&VAR_9->base, VAR_10,
         VAR_12, VAR_13, VAR_16))
   FUNC_8(VAR_16, "unable to resolve reference '%s': %s",
        VAR_10, FUNC_10(VAR_19));

  goto error_return;
 }







 if (FUNC_3(&VAR_18->old_oid) &&
     FUNC_6(VAR_9->packed_ref_store, VAR_10,
       VAR_12, VAR_13, VAR_16)) {
  VAR_19 = VAR_1;
  goto error_return;
 }

 VAR_18->ref_name = FUNC_15(VAR_10);

 if (FUNC_4(VAR_17.buf, VAR_7, &VAR_18->lk)) {
  VAR_19 = VAR_8;
  FUNC_11(VAR_17.buf, VAR_8, VAR_16);
  goto error_return;
 }

 if (FUNC_13(&VAR_9->base, VAR_18, VAR_11, VAR_20, VAR_16)) {
  VAR_19 = VAR_8;
  goto error_return;
 }
 goto out;

 error_return:
 FUNC_12(VAR_18);
 VAR_18 = ((void*)0);

 out:
 FUNC_9(&VAR_17);
 VAR_8 = VAR_19;
 return VAR_18;
}
