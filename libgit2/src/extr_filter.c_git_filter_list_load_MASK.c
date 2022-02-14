
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int git_repository ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_filter_options ;
typedef int git_filter_mode_t ;
typedef int git_filter_list ;
typedef int git_blob ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int **,int *,int *,char const*,int ,TYPE_1__*) ;

int FUNC_1(
 git_filter_list **VAR_1,
 git_repository *VAR_2,
 git_blob *VAR_3,
 const char *VAR_4,
 git_filter_mode_t VAR_5,
 uint32_t VAR_6)
{
 git_filter_options VAR_7 = VAR_0;

 VAR_7.flags = VAR_6;

 return FUNC_0(
  VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, &VAR_7);
}
