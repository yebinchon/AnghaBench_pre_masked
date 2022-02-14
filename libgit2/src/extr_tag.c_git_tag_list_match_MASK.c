
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* pattern; int * taglist; } ;
typedef TYPE_1__ tag_filter_data ;
typedef int git_vector ;
struct TYPE_5__ {char** strings; int count; } ;
typedef TYPE_2__ git_strarray ;
typedef int git_repository ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,void*) ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int *) ;
 int VAR_0 ;

int FUNC_5(git_strarray *VAR_1, const char *VAR_2, git_repository *VAR_3)
{
 int VAR_4;
 tag_filter_data VAR_5;
 git_vector VAR_6;

 FUNC_0(VAR_1 && VAR_3 && VAR_2);

 if ((VAR_4 = FUNC_4(&VAR_6, 8, ((void*)0))) < 0)
  return VAR_4;

 VAR_5.taglist = &VAR_6;
 VAR_5.pattern = VAR_2;

 VAR_4 = FUNC_1(VAR_3, &VAR_0, (void *)&VAR_5);

 if (VAR_4 < 0)
  FUNC_3(&VAR_6);

 VAR_1->strings =
  (char **)FUNC_2(&VAR_1->count, ((void*)0), &VAR_6);

 return 0;
}
