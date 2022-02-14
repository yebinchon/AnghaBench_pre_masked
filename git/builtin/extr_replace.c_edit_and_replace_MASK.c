
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct object_id*,struct object_id*,struct strbuf*,int) ;
 int FUNC_2 (int ,...) ;
 scalar_t__ FUNC_3 (struct object_id*,int,int,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const*,struct object_id*) ;
 char* FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (struct object_id*,int,int,char*) ;
 scalar_t__ FUNC_8 (char*,int *,int *) ;
 int FUNC_9 (int ,struct object_id*,int *) ;
 char const* FUNC_10 (struct object_id*) ;
 scalar_t__ FUNC_11 (struct object_id*,struct object_id*) ;
 int FUNC_12 (char const*,struct object_id*,char*,struct object_id*,int) ;
 int FUNC_13 (struct strbuf*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_14(const char *VAR_2, int VAR_3, int VAR_4)
{
 char *VAR_5;
 enum object_type VAR_6;
 struct object_id VAR_7, VAR_8, VAR_9;
 struct strbuf VAR_10 = VAR_0;

 if (FUNC_5(VAR_2, &VAR_7) < 0)
  return FUNC_2(FUNC_0("not a valid object name: '%s'"), VAR_2);

 VAR_6 = FUNC_9(VAR_1, &VAR_7, ((void*)0));
 if (VAR_6 < 0)
  return FUNC_2(FUNC_0("unable to get object type for %s"),
        FUNC_10(&VAR_7));

 if (FUNC_1(&VAR_7, &VAR_9, &VAR_10, VAR_3)) {
  FUNC_13(&VAR_10);
  return -1;
 }
 FUNC_13(&VAR_10);

 VAR_5 = FUNC_6("REPLACE_EDITOBJ");
 if (FUNC_3(&VAR_7, VAR_6, VAR_4, VAR_5)) {
  FUNC_4(VAR_5);
  return -1;
 }
 if (FUNC_8(VAR_5, ((void*)0), ((void*)0)) < 0) {
  FUNC_4(VAR_5);
  return FUNC_2(FUNC_0("editing object file failed"));
 }
 if (FUNC_7(&VAR_8, VAR_6, VAR_4, VAR_5)) {
  FUNC_4(VAR_5);
  return -1;
 }
 FUNC_4(VAR_5);

 if (FUNC_11(&VAR_7, &VAR_8))
  return FUNC_2(FUNC_0("new object is the same as the old one: '%s'"), FUNC_10(&VAR_7));

 return FUNC_12(VAR_2, &VAR_7, "replacement", &VAR_8, VAR_3);
}
