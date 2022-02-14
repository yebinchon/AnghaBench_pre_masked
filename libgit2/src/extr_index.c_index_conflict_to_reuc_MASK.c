
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_5__ {int mode; int id; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;


 int FUNC_0 (TYPE_1__ const**,TYPE_1__ const**,TYPE_1__ const**,int *,char const*) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,char const*,int,int const*,int,int const*,int,int const*) ;

__attribute__((used)) static int FUNC_3(git_index *VAR_0, const char *VAR_1)
{
 const git_index_entry *VAR_2[3];
 int VAR_3, VAR_4, VAR_5;
 git_oid const *VAR_6, *VAR_7, *VAR_8;
 int VAR_9;

 if ((VAR_9 = FUNC_0(&VAR_2[0],
  &VAR_2[1], &VAR_2[2], VAR_0, VAR_1)) < 0)
  return VAR_9;

 VAR_3 = VAR_2[0] == ((void*)0) ? 0 : VAR_2[0]->mode;
 VAR_4 = VAR_2[1] == ((void*)0) ? 0 : VAR_2[1]->mode;
 VAR_5 = VAR_2[2] == ((void*)0) ? 0 : VAR_2[2]->mode;

 VAR_6 = VAR_2[0] == ((void*)0) ? ((void*)0) : &VAR_2[0]->id;
 VAR_7 = VAR_2[1] == ((void*)0) ? ((void*)0) : &VAR_2[1]->id;
 VAR_8 = VAR_2[2] == ((void*)0) ? ((void*)0) : &VAR_2[2]->id;

 if ((VAR_9 = FUNC_2(VAR_0, VAR_1, VAR_3, VAR_6,
  VAR_4, VAR_7, VAR_5, VAR_8)) >= 0)
  VAR_9 = FUNC_1(VAR_0, VAR_1);

 return VAR_9;
}
