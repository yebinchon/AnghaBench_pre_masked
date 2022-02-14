
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oid; } ;
struct test_entry {char* name; TYPE_1__ entry; } ;
struct strbuf {int * buf; } ;
struct oidmap_iter {int dummy; } ;
struct oidmap {int dummy; } ;
struct object_id {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct test_entry*,int ,char*) ;
 struct oidmap VAR_2 ;
 struct strbuf VAR_3 ;
 int FUNC_1 (struct test_entry*) ;
 scalar_t__ FUNC_2 (char*,struct object_id*) ;
 int VAR_4 ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct object_id*) ;
 int FUNC_5 (struct oidmap*,int) ;
 struct test_entry* FUNC_6 (struct oidmap*,struct object_id*) ;
 int FUNC_7 (struct oidmap*,int ) ;
 int FUNC_8 (struct oidmap*,struct oidmap_iter*) ;
 struct test_entry* FUNC_9 (struct oidmap_iter*) ;
 struct test_entry* FUNC_10 (struct oidmap*,struct test_entry*) ;
 struct test_entry* FUNC_11 (struct oidmap*,struct object_id*) ;
 int FUNC_12 (char*,char*,...) ;
 int FUNC_13 (char*) ;
 int FUNC_14 () ;
 int VAR_5 ;
 scalar_t__ FUNC_15 (struct strbuf*,int ) ;
 int FUNC_16 (struct strbuf*) ;
 int FUNC_17 (char*,char*) ;
 char* FUNC_18 (int *,int ) ;

int FUNC_19(int VAR_6, const char **VAR_7)
{
 struct strbuf VAR_8 = VAR_3;
 struct oidmap VAR_9 = VAR_2;

 FUNC_14();


 FUNC_7(&VAR_9, 0);


 while (FUNC_15(&VAR_8, VAR_5) != VAR_1) {
  char *VAR_10, *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
  struct test_entry *VAR_13;
  struct object_id VAR_14;


  VAR_10 = FUNC_18(VAR_8.buf, VAR_0);

  if (!VAR_10 || *VAR_10 == '#')
   continue;

  VAR_11 = FUNC_18(((void*)0), VAR_0);
  if (VAR_11)
   VAR_12 = FUNC_18(((void*)0), VAR_0);

  if (!FUNC_17("put", VAR_10) && VAR_11 && VAR_12) {

   if (FUNC_2(VAR_11, &VAR_14)) {
    FUNC_12("Unknown oid: %s\n", VAR_11);
    continue;
   }


   FUNC_0(VAR_13, VAR_4, VAR_12);
   FUNC_4(&VAR_13->entry.oid, &VAR_14);


   VAR_13 = FUNC_10(&VAR_9, VAR_13);


   FUNC_13(VAR_13 ? VAR_13->name : "NULL");
   FUNC_1(VAR_13);

  } else if (!FUNC_17("get", VAR_10) && VAR_11) {

   if (FUNC_2(VAR_11, &VAR_14)) {
    FUNC_12("Unknown oid: %s\n", VAR_11);
    continue;
   }


   VAR_13 = FUNC_6(&VAR_9, &VAR_14);


   FUNC_13(VAR_13 ? VAR_13->name : "NULL");

  } else if (!FUNC_17("remove", VAR_10) && VAR_11) {

   if (FUNC_2(VAR_11, &VAR_14)) {
    FUNC_12("Unknown oid: %s\n", VAR_11);
    continue;
   }


   VAR_13 = FUNC_11(&VAR_9, &VAR_14);


   FUNC_13(VAR_13 ? VAR_13->name : "NULL");
   FUNC_1(VAR_13);

  } else if (!FUNC_17("iterate", VAR_10)) {

   struct oidmap_iter VAR_15;
   FUNC_8(&VAR_9, &VAR_15);
   while ((VAR_13 = FUNC_9(&VAR_15)))
    FUNC_12("%s %s\n", FUNC_3(&VAR_13->entry.oid), VAR_13->name);

  } else {

   FUNC_12("Unknown command %s\n", VAR_10);

  }
 }

 FUNC_16(&VAR_8);
 FUNC_5(&VAR_9, 1);
 return 0;
}
