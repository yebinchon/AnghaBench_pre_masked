
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct opts {int member_0; char* dir; char* gitdir; scalar_t__ shared; scalar_t__ initial_commit; scalar_t__ bare; int quiet; scalar_t__ template; scalar_t__ no_options; int member_7; int member_6; int member_5; int member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_4__ {char* workdir_path; scalar_t__ mode; scalar_t__ template_path; int flags; } ;
typedef TYPE_1__ git_repository_init_options ;
typedef int git_repository ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,char*,int ) ;
 int FUNC_4 (int **,char*,TYPE_1__*) ;
 char* FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (struct opts*,int,char**) ;
 int FUNC_8 (char*,...) ;

int FUNC_9(git_repository *VAR_5, int VAR_6, char *VAR_7[])
{
 struct opts VAR_8 = { 1, 0, 0, 0, VAR_4, 0, 0, 0 };

 FUNC_7(&VAR_8, VAR_6, VAR_7);



 if (VAR_8.no_options) {




  FUNC_0(FUNC_3(&VAR_5, VAR_8.dir, 0),
   "Could not initialize repository", ((void*)0));
 }
 else {




  git_repository_init_options VAR_9 = VAR_3;
  VAR_9.flags = VAR_2;

  if (VAR_8.bare)
   VAR_9.flags |= VAR_0;

  if (VAR_8.template) {
   VAR_9.flags |= VAR_1;
   VAR_9.template_path = VAR_8.template;
  }

  if (VAR_8.gitdir) {





   VAR_9.workdir_path = VAR_8.dir;
   VAR_8.dir = VAR_8.gitdir;
  }

  if (VAR_8.shared != 0)
   VAR_9.mode = VAR_8.shared;

  FUNC_0(FUNC_4(&VAR_5, VAR_8.dir, &VAR_9),
    "Could not initialize repository", ((void*)0));
 }



 if (!VAR_8.quiet) {
  if (VAR_8.bare || VAR_8.gitdir)
   VAR_8.dir = FUNC_5(VAR_5);
  else
   VAR_8.dir = FUNC_6(VAR_5);

  FUNC_8("Initialized empty Git repository in %s\n", VAR_8.dir);
 }







 if (VAR_8.initial_commit) {
  FUNC_1(VAR_5);
  FUNC_8("Created empty initial commit\n");
 }

 FUNC_2(VAR_5);

 return 0;
}
