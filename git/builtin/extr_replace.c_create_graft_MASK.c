
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int len; int buf; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct commit*,int,char const**) ;
 int VAR_1 ;
 int FUNC_2 (int ,char const*) ;
 char* FUNC_3 (struct commit*,unsigned long*) ;
 scalar_t__ FUNC_4 (char const*,struct object_id*) ;
 struct commit* FUNC_5 (int ,struct object_id*) ;
 char const* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,struct object_id*) ;
 scalar_t__ FUNC_8 (struct strbuf*) ;
 int FUNC_9 (char const*,int *,char*,struct object_id*,int) ;
 scalar_t__ FUNC_10 (struct strbuf*,int,char const**) ;
 int FUNC_11 (struct strbuf*,char const*,unsigned long) ;
 int FUNC_12 (struct strbuf*) ;
 int VAR_2 ;
 int FUNC_13 (struct commit*,char const*) ;
 int FUNC_14 (int ,...) ;
 scalar_t__ FUNC_15 (int ,int ,int ,struct object_id*) ;

__attribute__((used)) static int FUNC_16(int VAR_3, const char **VAR_4, int VAR_5, int VAR_6)
{
 struct object_id VAR_7, VAR_8;
 const char *VAR_9 = VAR_4[0];
 struct commit *VAR_10;
 struct strbuf VAR_11 = VAR_0;
 const char *VAR_12;
 unsigned long VAR_13;

 if (FUNC_4(VAR_9, &VAR_7) < 0)
  return FUNC_2(FUNC_0("not a valid object name: '%s'"), VAR_9);
 VAR_10 = FUNC_5(VAR_2, &VAR_7);
 if (!VAR_10)
  return FUNC_2(FUNC_0("could not parse %s"), VAR_9);

 VAR_12 = FUNC_3(VAR_10, &VAR_13);
 FUNC_11(&VAR_11, VAR_12, VAR_13);
 FUNC_13(VAR_10, VAR_12);

 if (FUNC_10(&VAR_11, VAR_3 - 1, &VAR_4[1]) < 0) {
  FUNC_12(&VAR_11);
  return -1;
 }

 if (FUNC_8(&VAR_11)) {
  FUNC_14(FUNC_0("the original commit '%s' has a gpg signature"), VAR_9);
  FUNC_14(FUNC_0("the signature will be removed in the replacement commit!"));
 }

 if (FUNC_1(VAR_10, VAR_3, VAR_4)) {
  FUNC_12(&VAR_11);
  return -1;
 }

 if (FUNC_15(VAR_11.buf, VAR_11.len, VAR_1, &VAR_8)) {
  FUNC_12(&VAR_11);
  return FUNC_2(FUNC_0("could not write replacement commit for: '%s'"),
        VAR_9);
 }

 FUNC_12(&VAR_11);

 if (FUNC_7(&VAR_10->object.oid, &VAR_8)) {
  if (VAR_6) {
   FUNC_14(FUNC_0("graft for '%s' unnecessary"),
    FUNC_6(&VAR_10->object.oid));
   return 0;
  }
  return FUNC_2(FUNC_0("new commit is the same as the old one: '%s'"),
        FUNC_6(&VAR_10->object.oid));
 }

 return FUNC_9(VAR_9, &VAR_10->object.oid,
      "replacement", &VAR_8, VAR_5);
}
