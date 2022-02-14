
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct checkout_opts {char* new_branch; int quiet; } ;


 struct strbuf VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,char*) ;
 int VAR_1 ;
 int FUNC_4 (struct strbuf*,char*,char*) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(const struct checkout_opts *VAR_2)
{
 int VAR_3;
 struct strbuf VAR_4 = VAR_0;

 FUNC_6("unborn");

 if (!VAR_2->new_branch)
  FUNC_2(FUNC_0("You are on a branch yet to be born"));
 FUNC_4(&VAR_4, "refs/heads/%s", VAR_2->new_branch);
 VAR_3 = FUNC_1("HEAD", VAR_4.buf, "checkout -b");
 FUNC_5(&VAR_4);
 if (!VAR_2->quiet)
  FUNC_3(VAR_1, FUNC_0("Switched to a new branch '%s'\n"),
   VAR_2->new_branch);
 return VAR_3;
}
