
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct repository {int index_file; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ,char*,char const*,char const*,char const*,int *) ;
 scalar_t__ FUNC_4 (int ,int ,char const*,int ) ;

__attribute__((used)) static int FUNC_5(struct repository *VAR_0,
           struct strbuf *VAR_1,
           const char *VAR_2)
{
 int VAR_3 = 0;
 const char *VAR_4, *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);

 VAR_4 = FUNC_2();
 if (FUNC_4(VAR_1->buf, VAR_1->len, VAR_4, 0))
  return -1;

 if (VAR_2) {
  VAR_5 = "commit";
  VAR_6 = VAR_2;
 } else {
  VAR_5 = "message";
 }
 if (FUNC_3(0, VAR_0->index_file, "prepare-commit-msg", VAR_4,
       VAR_5, VAR_6, ((void*)0)))
  VAR_3 = FUNC_1(FUNC_0("'prepare-commit-msg' hook failed"));

 return VAR_3;
}
