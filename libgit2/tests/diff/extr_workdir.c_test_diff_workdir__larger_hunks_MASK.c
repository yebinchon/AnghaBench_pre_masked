
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_tree ;
typedef int const git_patch ;
struct TYPE_5__ {int context_lines; scalar_t__ interhunk_lines; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff_line ;
typedef int git_diff_hunk ;
typedef int git_diff ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,TYPE_1__*) ;
 size_t FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int *,TYPE_1__*) ;
 int FUNC_9 (int const*) ;
 int FUNC_10 (int const**,int *,size_t) ;
 int FUNC_11 (int const**,size_t*,int const*,size_t) ;
 int FUNC_12 (int const**,int const*,size_t,size_t) ;
 size_t FUNC_13 (int const*) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int ,char const*) ;

void FUNC_16(void)
{
 const char *VAR_2 = "d70d245ed97ed2aa596dd1af6536e4bfdb047b69";
 const char *VAR_3 = "7a9e0b02e63179929fed24f0a3e0f19168114d10";
 git_tree *VAR_4, *VAR_5;
 git_diff_options VAR_6 = VAR_0;
 size_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_1 = FUNC_4("diff");

 FUNC_0((VAR_4 = FUNC_15(VAR_1, VAR_2)) != ((void*)0));
 FUNC_0((VAR_5 = FUNC_15(VAR_1, VAR_3)) != ((void*)0));

 VAR_6.context_lines = 1;
 VAR_6.interhunk_lines = 0;

 for (VAR_7 = 0; VAR_7 <= 2; ++VAR_7) {
  git_diff *VAR_14 = ((void*)0);
  git_patch *VAR_15;
  const git_diff_hunk *VAR_16;
  const git_diff_line *VAR_17;


  switch (VAR_7) {
  case 0:
   FUNC_3(FUNC_6(&VAR_14, VAR_1, ((void*)0), &VAR_6));
   break;
  case 1:
   FUNC_3(FUNC_8(&VAR_14, VAR_1, VAR_4, &VAR_6));
   break;
  case 2:
   FUNC_3(FUNC_8(&VAR_14, VAR_1, VAR_5, &VAR_6));
   break;
  }

  VAR_9 = FUNC_7(VAR_14);
  FUNC_1(2, (int)VAR_9);

  for (VAR_8 = 0; VAR_8 < VAR_9; ++VAR_8) {
   FUNC_3(FUNC_10(&VAR_15, VAR_14, VAR_8));
   FUNC_0(VAR_15);

   VAR_11 = FUNC_13(VAR_15);
   for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
    FUNC_3(FUNC_11(&VAR_16, &VAR_13, VAR_15, VAR_10));

    for (VAR_12 = 0; VAR_12 < VAR_13; ++VAR_12) {
     FUNC_3(
      FUNC_12(&VAR_17, VAR_15, VAR_10, VAR_12));
     FUNC_0(VAR_17);
    }


    FUNC_2(
     FUNC_12(&VAR_17, VAR_15, VAR_10, VAR_13));
   }


   FUNC_2(FUNC_11(&VAR_16, &VAR_13, VAR_15, VAR_11));

   FUNC_9(VAR_15);
  }

  FUNC_5(VAR_14);
 }

 FUNC_14(VAR_4);
 FUNC_14(VAR_5);
}
