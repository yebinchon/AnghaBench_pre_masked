
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct strbuf {char const* buf; } ;
struct ref_lock {int old_oid; int lk; int ref_name; } ;
struct files_ref_store {int * packed_ref_store; int base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;



 struct strbuf VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct strbuf*) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct files_ref_store*,char*) ;
 scalar_t__ FUNC_2 (int *,char const*,int *,struct strbuf*,unsigned int*) ;
 int FUNC_3 (struct files_ref_store*,struct strbuf*,char const*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,char const*,int ,int ) ;
 scalar_t__ FUNC_6 (int *,char const*,struct string_list const*,struct string_list const*,struct strbuf*) ;
 scalar_t__ FUNC_7 (struct strbuf*,int ) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (struct strbuf*,char*,char const*,...) ;
 int FUNC_10 (struct strbuf*) ;
 int FUNC_11 (struct strbuf*) ;
 char const* FUNC_12 (scalar_t__) ;
 int FUNC_13 (char const*,scalar_t__,struct strbuf*) ;
 int FUNC_14 (struct ref_lock*) ;
 struct ref_lock* FUNC_15 (int,int) ;
 int FUNC_16 (char const*) ;

__attribute__((used)) static int FUNC_17(struct files_ref_store *VAR_10,
   const char *VAR_11, int VAR_12,
   const struct string_list *VAR_13,
   const struct string_list *VAR_14,
   struct ref_lock **VAR_15,
   struct strbuf *VAR_16,
   unsigned int *VAR_17,
   struct strbuf *VAR_18)
{
 struct ref_lock *VAR_19;
 struct strbuf VAR_20 = VAR_6;
 int VAR_21 = 3;
 int VAR_22 = VAR_7;

 FUNC_0(VAR_18);
 FUNC_1(VAR_10, "lock_raw_ref");

 *VAR_17 = 0;



 *VAR_15 = VAR_19 = FUNC_15(1, sizeof(*VAR_19));

 VAR_19->ref_name = FUNC_16(VAR_11);
 FUNC_3(VAR_10, &VAR_20, VAR_11);

retry:
 switch (FUNC_8(VAR_20.buf)) {
 case 129:
  break;
 case 130:
  if (FUNC_6(&VAR_10->base, VAR_11,
        VAR_13, VAR_14, VAR_18)) {
   if (VAR_12) {





    FUNC_11(VAR_18);
    FUNC_9(VAR_18, "unable to resolve reference '%s'",
         VAR_11);
   } else {





    VAR_22 = VAR_8;
   }
  } else {





   FUNC_9(VAR_18, "unable to create lock file %s.lock; "
        "non-directory in the way",
        VAR_20.buf);
  }
  goto error_return;
 case 128:

  if (--VAR_21 > 0)
   goto retry;

 default:
  FUNC_9(VAR_18, "unable to create directory for %s",
       VAR_20.buf);
  goto error_return;
 }

 if (FUNC_5(
       &VAR_19->lk, VAR_20.buf, VAR_3,
       FUNC_4()) < 0) {
  if (VAR_9 == VAR_2 && --VAR_21 > 0) {





   goto retry;
  } else {
   FUNC_13(VAR_20.buf, VAR_9, VAR_18);
   goto error_return;
  }
 }






 if (FUNC_2(&VAR_10->base, VAR_11,
          &VAR_19->old_oid, VAR_16, VAR_17)) {
  if (VAR_9 == VAR_2) {
   if (VAR_12) {

    FUNC_9(VAR_18, "unable to resolve reference '%s'",
         VAR_11);
    goto error_return;
   } else {
   }
  } else if (VAR_9 == VAR_1) {
   if (VAR_12) {

    FUNC_9(VAR_18, "unable to resolve reference '%s'",
         VAR_11);
    goto error_return;
   } else if (FUNC_7(&VAR_20,
         VAR_5)) {
    if (FUNC_6(
          &VAR_10->base, VAR_11,
          VAR_13, VAR_14, VAR_18)) {




     VAR_22 = VAR_8;
     goto error_return;
    } else {






     FUNC_9(VAR_18, "there is a non-empty directory '%s' "
          "blocking reference '%s'",
          VAR_20.buf, VAR_11);
     goto error_return;
    }
   }
  } else if (VAR_9 == VAR_0 && (*VAR_17 & VAR_4)) {
   FUNC_9(VAR_18, "unable to resolve reference '%s': "
        "reference broken", VAR_11);
   goto error_return;
  } else {
   FUNC_9(VAR_18, "unable to resolve reference '%s': %s",
        VAR_11, FUNC_12(VAR_9));
   goto error_return;
  }






  if (FUNC_6(
        VAR_10->packed_ref_store, VAR_11,
        VAR_13, VAR_14, VAR_18))
   goto error_return;
 }

 VAR_22 = 0;
 goto out;

error_return:
 FUNC_14(VAR_19);
 *VAR_15 = ((void*)0);

out:
 FUNC_10(&VAR_20);
 return VAR_22;
}
