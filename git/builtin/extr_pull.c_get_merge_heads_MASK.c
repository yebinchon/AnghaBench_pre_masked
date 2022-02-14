
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct oid_array {int dummy; } ;
struct object_id {int dummy; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (struct oid_array*,struct object_id*) ;
 scalar_t__ FUNC_3 (int ,struct object_id*,char const**) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (struct strbuf*,int *) ;
 int FUNC_6 (struct strbuf*) ;
 int VAR_2 ;
 int * FUNC_7 (char const*,char*) ;

__attribute__((used)) static void FUNC_8(struct oid_array *VAR_3)
{
 const char *VAR_4 = FUNC_1(VAR_2);
 FILE *VAR_5;
 struct strbuf VAR_6 = VAR_1;
 struct object_id VAR_7;

 VAR_5 = FUNC_7(VAR_4, "r");
 while (FUNC_5(&VAR_6, VAR_5) != VAR_0) {
  const char *VAR_8;
  if (FUNC_3(VAR_6.buf, &VAR_7, &VAR_8))
   continue;
  if (FUNC_4(VAR_8, "\tnot-for-merge\t"))
   continue;
  FUNC_2(VAR_3, &VAR_7);
 }
 FUNC_0(VAR_5);
 FUNC_6(&VAR_6);
}
