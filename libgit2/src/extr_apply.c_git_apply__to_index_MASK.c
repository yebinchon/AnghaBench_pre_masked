
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_index_entry ;
typedef int git_index ;
struct TYPE_4__ {int path; } ;
struct TYPE_5__ {scalar_t__ status; TYPE_1__ old_file; } ;
typedef TYPE_2__ git_diff_delta ;
typedef int git_diff ;
typedef int git_apply_options ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *,size_t) ;
 size_t FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,size_t) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int **,int *) ;

__attribute__((used)) static int FUNC_9(
 git_repository *VAR_2,
 git_diff *VAR_3,
 git_index *VAR_4,
 git_index *VAR_5,
 git_apply_options *VAR_6)
{
 git_index *VAR_7 = ((void*)0);
 const git_diff_delta *VAR_8;
 const git_index_entry *VAR_9;
 size_t VAR_10;
 int VAR_11;

 FUNC_0(VAR_4);
 FUNC_0(VAR_6);

 if ((VAR_11 = FUNC_8(&VAR_7, VAR_2)) < 0)
  goto done;


 for (VAR_10 = 0; VAR_10 < FUNC_2(VAR_3); VAR_10++) {
  VAR_8 = FUNC_1(VAR_3, VAR_10);

  if (VAR_8->status == VAR_0 ||
      VAR_8->status == VAR_1) {
   if ((VAR_11 = FUNC_7(VAR_7, VAR_8->old_file.path, 0)) < 0)
    goto done;
  }
 }


 for (VAR_10 = 0; VAR_10 < FUNC_4(VAR_5); VAR_10++) {
  VAR_9 = FUNC_6(VAR_5, VAR_10);

  if ((VAR_11 = FUNC_3(VAR_7, VAR_9)) < 0)
   goto done;
 }

done:
 FUNC_5(VAR_7);
 return VAR_11;
}
