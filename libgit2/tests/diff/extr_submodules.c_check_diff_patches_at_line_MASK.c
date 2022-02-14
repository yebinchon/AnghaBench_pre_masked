
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_patch ;
struct TYPE_3__ {scalar_t__ status; } ;
typedef TYPE_1__ git_diff_delta ;
typedef int git_diff ;
typedef int git_buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char const*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,int,char*,int,char*,char const*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int *,size_t) ;
 TYPE_1__* FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (char const*,char*) ;

__attribute__((used)) static void FUNC_12(
 git_diff *VAR_3, const char **VAR_4, const char *VAR_5, int VAR_6)
{
 const git_diff_delta *VAR_7;
 git_patch *VAR_8 = ((void*)0);
 size_t VAR_9, VAR_10 = FUNC_6(VAR_3);
 git_buf VAR_11 = VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_10; ++VAR_9, FUNC_7(VAR_8)) {
  FUNC_2(FUNC_8(&VAR_8, VAR_3, VAR_9));
  FUNC_0((VAR_7 = FUNC_9(VAR_8)) != ((void*)0));

  if (VAR_7->status == VAR_1) {
   FUNC_1(VAR_4[VAR_9] == ((void*)0), VAR_5, VAR_6);
   continue;
  }

  if (VAR_4[VAR_9] && !FUNC_11(VAR_4[VAR_9], "<SKIP>"))
   continue;
  if (VAR_4[VAR_9] && !FUNC_11(VAR_4[VAR_9], "<UNTRACKED>")) {
   FUNC_1(VAR_7->status == VAR_2, VAR_5, VAR_6);
   continue;
  }
  if (VAR_4[VAR_9] && !FUNC_11(VAR_4[VAR_9], "<END>")) {
   FUNC_2(FUNC_10(&VAR_11, VAR_8));
   FUNC_1(!FUNC_11(VAR_4[VAR_9], "<END>"), VAR_5, VAR_6);
  }

  FUNC_2(FUNC_10(&VAR_11, VAR_8));

  FUNC_3(
   VAR_5, VAR_6, "expected diff did not match actual diff", 1,
   "%s", VAR_4[VAR_9], FUNC_4(&VAR_11));
  FUNC_5(&VAR_11);
 }

 FUNC_1(VAR_4[VAR_9] && !FUNC_11(VAR_4[VAR_9], "<END>"), VAR_5, VAR_6);
}
