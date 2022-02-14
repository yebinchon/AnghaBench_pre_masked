
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int git_merge_file_result ;
typedef int git_merge_file_options ;
struct TYPE_11__ {int member_0; } ;
typedef TYPE_1__ git_merge_file_input ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,TYPE_1__ const*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,int const*) ;

int FUNC_4(
 git_merge_file_result *VAR_0,
 const git_merge_file_input *VAR_1,
 const git_merge_file_input *VAR_2,
 const git_merge_file_input *VAR_3,
 const git_merge_file_options *VAR_4)
{
 git_merge_file_input VAR_5[3] = { {0} };

 FUNC_0(VAR_0 && VAR_2 && VAR_3);

 FUNC_2(VAR_0, 0x0, sizeof(git_merge_file_result));

 if (VAR_1)
  VAR_1 = FUNC_1(&VAR_5[0], VAR_1);

 VAR_2 = FUNC_1(&VAR_5[1], VAR_2);
 VAR_3 = FUNC_1(&VAR_5[2], VAR_3);

 return FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
