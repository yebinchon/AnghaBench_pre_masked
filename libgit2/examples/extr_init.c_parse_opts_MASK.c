
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opts {char* dir; int quiet; int bare; int initial_commit; char const* template; char const* gitdir; int shared; scalar_t__ no_options; } ;
struct args_info {int pos; } ;


 struct args_info VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const**,struct args_info*,char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(struct opts *VAR_2, int VAR_3, char *VAR_4[])
{
 struct args_info VAR_5 = VAR_0;
 const char *VAR_6;



 for (VAR_5.pos = 1; VAR_5.pos < VAR_3; ++VAR_5.pos) {
  char *VAR_7 = VAR_4[VAR_5.pos];

  if (VAR_7[0] == '-')
   VAR_2->no_options = 0;

  if (VAR_7[0] != '-') {
   if (VAR_2->dir != ((void*)0))
    FUNC_3("extra argument", VAR_7);
   VAR_2->dir = VAR_7;
  }
  else if (!FUNC_2(VAR_7, "-q") || !FUNC_2(VAR_7, "--quiet"))
   VAR_2->quiet = 1;
  else if (!FUNC_2(VAR_7, "--bare"))
   VAR_2->bare = 1;
  else if (!FUNC_2(VAR_7, "--shared"))
   VAR_2->shared = VAR_1;
  else if (!FUNC_2(VAR_7, "--initial-commit"))
   VAR_2->initial_commit = 1;
  else if (FUNC_0(&VAR_6, &VAR_5, "--shared"))
   VAR_2->shared = FUNC_1(VAR_6);
  else if (!FUNC_0(&VAR_2->template, &VAR_5, "--template") ||
           !FUNC_0(&VAR_2->gitdir, &VAR_5, "--separate-git-dir"))
   FUNC_3("unknown option", VAR_7);
 }

 if (!VAR_2->dir)
  FUNC_3("must specify directory to init", "");
}
