
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_oid ;
struct TYPE_3__ {int id; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;


 int VAR_0 ;
 int FUNC_0 (size_t*,int *,char const*,int ,int ) ;
 TYPE_1__* FUNC_1 (int *,size_t) ;
 int FUNC_2 (int **,int *) ;

__attribute__((used)) static int FUNC_3(
 git_oid *VAR_1, git_repository *VAR_2, const char *VAR_3)
{
 int VAR_4;
 git_index *VAR_5;
 size_t VAR_6;
 const git_index_entry *VAR_7;

 if ((VAR_4 = FUNC_2(&VAR_5, VAR_2)) < 0 ||
  (VAR_4 = FUNC_0(&VAR_6, VAR_5, VAR_3, 0, 0)) < 0)
  return VAR_4;

 if (!(VAR_7 = FUNC_1(VAR_5, VAR_6)))
  return VAR_0;

 *VAR_1 = VAR_7->id;
 return 0;
}
