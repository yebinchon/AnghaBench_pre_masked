
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_mode; } ;
typedef int mode_t ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_commit ;
struct TYPE_4__ {int checkout_strategy; int dir_mode; } ;
typedef TYPE_1__ git_checkout_options ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_6 ;
 int FUNC_3 (int ,int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (char*,struct stat*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;

void FUNC_10(void)
{
 git_checkout_options VAR_7 = VAR_0;
 struct stat VAR_8;
 git_oid VAR_9;
 git_commit *VAR_10;
 mode_t VAR_11;

 if (!FUNC_2())
  return;

 FUNC_1(FUNC_6(&VAR_9, VAR_6, "refs/heads/dir"));
 FUNC_1(FUNC_5(&VAR_10, VAR_6, &VAR_9));

 FUNC_9((git_object *)VAR_10);

 VAR_7.checkout_strategy = VAR_2 | VAR_1;
 VAR_7.dir_mode = 0701;

 FUNC_1(FUNC_3(VAR_6, ((void*)0), &VAR_7));


 (void)FUNC_8(VAR_11 = FUNC_8(022));

 FUNC_1(FUNC_7("./testrepo/a", &VAR_8));

 FUNC_0(VAR_8.st_mode & (VAR_5 | 07777), (VAR_4 | 0701) & ~VAR_11, "%07o");


 FUNC_1(FUNC_7("./testrepo/a/b.txt", &VAR_8));
 FUNC_0(VAR_8.st_mode & (VAR_5 | 07777), VAR_3 & ~VAR_11, "%07o");

 FUNC_4(VAR_10);
}
