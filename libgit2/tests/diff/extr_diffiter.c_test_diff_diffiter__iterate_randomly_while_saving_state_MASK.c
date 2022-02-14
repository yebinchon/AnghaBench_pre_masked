
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int patches ;
typedef int git_repository ;
typedef int git_patch ;
struct TYPE_6__ {int context_lines; int interhunk_lines; int flags; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;
struct TYPE_7__ {int lines; int hunks; int files; int member_0; } ;
typedef TYPE_2__ diff_expects ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int *,TYPE_1__*) ;
 size_t FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int *,size_t) ;
 int FUNC_9 (int *,TYPE_2__*) ;
 int FUNC_10 (int **,int ,int) ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;

void FUNC_13(void)
{
 git_repository *VAR_4 = FUNC_3("status");
 git_diff_options VAR_5 = VAR_2;
 git_diff *VAR_6 = ((void*)0);
 diff_expects VAR_7 = {0};
 git_patch *VAR_8[VAR_3];
 size_t VAR_9, VAR_10, VAR_11;

 FUNC_10(VAR_8, 0, sizeof(VAR_8));

 VAR_5.context_lines = 3;
 VAR_5.interhunk_lines = 1;
 VAR_5.flags |= VAR_0 | VAR_1;

 FUNC_2(FUNC_5(&VAR_6, VAR_4, ((void*)0), &VAR_5));

 VAR_11 = FUNC_6(VAR_6);
 FUNC_12(121212);
 VAR_9 = FUNC_11() % VAR_3;

 for (VAR_10 = 0; VAR_10 < VAR_11; ++VAR_10) {

  git_patch *VAR_12 = VAR_8[VAR_9];
  VAR_8[VAR_9] = ((void*)0);


  FUNC_2(FUNC_8(&VAR_8[VAR_9], VAR_6, VAR_10));
  FUNC_0(VAR_8[VAR_9] != ((void*)0));


  if (VAR_12 != ((void*)0)) {
   FUNC_9(VAR_12, &VAR_7);
   FUNC_7(VAR_12);
  }

  VAR_9 = FUNC_11() % VAR_3;
 }


 FUNC_4(VAR_6);


 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  git_patch *VAR_13 = VAR_8[VAR_9];

  if (VAR_13 != ((void*)0)) {
   FUNC_9(VAR_13, &VAR_7);
   FUNC_7(VAR_13);
  }
 }


 FUNC_1(13, VAR_7.files);
 FUNC_1(8, VAR_7.hunks);
 FUNC_1(14, VAR_7.lines);
}
