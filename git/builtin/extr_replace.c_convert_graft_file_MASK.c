
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; int len; } ;
struct argv_array {int argv; scalar_t__ argc; } ;
typedef int FILE ;


 struct argv_array VAR_0 ;
 scalar_t__ VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct argv_array*) ;
 int FUNC_2 (struct argv_array*,char*) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,char*) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (struct strbuf*,char*,char*) ;
 scalar_t__ FUNC_8 (struct strbuf*,int *) ;
 int FUNC_9 (struct strbuf*) ;
 int VAR_4 ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int ,char*) ;

__attribute__((used)) static int FUNC_12(int VAR_5)
{
 const char *VAR_6 = FUNC_6(VAR_4);
 FILE *VAR_7 = FUNC_5(VAR_6, "r");
 struct strbuf VAR_8 = VAR_2, VAR_9 = VAR_2;
 struct argv_array VAR_10 = VAR_0;

 if (!VAR_7)
  return -1;

 VAR_3 = 0;
 while (FUNC_8(&VAR_8, VAR_7) != VAR_1) {
  if (*VAR_8.buf == '#')
   continue;

  FUNC_2(&VAR_10, VAR_8.buf);
  if (VAR_10.argc && FUNC_3(VAR_10.argc, VAR_10.argv, VAR_5, 1))
   FUNC_7(&VAR_9, "\n\t%s", VAR_8.buf);
  FUNC_1(&VAR_10);
 }
 FUNC_4(VAR_7);

 FUNC_9(&VAR_8);

 if (!VAR_9.len)
  return FUNC_10(VAR_6);

 FUNC_11(FUNC_0("could not convert the following graft(s):\n%s"), VAR_9.buf);
 FUNC_9(&VAR_9);

 return -1;
}
