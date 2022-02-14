
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_object ;
typedef int git_describe_result ;
struct TYPE_5__ {char* ptr; int member_0; } ;
typedef TYPE_1__ git_buf ;
struct TYPE_6__ {int format_options; int describe_options; } ;
typedef TYPE_2__ describe_options ;


 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int **,int *,int *) ;
 int FUNC_2 (TYPE_1__*,int *,int *) ;
 int FUNC_3 (int **,int *,int *) ;
 int FUNC_4 (int **,int *,char const*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static void FUNC_6(git_repository *VAR_0, describe_options *VAR_1, const char *VAR_2)
{
 git_object *VAR_3;
 git_describe_result *VAR_4;
 git_buf VAR_5 = { 0 };

 if (VAR_2) {
  FUNC_0(FUNC_4(&VAR_3, VAR_0, VAR_2),
   "Failed to lookup rev", VAR_2);

  FUNC_0(FUNC_1(&VAR_4, VAR_3, &VAR_1->describe_options),
   "Failed to describe rev", VAR_2);
 }
 else
  FUNC_0(FUNC_3(&VAR_4, VAR_0, &VAR_1->describe_options),
   "Failed to describe workdir", ((void*)0));

 FUNC_0(FUNC_2(&VAR_5, VAR_4, &VAR_1->format_options),
   "Failed to format describe rev", VAR_2);

 FUNC_5("%s\n", VAR_5.ptr);
}
