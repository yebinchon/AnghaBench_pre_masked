
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_patch ;
struct TYPE_7__ {int context_lines; int interhunk_lines; int flags; } ;
typedef TYPE_1__ git_diff_options ;
struct TYPE_8__ {scalar_t__ content; } ;
typedef TYPE_2__ git_diff_line ;
typedef int git_diff_hunk ;
typedef int git_diff ;
struct TYPE_9__ {int lines; int hunks; int files; int member_0; } ;
typedef TYPE_3__ diff_expects ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int *,TYPE_1__*) ;
 size_t FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int *,size_t) ;
 int FUNC_9 (int const**,size_t*,int *,size_t) ;
 int FUNC_10 (TYPE_2__ const**,int *,size_t,size_t) ;
 size_t FUNC_11 (int *) ;

void FUNC_12(void)
{
 git_repository *VAR_3 = FUNC_3("status");
 git_diff_options VAR_4 = VAR_2;
 git_diff *VAR_5 = ((void*)0);
 diff_expects VAR_6 = {0};
 size_t VAR_7, VAR_8;

 VAR_4.context_lines = 3;
 VAR_4.interhunk_lines = 1;
 VAR_4.flags |= VAR_0 | VAR_1;

 FUNC_2(FUNC_5(&VAR_5, VAR_3, ((void*)0), &VAR_4));

 VAR_8 = FUNC_6(VAR_5);
 for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7) {
  git_patch *VAR_9;
  size_t VAR_10, VAR_11;

  FUNC_2(FUNC_8(&VAR_9, VAR_5, VAR_7));
  FUNC_0(*VAR_9);
  VAR_6.files++;

  VAR_11 = FUNC_11(VAR_9);
  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
   const git_diff_hunk *VAR_12;
   size_t VAR_13, VAR_14;

   FUNC_2(FUNC_9(&VAR_12, &VAR_14, VAR_9, VAR_10));
   FUNC_0(VAR_12);
   VAR_6.hunks++;

   for (VAR_13 = 0; VAR_13 < VAR_14; ++VAR_13) {
    const git_diff_line *VAR_15;

    FUNC_2(FUNC_10(&VAR_15, VAR_9, VAR_10, VAR_13));
    FUNC_0(VAR_15 && VAR_15->content);
    VAR_6.lines++;
   }
  }

  FUNC_7(VAR_9);
 }

 FUNC_1(13, VAR_6.files);
 FUNC_1(8, VAR_6.hunks);
 FUNC_1(14, VAR_6.lines);

 FUNC_4(VAR_5);
}
