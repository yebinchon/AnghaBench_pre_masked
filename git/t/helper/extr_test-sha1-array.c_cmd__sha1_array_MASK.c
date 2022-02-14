
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; } ;
struct oid_array {int dummy; } ;
struct object_id {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct oid_array VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,struct object_id*) ;
 int FUNC_2 (struct oid_array*,struct object_id*) ;
 int FUNC_3 (struct oid_array*) ;
 int FUNC_4 (struct oid_array*,int ,int *) ;
 int FUNC_5 (struct oid_array*,struct object_id*) ;
 int VAR_3 ;
 int FUNC_6 (char*,int) ;
 scalar_t__ FUNC_7 (char const*,char*,char const**) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (struct strbuf*,int ) ;
 int FUNC_9 (char const*,char*) ;

int FUNC_10(int VAR_5, const char **VAR_6)
{
 struct oid_array VAR_7 = VAR_1;
 struct strbuf VAR_8 = VAR_2;

 while (FUNC_8(&VAR_8, VAR_4) != VAR_0) {
  const char *VAR_9;
  struct object_id VAR_10;

  if (FUNC_7(VAR_8.buf, "append ", &VAR_9)) {
   if (FUNC_1(VAR_9, &VAR_10))
    FUNC_0("not a hexadecimal SHA1: %s", VAR_9);
   FUNC_2(&VAR_7, &VAR_10);
  } else if (FUNC_7(VAR_8.buf, "lookup ", &VAR_9)) {
   if (FUNC_1(VAR_9, &VAR_10))
    FUNC_0("not a hexadecimal SHA1: %s", VAR_9);
   FUNC_6("%d\n", FUNC_5(&VAR_7, &VAR_10));
  } else if (!FUNC_9(VAR_8.buf, "clear"))
   FUNC_3(&VAR_7);
  else if (!FUNC_9(VAR_8.buf, "for_each_unique"))
   FUNC_4(&VAR_7, VAR_3, ((void*)0));
  else
   FUNC_0("unknown command: %s", VAR_8.buf);
 }
 return 0;
}
