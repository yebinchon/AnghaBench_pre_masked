
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; } ;
struct object_id {int dummy; } ;
struct argv_array {int argv; } ;


 struct argv_array VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (struct argv_array*) ;
 int FUNC_2 (struct argv_array*,char*,char const*,char*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char const*,struct object_id*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (struct strbuf*,char const*) ;
 int FUNC_12 (struct strbuf*,int ,int ) ;
 int FUNC_13 (struct strbuf*) ;
 int FUNC_14 (struct strbuf*) ;

__attribute__((used)) static int FUNC_15(const char *VAR_3)
{
 struct strbuf VAR_4 = VAR_2;

 if (!VAR_3) {
  if (FUNC_12(&VAR_4, FUNC_8(), 0) < 1) {
   FUNC_9(FUNC_0("We are not bisecting.\n"));
   return 0;
  }
  FUNC_14(&VAR_4);
 } else {
  struct object_id VAR_5;

  if (FUNC_6(VAR_3, &VAR_5))
   return FUNC_4(FUNC_0("'%s' is not a valid commit"), VAR_3);
  FUNC_11(&VAR_4, VAR_3);
 }

 if (!FUNC_5(FUNC_7())) {
  struct argv_array VAR_6 = VAR_0;

  FUNC_2(&VAR_6, "checkout", VAR_4.buf, "--", ((void*)0));
  if (FUNC_10(VAR_6.argv, VAR_1)) {
   FUNC_13(&VAR_4);
   FUNC_1(&VAR_6);
   return FUNC_4(FUNC_0("could not check out original"
           " HEAD '%s'. Try 'git bisect"
           " reset <commit>'."), VAR_4.buf);
  }
  FUNC_1(&VAR_6);
 }

 FUNC_13(&VAR_4);
 return FUNC_3();
}
