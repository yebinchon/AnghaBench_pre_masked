
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tempfile {int dummy; } ;
struct option {int dummy; } ;


 int FUNC_0 (char*) ;
 struct option const FUNC_1 (int ,char*,int*,int ) ;
 struct option const FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct tempfile**) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int,char const**,int *,struct option const*,char const**,int ) ;
 struct tempfile* FUNC_9 (char const*) ;
 int FUNC_10 (char const*,int) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (char const**,struct option const*) ;

int FUNC_13(int VAR_2, const char **VAR_3)
{
 struct tempfile *VAR_4;
 const char *VAR_5;
 int VAR_6 = 0;
 static const char *VAR_7[] = {
  "git-credential-cache--daemon [opts] <socket_path>",
  ((void*)0)
 };
 int VAR_8 = 0;
 const struct option VAR_9[] = {
  FUNC_1(0, "debug", &VAR_8,
    FUNC_0("print debugging messages to stderr")),
  FUNC_2()
 };

 FUNC_5("credentialcache.ignoresighup", &VAR_6);

 VAR_2 = FUNC_8(VAR_2, VAR_3, ((void*)0), VAR_9, VAR_7, 0);
 VAR_5 = VAR_3[0];

 if (!VAR_5)
  FUNC_12(VAR_7, VAR_9);

 if (!FUNC_7(VAR_5))
  FUNC_4("socket directory must be an absolute path");

 FUNC_6(VAR_5);
 VAR_4 = FUNC_9(VAR_5);

 if (VAR_6)
  FUNC_11(VAR_0, VAR_1);

 FUNC_10(VAR_5, VAR_8);
 FUNC_3(&VAR_4);

 return 0;
}
