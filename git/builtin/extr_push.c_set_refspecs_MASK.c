
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct remote {int dummy; } ;
struct ref {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 struct ref* FUNC_2 () ;
 char* FUNC_3 (char const*,struct remote*,struct ref*) ;
 int FUNC_4 (int *,char const*) ;
 struct remote* FUNC_5 (char const*) ;
 int VAR_2 ;
 int FUNC_6 (struct strbuf*,char*,char const*) ;
 char* FUNC_7 (struct strbuf*,int *) ;
 scalar_t__ FUNC_8 (char const*,char) ;
 int FUNC_9 (char*,char const*) ;

__attribute__((used)) static void FUNC_10(const char **VAR_3, int VAR_4, const char *VAR_5)
{
 struct remote *VAR_6 = ((void*)0);
 struct ref *VAR_7 = ((void*)0);
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  const char *VAR_9 = VAR_3[VAR_8];
  if (!FUNC_9("tag", VAR_9)) {
   struct strbuf VAR_10 = VAR_0;
   if (VAR_4 <= ++VAR_8)
    FUNC_1(FUNC_0("tag shorthand without <tag>"));
   VAR_9 = VAR_3[VAR_8];
   if (VAR_1)
    FUNC_6(&VAR_10, ":refs/tags/%s", VAR_9);
   else
    FUNC_6(&VAR_10, "refs/tags/%s", VAR_9);
   VAR_9 = FUNC_7(&VAR_10, ((void*)0));
  } else if (VAR_1) {
   struct strbuf VAR_11 = VAR_0;
   if (FUNC_8(VAR_9, ':'))
    FUNC_1(FUNC_0("--delete only accepts plain target ref names"));
   FUNC_6(&VAR_11, ":%s", VAR_9);
   VAR_9 = FUNC_7(&VAR_11, ((void*)0));
  } else if (!FUNC_8(VAR_9, ':')) {
   if (!VAR_6) {

    VAR_6 = FUNC_5(VAR_5);
    VAR_7 = FUNC_2();
   }
   VAR_9 = FUNC_3(VAR_9, VAR_6, VAR_7);
  }
  FUNC_4(&VAR_2, VAR_9);
 }
}
