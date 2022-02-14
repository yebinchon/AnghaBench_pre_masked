
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* path; int mode; } ;
typedef TYPE_1__ git_index_entry ;
struct TYPE_7__ {int pathspec; } ;
typedef TYPE_2__ git_diff_generated ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int,int,char const**,int *) ;

__attribute__((used)) static bool FUNC_4(
 const char **VAR_2,
 git_diff_generated *VAR_3,
 const git_index_entry *VAR_4)
{
 bool VAR_5 =
  FUNC_0(VAR_3, VAR_0);







 if ((FUNC_1(VAR_4->mode) || FUNC_2(VAR_4->mode)) &&
  VAR_5) {
  *VAR_2 = VAR_4->path;
  return 1;
 }

 return FUNC_3(
  &VAR_3->pathspec, VAR_4->path, VAR_5,
  FUNC_0(VAR_3, VAR_1),
  VAR_2, ((void*)0));
}
