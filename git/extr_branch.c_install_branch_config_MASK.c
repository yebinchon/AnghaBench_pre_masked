
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,char*,char const*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char const*) ;
 int FUNC_4 (int ,char const*,char const*,...) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char*,char const**) ;
 int FUNC_7 (struct strbuf*,char*,char const*) ;
 int FUNC_8 (struct strbuf*) ;
 int FUNC_9 (struct strbuf*) ;
 int FUNC_10 (char const*,char const*) ;
 char* VAR_2 ;
 int FUNC_11 (int ,char const*) ;

int FUNC_12(int VAR_3, const char *VAR_4, const char *VAR_5, const char *VAR_6)
{
 const char *VAR_7 = ((void*)0);
 struct strbuf VAR_8 = VAR_1;
 int VAR_9 = FUNC_5(VAR_5);

 if (FUNC_6(VAR_6, "refs/heads/", &VAR_7)
     && !FUNC_10(VAR_4, VAR_7)
     && !VAR_5) {
  FUNC_11(FUNC_0("Not setting branch %s as its own upstream."),
   VAR_4);
  return 0;
 }

 FUNC_7(&VAR_8, "branch.%s.remote", VAR_4);
 if (FUNC_3(VAR_8.buf, VAR_5 ? VAR_5 : ".") < 0)
  goto out_err;

 FUNC_9(&VAR_8);
 FUNC_7(&VAR_8, "branch.%s.merge", VAR_4);
 if (FUNC_3(VAR_8.buf, VAR_6) < 0)
  goto out_err;

 if (VAR_9) {
  FUNC_9(&VAR_8);
  FUNC_7(&VAR_8, "branch.%s.rebase", VAR_4);
  if (FUNC_3(VAR_8.buf, "true") < 0)
   goto out_err;
 }
 FUNC_8(&VAR_8);

 if (VAR_3 & VAR_0) {
  if (VAR_7) {
   if (VAR_5)
    FUNC_4(VAR_9 ?
       FUNC_0("Branch '%s' set up to track remote branch '%s' from '%s' by rebasing.") :
       FUNC_0("Branch '%s' set up to track remote branch '%s' from '%s'."),
       VAR_4, VAR_7, VAR_5);
   else
    FUNC_4(VAR_9 ?
       FUNC_0("Branch '%s' set up to track local branch '%s' by rebasing.") :
       FUNC_0("Branch '%s' set up to track local branch '%s'."),
       VAR_4, VAR_7);
  } else {
   if (VAR_5)
    FUNC_4(VAR_9 ?
       FUNC_0("Branch '%s' set up to track remote ref '%s' by rebasing.") :
       FUNC_0("Branch '%s' set up to track remote ref '%s'."),
       VAR_4, VAR_6);
   else
    FUNC_4(VAR_9 ?
       FUNC_0("Branch '%s' set up to track local ref '%s' by rebasing.") :
       FUNC_0("Branch '%s' set up to track local ref '%s'."),
       VAR_4, VAR_6);
  }
 }

 return 0;

out_err:
 FUNC_8(&VAR_8);
 FUNC_2(FUNC_0("Unable to write upstream branch configuration"));

 FUNC_1(FUNC_0(VAR_2),
        VAR_5 ? VAR_5 : "",
        VAR_5 ? "/" : "",
        VAR_7 ? VAR_7 : VAR_6);

 return -1;
}
