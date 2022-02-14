
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct opts {int argc; char** argv; } ;
struct TYPE_6__ {char** strings; scalar_t__ count; int member_0; } ;
typedef TYPE_2__ git_strarray ;
typedef int git_repository ;
typedef int git_remote ;
struct TYPE_5__ {int member_0; } ;


 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (int **,int *,char const*) ;
 char* FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (char*,char const*,char const*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char const*,char*) ;

__attribute__((used)) static int FUNC_10(git_repository *VAR_0, struct opts *VAR_1)
{
 int VAR_2;
 const char *VAR_3, *VAR_4, *VAR_5, *VAR_6;
 int VAR_7 = 0;
 git_strarray VAR_8 = {0};
 git_remote *VAR_9 = {0};

 for (VAR_2 = 0; VAR_2 < VAR_1->argc; VAR_2++) {
  VAR_3 = VAR_1->argv[VAR_2];

  if (!FUNC_9(VAR_3, "-v") || !FUNC_9(VAR_3, "--verbose")) {
   VAR_7 = 1;
  }
 }

 FUNC_0(FUNC_2(&VAR_8, VAR_0),
  "could not retrieve remotes", ((void*)0));

 for (VAR_2 = 0; VAR_2 < (int) VAR_8.count; VAR_2++) {
  VAR_4 = VAR_8.strings[VAR_2];
  if (!VAR_7) {
   FUNC_8(VAR_4);
   continue;
  }

  FUNC_0(FUNC_3(&VAR_9, VAR_0, VAR_4),
   "could not look up remote", VAR_4);

  VAR_5 = FUNC_5(VAR_9);
  if (VAR_5)
   FUNC_7("%s\t%s (fetch)\n", VAR_4, VAR_5);
  VAR_6 = FUNC_4(VAR_9);

  VAR_6 = VAR_6 ? VAR_6 : VAR_5;
  if (VAR_6)
   FUNC_7("%s\t%s (push)\n", VAR_4, VAR_6);

  FUNC_1(VAR_9);
 }

 FUNC_6(&VAR_8);

 return 0;
}
