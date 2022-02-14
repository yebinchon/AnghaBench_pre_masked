
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int show; } ;
struct opts {char* member_1; scalar_t__ format; scalar_t__ repeat; int * repodir; scalar_t__ showsubmod; scalar_t__ showbranch; TYPE_1__ statusopt; int member_0; } ;
typedef int git_status_list ;
typedef int git_repository ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,TYPE_1__*) ;
 int FUNC_6 (int *,int ,int*) ;
 int FUNC_7 (struct opts*,int,char**) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int VAR_6 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *,scalar_t__) ;
 int FUNC_12 (scalar_t__) ;

int FUNC_13(git_repository *VAR_7, int VAR_8, char *VAR_9[])
{
 git_status_list *VAR_10;
 struct opts VAR_11 = { VAR_1, "." };

 VAR_11.statusopt.show = VAR_5;
 VAR_11.statusopt.flags = VAR_2 |
  VAR_3 |
  VAR_4;

 FUNC_7(&VAR_11, VAR_8, VAR_9);

 if (FUNC_2(VAR_7))
  FUNC_1("Cannot report status on bare repository",
   FUNC_3(VAR_7));

show_status:
 if (VAR_11.repeat)
  FUNC_10("\033[H\033[2J");
 FUNC_0(FUNC_5(&VAR_10, VAR_7, &VAR_11.statusopt),
  "Could not get status", ((void*)0));

 if (VAR_11.showbranch)
  FUNC_11(VAR_7, VAR_11.format);

 if (VAR_11.showsubmod) {
  int VAR_12 = 0;
  FUNC_0(FUNC_6(VAR_7, VAR_6, &VAR_12),
   "Cannot iterate submodules", VAR_11.repodir);
 }

 if (VAR_11.format == VAR_0)
  FUNC_8(VAR_10);
 else
  FUNC_9(VAR_7, VAR_10);

 FUNC_4(VAR_10);

 if (VAR_11.repeat) {
  FUNC_12(VAR_11.repeat);
  goto show_status;
 }

 return 0;
}
