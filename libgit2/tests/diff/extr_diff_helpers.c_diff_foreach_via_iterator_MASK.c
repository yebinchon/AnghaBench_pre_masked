
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_patch ;
typedef scalar_t__ (* git_diff_line_cb ) (TYPE_1__ const*,int const*,int const*,void*) ;
typedef int git_diff_line ;
typedef scalar_t__ (* git_diff_hunk_cb ) (TYPE_1__ const*,int const*,void*) ;
typedef int git_diff_hunk ;
typedef scalar_t__ (* git_diff_file_cb ) (TYPE_1__ const*,float,void*) ;
struct TYPE_9__ {scalar_t__ status; int flags; } ;
typedef TYPE_1__ git_diff_delta ;
typedef int git_diff_binary_cb ;
typedef int git_diff ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,size_t) ;
 TYPE_1__* FUNC_7 (int *) ;
 int FUNC_8 (int const**,size_t*,int *,size_t) ;
 int FUNC_9 (int const**,int *,size_t,size_t) ;
 size_t FUNC_10 (int *) ;

int FUNC_11(
 git_diff *VAR_3,
 git_diff_file_cb VAR_4,
 git_diff_binary_cb VAR_5,
 git_diff_hunk_cb VAR_6,
 git_diff_line_cb VAR_7,
 void *VAR_8)
{
 size_t VAR_9, VAR_10 = FUNC_3(VAR_3);

 FUNC_0(VAR_5);

 for (VAR_9 = 0; VAR_9 < VAR_10; ++VAR_9) {
  git_patch *VAR_11;
  const git_diff_delta *VAR_12;
  size_t VAR_13, VAR_14;

  FUNC_2(FUNC_6(&VAR_11, VAR_3, VAR_9));
  FUNC_1((VAR_12 = FUNC_7(VAR_11)) != ((void*)0));


  if (VAR_4 != ((void*)0) && VAR_4(VAR_12, (float)VAR_9 / VAR_10, VAR_8) != 0) {
   FUNC_5(VAR_11);
   goto abort;
  }


  if (!VAR_11) {
   FUNC_1(VAR_12->status == VAR_0 ||
       (VAR_12->flags & VAR_1) != 0);
   continue;
  }

  if (!VAR_6 && !VAR_7) {
   FUNC_5(VAR_11);
   continue;
  }

  VAR_14 = FUNC_10(VAR_11);

  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
   const git_diff_hunk *VAR_15;
   size_t VAR_16, VAR_17;

   FUNC_2(FUNC_8(&VAR_15, &VAR_17, VAR_11, VAR_13));

   if (VAR_6 && VAR_6(VAR_12, VAR_15, VAR_8) != 0) {
    FUNC_5(VAR_11);
    goto abort;
   }

   for (VAR_16 = 0; VAR_16 < VAR_17; ++VAR_16) {
    const git_diff_line *VAR_18;

    FUNC_2(FUNC_9(&VAR_18, VAR_11, VAR_13, VAR_16));

    if (VAR_7 &&
     VAR_7(VAR_12, VAR_15, VAR_18, VAR_8) != 0) {
     FUNC_5(VAR_11);
     goto abort;
    }
   }
  }

  FUNC_5(VAR_11);
 }

 return 0;

abort:
 FUNC_4();
 return VAR_2;
}
