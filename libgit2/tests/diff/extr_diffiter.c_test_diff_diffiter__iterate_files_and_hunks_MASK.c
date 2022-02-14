
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
typedef int const git_patch ;
struct TYPE_4__ {int context_lines; int interhunk_lines; int flags; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff_hunk ;
typedef int git_diff ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int *,TYPE_1__*) ;
 size_t FUNC_6 (int *) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int const**,int *,size_t) ;
 int FUNC_9 (int const**,int *,int const*,size_t) ;
 size_t FUNC_10 (int const*) ;

void FUNC_11(void)
{
 git_repository *VAR_3 = FUNC_3("status");
 git_diff_options VAR_4 = VAR_2;
 git_diff *VAR_5 = ((void*)0);
 size_t VAR_6, VAR_7;
 int VAR_8 = 0, VAR_9 = 0;

 VAR_4.context_lines = 3;
 VAR_4.interhunk_lines = 1;
 VAR_4.flags |= VAR_0 | VAR_1;

 FUNC_2(FUNC_5(&VAR_5, VAR_3, ((void*)0), &VAR_4));

 VAR_7 = FUNC_6(VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6) {
  git_patch *VAR_10;
  size_t VAR_11, VAR_12;

  FUNC_2(FUNC_8(&VAR_10, VAR_5, VAR_6));
  FUNC_0(VAR_10);

  VAR_8++;

  VAR_12 = FUNC_10(VAR_10);

  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
   const git_diff_hunk *VAR_13;

   FUNC_2(FUNC_9(&VAR_13, ((void*)0), VAR_10, VAR_11));
   FUNC_0(VAR_13);

   VAR_9++;
  }

  FUNC_7(VAR_10);
 }

 FUNC_1(13, VAR_8);
 FUNC_1(8, VAR_9);

 FUNC_4(VAR_5);
}
