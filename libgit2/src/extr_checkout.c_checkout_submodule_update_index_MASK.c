
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_12__ {int path; } ;
typedef TYPE_2__ git_diff_file ;
struct TYPE_13__ {int ptr; } ;
typedef TYPE_3__ git_buf ;
struct TYPE_11__ {int stat_calls; } ;
struct TYPE_14__ {int strategy; TYPE_1__ perfdata; } ;
typedef TYPE_4__ checkout_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__**,TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_2__ const*,struct stat*) ;
 int FUNC_2 (int ,char*,int ) ;
 scalar_t__ FUNC_3 (int ,struct stat*) ;

__attribute__((used)) static int FUNC_4(
 checkout_data *VAR_4,
 const git_diff_file *VAR_5)
{
 git_buf *VAR_6;
 struct stat VAR_7;


 if ((VAR_4->strategy & VAR_0) != 0)
  return 0;

 if (FUNC_0(&VAR_6, VAR_4, VAR_5->path) < 0)
  return -1;

 VAR_4->perfdata.stat_calls++;
 if (FUNC_3(VAR_6->ptr, &VAR_7) < 0) {
  FUNC_2(
   VAR_2, "could not stat submodule %s\n", VAR_5->path);
  return VAR_1;
 }

 VAR_7.st_mode = VAR_3;

 return FUNC_1(VAR_4, VAR_5, &VAR_7);
}
