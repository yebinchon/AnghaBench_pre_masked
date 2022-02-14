
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_5__ {int path; int mode; } ;
struct TYPE_6__ {int path; int mode; } ;
struct TYPE_7__ {TYPE_1__ new_file; TYPE_2__ old_file; } ;
typedef TYPE_3__ git_diff_delta ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(
 git_repository *VAR_3,
 int VAR_4,
 git_diff_delta *VAR_5)
{
 unsigned int VAR_6 = VAR_2;

 if (VAR_4 & VAR_0) {
  if (!FUNC_1(VAR_3, VAR_5->old_file.path, VAR_5->old_file.mode, VAR_6)) {
   FUNC_0(VAR_1, "cannot remove invalid path '%s'", VAR_5->old_file.path);
   return -1;
  }
 }

 if (VAR_4 & ~VAR_0) {
  if (!FUNC_1(VAR_3, VAR_5->new_file.path, VAR_5->new_file.mode, VAR_6)) {
   FUNC_0(VAR_1, "cannot checkout to invalid path '%s'", VAR_5->new_file.path);
   return -1;
  }
 }

 return 0;
}
