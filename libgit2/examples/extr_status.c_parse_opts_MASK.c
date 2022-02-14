
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** strings; scalar_t__ count; } ;
struct TYPE_4__ {int flags; TYPE_1__ pathspec; } ;
struct opts {scalar_t__ npaths; char** pathspec; scalar_t__ format; int showbranch; int zterm; char* repodir; int repeat; int showsubmod; TYPE_2__ statusopt; } ;
struct args_info {int pos; } ;


 struct args_info VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (char*,int *) ;
 scalar_t__ FUNC_2 (int*,struct args_info*,char*,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static void FUNC_6(struct opts *VAR_10, int VAR_11, char *VAR_12[])
{
 struct args_info VAR_13 = VAR_0;

 for (VAR_13.pos = 1; VAR_13.pos < VAR_11; ++VAR_13.pos) {
  char *VAR_14 = VAR_12[VAR_13.pos];

  if (VAR_14[0] != '-') {
   if (VAR_10->npaths < VAR_9)
    VAR_10->pathspec[VAR_10->npaths++] = VAR_14;
   else
    FUNC_1("Example only supports a limited pathspec", ((void*)0));
  }
  else if (!FUNC_3(VAR_14, "-s") || !FUNC_3(VAR_14, "--short"))
   VAR_10->format = VAR_4;
  else if (!FUNC_3(VAR_14, "--long"))
   VAR_10->format = VAR_2;
  else if (!FUNC_3(VAR_14, "--porcelain"))
   VAR_10->format = VAR_3;
  else if (!FUNC_3(VAR_14, "-b") || !FUNC_3(VAR_14, "--branch"))
   VAR_10->showbranch = 1;
  else if (!FUNC_3(VAR_14, "-z")) {
   VAR_10->zterm = 1;
   if (VAR_10->format == VAR_1)
    VAR_10->format = VAR_3;
  }
  else if (!FUNC_3(VAR_14, "--ignored"))
   VAR_10->statusopt.flags |= VAR_6;
  else if (!FUNC_3(VAR_14, "-uno") ||
     !FUNC_3(VAR_14, "--untracked-files=no"))
   VAR_10->statusopt.flags &= ~VAR_7;
  else if (!FUNC_3(VAR_14, "-unormal") ||
     !FUNC_3(VAR_14, "--untracked-files=normal"))
   VAR_10->statusopt.flags |= VAR_7;
  else if (!FUNC_3(VAR_14, "-uall") ||
     !FUNC_3(VAR_14, "--untracked-files=all"))
   VAR_10->statusopt.flags |= VAR_7 |
    VAR_8;
  else if (!FUNC_3(VAR_14, "--ignore-submodules=all"))
   VAR_10->statusopt.flags |= VAR_5;
  else if (!FUNC_5(VAR_14, "--git-dir=", FUNC_4("--git-dir=")))
   VAR_10->repodir = VAR_14 + FUNC_4("--git-dir=");
  else if (!FUNC_3(VAR_14, "--repeat"))
   VAR_10->repeat = 10;
  else if (FUNC_2(&VAR_10->repeat, &VAR_13, "--repeat", 0))
             ;
  else if (!FUNC_3(VAR_14, "--list-submodules"))
   VAR_10->showsubmod = 1;
  else
   FUNC_0(-1, "Unsupported option", VAR_14);
 }

 if (VAR_10->format == VAR_1)
  VAR_10->format = VAR_2;
 if (VAR_10->format == VAR_2)
  VAR_10->showbranch = 1;
 if (VAR_10->npaths > 0) {
  VAR_10->statusopt.pathspec.strings = VAR_10->pathspec;
  VAR_10->statusopt.pathspec.count = VAR_10->npaths;
 }
}
