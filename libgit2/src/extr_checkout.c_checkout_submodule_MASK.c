
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int path; } ;
typedef TYPE_2__ git_diff_file ;
struct TYPE_10__ {int dir_mode; int target_directory; } ;
struct TYPE_12__ {int strategy; int repo; TYPE_1__ opts; } ;
typedef TYPE_3__ checkout_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__ const*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(
 checkout_data *VAR_4,
 const git_diff_file *VAR_5)
{
 bool VAR_6 = FUNC_4(VAR_4);
 int VAR_7 = 0;


 if ((VAR_4->strategy & VAR_0) != 0)
  return 0;

 if ((VAR_7 = FUNC_0(
   VAR_4,
   VAR_5->path, VAR_4->opts.target_directory, VAR_4->opts.dir_mode,
   VAR_6 ? VAR_3 : VAR_2)) < 0)
  return VAR_7;

 if ((VAR_7 = FUNC_3(((void*)0), VAR_4->repo, VAR_5->path)) < 0) {



  if (VAR_7 == VAR_1) {
   FUNC_2();
   return FUNC_1(VAR_4, VAR_5);
  }

  return VAR_7;
 }
 return FUNC_1(VAR_4, VAR_5);
}
