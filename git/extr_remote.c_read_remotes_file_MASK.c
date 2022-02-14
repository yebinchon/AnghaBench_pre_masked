
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct remote {int configured_in_repo; int fetch; int push; int origin; int name; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_0 (struct remote*,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int ,char*,char const**) ;
 int FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (struct strbuf*,int *) ;
 int FUNC_8 (struct strbuf*) ;
 int FUNC_9 (struct strbuf*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct remote *VAR_3)
{
 struct strbuf VAR_4 = VAR_2;
 FILE *VAR_5 = FUNC_2(FUNC_3("remotes/%s", VAR_3->name), "r");

 if (!VAR_5)
  return;
 VAR_3->configured_in_repo = 1;
 VAR_3->origin = VAR_1;
 while (FUNC_7(&VAR_4, VAR_5) != VAR_0) {
  const char *VAR_6;

  FUNC_9(&VAR_4);

  if (FUNC_5(VAR_4.buf, "URL:", &VAR_6))
   FUNC_0(VAR_3, FUNC_10(FUNC_6(VAR_6)));
  else if (FUNC_5(VAR_4.buf, "Push:", &VAR_6))
   FUNC_4(&VAR_3->push, FUNC_6(VAR_6));
  else if (FUNC_5(VAR_4.buf, "Pull:", &VAR_6))
   FUNC_4(&VAR_3->fetch, FUNC_6(VAR_6));
 }
 FUNC_8(&VAR_4);
 FUNC_1(VAR_5);
}
