
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opts {int argc; char** argv; } ;
typedef int git_repository ;


 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int FUNC_5(git_repository *VAR_0, struct opts *VAR_1)
{
 int VAR_2, VAR_3, VAR_4 = 0;
 char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);

 for (VAR_2 = 0; VAR_2 < VAR_1->argc; VAR_2++) {
  char *VAR_7 = VAR_1->argv[VAR_2];

  if (!FUNC_3(VAR_7, "--push")) {
   VAR_4 = 1;
  } else if (VAR_7[0] != '-' && VAR_5 == ((void*)0)) {
   VAR_5 = VAR_7;
  } else if (VAR_7[0] != '-' && VAR_6 == ((void*)0)) {
   VAR_6 = VAR_7;
  } else {
   FUNC_4("invalid argument to set-url", VAR_7);
  }
 }

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
  FUNC_4("you need to specify remote and the new URL", ((void*)0));

 if (VAR_4)
  VAR_3 = FUNC_1(VAR_0, VAR_5, VAR_6);
 else
  VAR_3 = FUNC_2(VAR_0, VAR_5, VAR_6);

 FUNC_0(VAR_3, "could not set URL", VAR_6);

 return 0;
}
