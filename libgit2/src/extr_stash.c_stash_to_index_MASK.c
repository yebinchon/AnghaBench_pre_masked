
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct stat {int dummy; } ;
typedef int git_repository ;
struct TYPE_9__ {int member_0; } ;
struct TYPE_10__ {char const* path; int id; TYPE_1__ member_0; } ;
typedef TYPE_2__ git_index_entry ;
struct TYPE_11__ {int distrust_filemode; } ;
typedef TYPE_3__ git_index ;


 int FUNC_0 (int *,struct stat*,int *,int *,char const*,int ,int) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,struct stat*,int) ;
 int FUNC_3 (TYPE_3__**,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(
 git_repository *VAR_0,
 git_index *VAR_1,
 const char *VAR_2)
{
 git_index *VAR_3;
 git_index_entry VAR_4 = {0};
 struct stat VAR_5;
 int VAR_6;

 if (!FUNC_4(VAR_0) &&
     (VAR_6 = FUNC_3(&VAR_3, VAR_0)) < 0)
  return VAR_6;

 if ((VAR_6 = FUNC_0(
     &VAR_4.id, &VAR_5, VAR_0, ((void*)0), VAR_2, 0, 1)) < 0)
  return VAR_6;

 FUNC_2(&VAR_4, &VAR_5,
  (VAR_3 != ((void*)0) || !VAR_3->distrust_filemode));

 VAR_4.path = VAR_2;

 return FUNC_1(VAR_1, &VAR_4);
}
