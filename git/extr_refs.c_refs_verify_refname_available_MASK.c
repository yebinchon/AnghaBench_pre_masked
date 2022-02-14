
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct strbuf {int len; char const* buf; } ;
struct ref_store {int dummy; } ;
struct ref_iterator {char const* refname; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct strbuf*) ;
 char* FUNC_3 (char const*,struct string_list const*,struct string_list const*) ;
 int FUNC_4 (struct ref_iterator*) ;
 int FUNC_5 (struct ref_iterator*) ;
 int FUNC_6 (struct ref_store*,char const*,struct object_id*,struct strbuf*,unsigned int*) ;
 struct ref_iterator* FUNC_7 (struct ref_store*,char const*,int ,int ) ;
 int FUNC_8 (struct strbuf*,char const*,int) ;
 int FUNC_9 (struct strbuf*,char) ;
 int FUNC_10 (struct strbuf*,int ,char const*,char const*) ;
 int FUNC_11 (struct strbuf*,char const*) ;
 int FUNC_12 (struct strbuf*,scalar_t__) ;
 int FUNC_13 (struct strbuf*) ;
 char* FUNC_14 (char const*,char) ;
 scalar_t__ FUNC_15 (struct string_list const*,char const*) ;
 scalar_t__ FUNC_16 (char const*) ;

int FUNC_17(struct ref_store *VAR_4,
      const char *VAR_5,
      const struct string_list *VAR_6,
      const struct string_list *VAR_7,
      struct strbuf *VAR_8)
{
 const char *VAR_9;
 const char *VAR_10;
 struct strbuf VAR_11 = VAR_3;
 struct strbuf VAR_12 = VAR_3;
 struct object_id VAR_13;
 unsigned int VAR_14;
 struct ref_iterator *VAR_15;
 int VAR_16;
 int VAR_17 = -1;






 FUNC_2(VAR_8);

 FUNC_12(&VAR_11, FUNC_16(VAR_5) + 1);
 for (VAR_9 = FUNC_14(VAR_5, '/'); VAR_9; VAR_9 = FUNC_14(VAR_9 + 1, '/')) {

  FUNC_8(&VAR_11, VAR_5 + VAR_11.len, VAR_9 - VAR_5 - VAR_11.len);






  if (VAR_7 && FUNC_15(VAR_7, VAR_11.buf))
   continue;

  if (!FUNC_6(VAR_4, VAR_11.buf, &VAR_13, &VAR_12, &VAR_14)) {
   FUNC_10(VAR_8, FUNC_1("'%s' exists; cannot create '%s'"),
        VAR_11.buf, VAR_5);
   goto cleanup;
  }

  if (VAR_6 && FUNC_15(VAR_6, VAR_11.buf)) {
   FUNC_10(VAR_8, FUNC_1("cannot process '%s' and '%s' at the same time"),
        VAR_5, VAR_11.buf);
   goto cleanup;
  }
 }
 FUNC_11(&VAR_11, VAR_5 + VAR_11.len);
 FUNC_9(&VAR_11, '/');

 VAR_15 = FUNC_7(VAR_4, VAR_11.buf, 0,
           VAR_0);
 while ((VAR_16 = FUNC_5(VAR_15)) == VAR_2) {
  if (VAR_7 &&
      FUNC_15(VAR_7, VAR_15->refname))
   continue;

  FUNC_10(VAR_8, FUNC_1("'%s' exists; cannot create '%s'"),
       VAR_15->refname, VAR_5);
  FUNC_4(VAR_15);
  goto cleanup;
 }

 if (VAR_16 != VAR_1)
  FUNC_0("error while iterating over references");

 VAR_10 = FUNC_3(VAR_11.buf, VAR_6, VAR_7);
 if (VAR_10)
  FUNC_10(VAR_8, FUNC_1("cannot process '%s' and '%s' at the same time"),
       VAR_5, VAR_10);
 else
  VAR_17 = 0;

cleanup:
 FUNC_13(&VAR_12);
 FUNC_13(&VAR_11);
 return VAR_17;
}
