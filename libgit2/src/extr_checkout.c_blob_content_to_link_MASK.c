
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stat {int st_mode; } ;
typedef int git_buf ;
typedef int git_blob ;
struct TYPE_7__ {int stat_calls; } ;
struct TYPE_6__ {int dir_mode; } ;
struct TYPE_8__ {TYPE_2__ perfdata; scalar_t__ can_symlink; TYPE_1__ opts; } ;
typedef TYPE_3__ checkout_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (TYPE_3__*,char const*,int ) ;
 int FUNC_6 (char const*,struct stat*) ;
 int FUNC_7 (int ,char const*) ;

__attribute__((used)) static int FUNC_8(
 checkout_data *VAR_4,
 struct stat *VAR_5,
 git_blob *VAR_6,
 const char *VAR_7)
{
 git_buf VAR_8 = VAR_0;
 int VAR_9;

 if ((VAR_9 = FUNC_5(VAR_4, VAR_7, VAR_4->opts.dir_mode)) < 0)
  return VAR_9;

 if ((VAR_9 = FUNC_0(&VAR_8, VAR_6)) < 0)
  return VAR_9;

 if (VAR_4->can_symlink) {
  if ((VAR_9 = FUNC_7(FUNC_1(&VAR_8), VAR_7)) < 0)
   FUNC_3(VAR_2, "could not create symlink %s", VAR_7);
 } else {
  VAR_9 = FUNC_4(FUNC_1(&VAR_8), VAR_7);
 }

 if (!VAR_9) {
  VAR_4->perfdata.stat_calls++;

  if ((VAR_9 = FUNC_6(VAR_7, VAR_5)) < 0)
   FUNC_3(VAR_1, "could not stat symlink %s", VAR_7);

  VAR_5->st_mode = VAR_3;
 }

 FUNC_2(&VAR_8);

 return VAR_9;
}
