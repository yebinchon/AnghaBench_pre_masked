
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_8__ {char** strings; size_t count; } ;
struct TYPE_10__ {TYPE_1__ pathspec; } ;
typedef TYPE_3__ git_diff_options ;
struct TYPE_9__ {int path; } ;
struct TYPE_11__ {TYPE_2__ new_file; } ;
typedef TYPE_4__ git_diff_delta ;
typedef int git_diff ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (char*,int ,size_t) ;
 int FUNC_2 (int *) ;
 TYPE_4__* FUNC_3 (int *,size_t) ;
 int FUNC_4 (int **,int *,int *,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(
 git_repository *VAR_1,
 const char **VAR_2,
 size_t VAR_3)
{
 git_diff *VAR_4 = ((void*)0);
 git_diff_options VAR_5 = VAR_0;
 const git_diff_delta *VAR_6;
 size_t VAR_7, VAR_8;

 VAR_5.pathspec.strings = (char **)VAR_2;
 VAR_5.pathspec.count = VAR_3;

 FUNC_4(&VAR_4, VAR_1, ((void*)0), &VAR_5);

 FUNC_0(VAR_3, FUNC_5(VAR_4));

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_6 = FUNC_3(VAR_4, VAR_7);


  VAR_8 = FUNC_6(VAR_5.pathspec.strings[VAR_7]);

  while (VAR_8 && VAR_5.pathspec.strings[VAR_7][VAR_8 - 1] == '/')
   VAR_8--;

  FUNC_1(VAR_5.pathspec.strings[VAR_7], VAR_6->new_file.path, VAR_8);
 }

 FUNC_2(VAR_4);
}
