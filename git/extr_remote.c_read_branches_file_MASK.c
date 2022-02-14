
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; int len; } ;
struct remote {int configured_in_repo; int fetch_tags; int push; int fetch; int name; int origin; } ;
typedef int FILE ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (struct remote*,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct strbuf*,char*,char*,...) ;
 int FUNC_6 (struct strbuf*,int *) ;
 int FUNC_7 (struct strbuf*,int *) ;
 int FUNC_8 (struct strbuf*) ;
 int FUNC_9 (struct strbuf*) ;
 int FUNC_10 (struct strbuf*) ;
 char* FUNC_11 (int ,char) ;

__attribute__((used)) static void FUNC_12(struct remote *VAR_2)
{
 char *VAR_3;
 struct strbuf VAR_4 = VAR_1;
 FILE *VAR_5 = FUNC_2(FUNC_3("branches/%s", VAR_2->name), "r");

 if (!VAR_5)
  return;

 FUNC_7(&VAR_4, VAR_5);
 FUNC_1(VAR_5);
 FUNC_10(&VAR_4);
 if (!VAR_4.len) {
  FUNC_8(&VAR_4);
  return;
 }

 VAR_2->configured_in_repo = 1;
 VAR_2->origin = VAR_0;







 VAR_3 = FUNC_11(VAR_4.buf, '#');
 if (VAR_3)
  *(VAR_3++) = '\0';
 else
  VAR_3 = "master";

 FUNC_0(VAR_2, FUNC_6(&VAR_4, ((void*)0)));
 FUNC_5(&VAR_4, "refs/heads/%s:refs/heads/%s",
      VAR_3, VAR_2->name);
 FUNC_4(&VAR_2->fetch, VAR_4.buf);





 FUNC_9(&VAR_4);
 FUNC_5(&VAR_4, "HEAD:refs/heads/%s", VAR_3);
 FUNC_4(&VAR_2->push, VAR_4.buf);
 VAR_2->fetch_tags = 1;
 FUNC_8(&VAR_4);
}
