
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ id_abbrev; scalar_t__ mode; int path; int id; } ;
struct TYPE_5__ {scalar_t__ id_abbrev; scalar_t__ mode; int path; int id; } ;
struct TYPE_7__ {scalar_t__ status; scalar_t__ flags; scalar_t__ similarity; scalar_t__ nfiles; TYPE_2__ new_file; TYPE_1__ old_file; } ;
typedef TYPE_3__ git_diff_delta ;
typedef int git_diff ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ) ;
 TYPE_3__* FUNC_4 (int *,size_t) ;
 size_t FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

void FUNC_7(git_diff *VAR_1, git_diff *VAR_2)
{
 const git_diff_delta *VAR_3, *VAR_4;
 size_t VAR_5, VAR_6;

 FUNC_0(VAR_1 && VAR_2);

 FUNC_1(FUNC_6(VAR_1), FUNC_6(VAR_2));

 for (VAR_5 = 0, VAR_6 = 0;
  VAR_5 < FUNC_5(VAR_1) && VAR_6 < FUNC_5(VAR_2); ) {

  VAR_3 = FUNC_4(VAR_1, VAR_5);
  VAR_4 = FUNC_4(VAR_2, VAR_6);

  if (VAR_3->status == VAR_0) {
   VAR_5++;
   continue;
  }
  if (VAR_4->status == VAR_0) {
   VAR_6++;
   continue;
  }

  FUNC_1(VAR_3->status, VAR_4->status);
  FUNC_1(VAR_3->flags, VAR_4->flags);
  FUNC_1(VAR_3->similarity, VAR_4->similarity);
  FUNC_1(VAR_3->nfiles, VAR_4->nfiles);
  if (VAR_3->old_file.id_abbrev && VAR_4->old_file.id_abbrev) {
   FUNC_1(VAR_3->old_file.id_abbrev, VAR_4->old_file.id_abbrev);
   FUNC_2(&VAR_3->old_file.id, &VAR_4->old_file.id);
   FUNC_1(VAR_3->old_file.mode, VAR_4->old_file.mode);
  }
  FUNC_3(VAR_3->old_file.path, VAR_4->old_file.path);

  if (VAR_3->new_file.id_abbrev && VAR_4->new_file.id_abbrev) {
   FUNC_2(&VAR_3->new_file.id, &VAR_4->new_file.id);
   FUNC_1(VAR_3->new_file.id_abbrev, VAR_4->new_file.id_abbrev);
   FUNC_1(VAR_3->new_file.mode, VAR_4->new_file.mode);
  }
  FUNC_3(VAR_3->new_file.path, VAR_4->new_file.path);

  VAR_5++;
  VAR_6++;
 }
}
