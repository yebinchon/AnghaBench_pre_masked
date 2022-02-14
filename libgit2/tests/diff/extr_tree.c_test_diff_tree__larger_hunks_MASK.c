
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int const git_patch ;
typedef int git_diff_line ;
typedef int git_diff_hunk ;
struct TYPE_3__ {int context_lines; scalar_t__ interhunk_lines; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int *,int *,TYPE_1__*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int const**,int ,size_t) ;
 int FUNC_9 (int const**,size_t*,int const*,size_t) ;
 int FUNC_10 (int const**,int const*,size_t,size_t) ;
 size_t FUNC_11 (int const*) ;
 TYPE_1__ VAR_4 ;
 void* FUNC_12 (int ,char const*) ;

void FUNC_13(void)
{
 const char *VAR_5 = "d70d245ed97ed2aa596dd1af6536e4bfdb047b69";
 const char *VAR_6 = "7a9e0b02e63179929fed24f0a3e0f19168114d10";
 size_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 git_patch *VAR_13;
 const git_diff_hunk *VAR_14;
 const git_diff_line *VAR_15;

 VAR_3 = FUNC_4("diff");

 FUNC_0((VAR_0 = FUNC_12(VAR_3, VAR_5)) != ((void*)0));
 FUNC_0((VAR_1 = FUNC_12(VAR_3, VAR_6)) != ((void*)0));

 VAR_4.context_lines = 1;
 VAR_4.interhunk_lines = 0;

 FUNC_3(FUNC_6(&VAR_2, VAR_3, VAR_0, VAR_1, &VAR_4));

 VAR_8 = FUNC_5(VAR_2);
 for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7) {
  FUNC_3(FUNC_8(&VAR_13, VAR_2, VAR_7));
  FUNC_0(VAR_13);

  VAR_10 = FUNC_11(VAR_13);
  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
   FUNC_3(FUNC_9(&VAR_14, &VAR_12, VAR_13, VAR_9));

   for (VAR_11 = 0; VAR_11 < VAR_12; ++VAR_11) {
    FUNC_3(FUNC_10(&VAR_15, VAR_13, VAR_9, VAR_11));
    FUNC_0(VAR_15);
   }

   FUNC_2(FUNC_10(&VAR_15, VAR_13, VAR_9, VAR_12));
  }

  FUNC_2(FUNC_9(&VAR_14, &VAR_12, VAR_13, VAR_10));

  FUNC_7(VAR_13);
 }

 FUNC_2(FUNC_8(&VAR_13, VAR_2, VAR_8));

 FUNC_1(2, (int)VAR_8);
}
