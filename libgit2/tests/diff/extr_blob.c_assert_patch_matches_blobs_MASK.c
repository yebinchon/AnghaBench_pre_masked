
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_patch ;
struct TYPE_6__ {int size; int id; } ;
struct TYPE_5__ {int size; int id; } ;
struct TYPE_7__ {int status; TYPE_2__ new_file; TYPE_1__ old_file; } ;
typedef TYPE_3__ git_diff_delta ;
typedef int git_blob ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_3__* FUNC_7 (int *) ;
 int FUNC_8 (size_t*,size_t*,size_t*,int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static void FUNC_11(
 git_patch *VAR_1, git_blob *VAR_2, git_blob *VAR_3,
 int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
 const git_diff_delta *VAR_10;
 size_t VAR_11, VAR_12, VAR_13;

 FUNC_0(VAR_1 != ((void*)0));

 VAR_10 = FUNC_7(VAR_1);
 FUNC_0(VAR_10 != ((void*)0));

 FUNC_1(VAR_0, VAR_10->status);
 FUNC_2(FUNC_5(VAR_2), &VAR_10->old_file.id);
 FUNC_3(FUNC_6(VAR_2), VAR_10->old_file.size);
 FUNC_2(FUNC_5(VAR_3), &VAR_10->new_file.id);
 FUNC_3(FUNC_6(VAR_3), VAR_10->new_file.size);

 FUNC_1(VAR_4, (int)FUNC_9(VAR_1));

 if (VAR_4 > 0)
  FUNC_1(VAR_5, FUNC_10(VAR_1, 0));
 if (VAR_4 > 1)
  FUNC_1(VAR_6, FUNC_10(VAR_1, 1));

 FUNC_4(FUNC_8(&VAR_11, &VAR_12, &VAR_13, VAR_1));
 FUNC_1(VAR_7, (int)VAR_11);
 FUNC_1(VAR_8, (int)VAR_12);
 FUNC_1(VAR_9, (int)VAR_13);
}
