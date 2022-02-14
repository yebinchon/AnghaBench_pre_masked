
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_diff_options ;
typedef int git_diff ;
typedef int exp ;
struct TYPE_4__ {int * file_status; int files; } ;
typedef TYPE_1__ diff_expects ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,int ,int ,int ,int ,TYPE_1__*) ;
 int FUNC_3 (int **,int ,int *,int const*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_5(git_diff **VAR_10, const git_diff_options *VAR_11)
{
 diff_expects VAR_12;

 FUNC_1(FUNC_3(VAR_10, VAR_9, ((void*)0), VAR_11));

 FUNC_4(&VAR_12, 0, sizeof(VAR_12));

 FUNC_1(FUNC_2(
  *VAR_10, VAR_6, VAR_5, VAR_7, VAR_8, &VAR_12));

 FUNC_0(13, VAR_12.files);
 FUNC_0(0, VAR_12.file_status[VAR_0]);
 FUNC_0(4, VAR_12.file_status[VAR_1]);
 FUNC_0(4, VAR_12.file_status[VAR_3]);
 FUNC_0(1, VAR_12.file_status[VAR_2]);
 FUNC_0(4, VAR_12.file_status[VAR_4]);
}
