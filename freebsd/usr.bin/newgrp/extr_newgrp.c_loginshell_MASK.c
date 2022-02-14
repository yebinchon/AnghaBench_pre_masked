
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int login_cap_t ;
struct TYPE_4__ {char* pw_shell; char* pw_dir; char* pw_name; int pw_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 scalar_t__ FUNC_0 (char**,char*,char const*) ;
 char** FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (char*) ;
 char** VAR_4 ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (char const*,char**) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (TYPE_1__*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_8 (char*,char const*,int) ;
 int FUNC_9 (int *,TYPE_1__*,int ,int) ;
 int FUNC_10 (char*,char*) ;

__attribute__((used)) static void
FUNC_11(void)
{
 char *VAR_6[2], **VAR_7, *VAR_8, *VAR_9;
 const char *VAR_10;
 login_cap_t *VAR_11;

 VAR_10 = VAR_5->pw_shell;
 if (*VAR_10 == '\0')
  VAR_10 = VAR_3;
 if (FUNC_2(VAR_5->pw_dir) < 0) {
  FUNC_10("%s", VAR_5->pw_dir);
  FUNC_2("/");
 }

 VAR_8 = FUNC_5("TERM");
 VAR_9 = FUNC_5("KRBTKFILE");

 if ((VAR_7 = FUNC_1(20, sizeof(char *))) == ((void*)0))
  FUNC_3(1, "calloc");
 *VAR_7 = ((void*)0);
 VAR_4 = VAR_7;

 VAR_11 = FUNC_7(VAR_5);
 FUNC_9(VAR_11, VAR_5, VAR_5->pw_uid,
     VAR_1|VAR_2|VAR_0);
 FUNC_6(VAR_11);
 FUNC_8("USER", VAR_5->pw_name, 1);
 FUNC_8("SHELL", VAR_10, 1);
 FUNC_8("HOME", VAR_5->pw_dir, 1);
 if (VAR_8 != ((void*)0))
  FUNC_8("TERM", VAR_8, 1);
 if (VAR_9 != ((void*)0))
  FUNC_8("KRBTKFILE", VAR_9, 1);

 if (FUNC_0(VAR_6, "-%s", VAR_10) < 0)
  FUNC_3(1, "asprintf");
 VAR_6[1] = ((void*)0);

 FUNC_4(VAR_10, VAR_6);
 FUNC_3(1, "%s", VAR_10);
}
