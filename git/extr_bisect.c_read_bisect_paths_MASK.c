
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct argv_array {int dummy; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,int ) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,struct argv_array*) ;
 scalar_t__ FUNC_5 (struct strbuf*,int *) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (struct strbuf*) ;
 int * FUNC_8 (char const*,char*) ;

__attribute__((used)) static void FUNC_9(struct argv_array *VAR_2)
{
 struct strbuf VAR_3 = VAR_1;
 const char *VAR_4 = FUNC_3();
 FILE *VAR_5 = FUNC_8(VAR_4, "r");

 while (FUNC_5(&VAR_3, VAR_5) != VAR_0) {
  FUNC_7(&VAR_3);
  if (FUNC_4(VAR_3.buf, VAR_2))
   FUNC_1(FUNC_0("Badly quoted content in file '%s': %s"),
       VAR_4, VAR_3.buf);
 }

 FUNC_6(&VAR_3);
 FUNC_2(VAR_5);
}
