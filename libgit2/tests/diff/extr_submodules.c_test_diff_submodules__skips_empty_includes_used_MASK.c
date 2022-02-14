
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;
typedef int exp ;
struct TYPE_8__ {int * file_status; int files; } ;
typedef TYPE_2__ diff_expects ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *,int ,int ,int ,int ,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,char*,int ) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;

void FUNC_10(void)
{
 git_diff_options VAR_10 = VAR_4;
 git_diff *VAR_11 = ((void*)0);
 diff_expects VAR_12;
 VAR_9 = FUNC_3("empty_standard_repo");

 VAR_10.flags |= VAR_2 | VAR_3;

 FUNC_2(FUNC_6(&VAR_11, VAR_9, ((void*)0), &VAR_10));
 FUNC_9(&VAR_12, 0, sizeof(VAR_12));
 FUNC_2(FUNC_4(
  VAR_11, VAR_6, VAR_5, VAR_7, VAR_8, &VAR_12));
 FUNC_0(0, VAR_12.files);
 FUNC_5(VAR_11);

 {
  git_repository *VAR_13;
  FUNC_2(FUNC_8(&VAR_13, "empty_standard_repo/subrepo", 0));
  FUNC_7(VAR_13);
 }

 FUNC_2(FUNC_6(&VAR_11, VAR_9, ((void*)0), &VAR_10));
 FUNC_9(&VAR_12, 0, sizeof(VAR_12));
 FUNC_2(FUNC_4(
  VAR_11, VAR_6, VAR_5, VAR_7, VAR_8, &VAR_12));
 FUNC_0(1, VAR_12.files);
 FUNC_0(1, VAR_12.file_status[VAR_0]);
 FUNC_5(VAR_11);

 FUNC_1("empty_standard_repo/subrepo/README.txt", "hello\n");

 FUNC_2(FUNC_6(&VAR_11, VAR_9, ((void*)0), &VAR_10));
 FUNC_9(&VAR_12, 0, sizeof(VAR_12));
 FUNC_2(FUNC_4(
  VAR_11, VAR_6, VAR_5, VAR_7, VAR_8, &VAR_12));
 FUNC_0(1, VAR_12.files);
 FUNC_0(1, VAR_12.file_status[VAR_1]);
 FUNC_5(VAR_11);
}
