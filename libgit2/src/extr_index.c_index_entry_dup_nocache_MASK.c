
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int path; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (TYPE_1__**,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_3(
 git_index_entry **VAR_0,
 git_index *VAR_1,
 const git_index_entry *VAR_2)
{
 if (FUNC_2(VAR_0, FUNC_0(VAR_1), VAR_2->path, ((void*)0), 0) < 0)
  return -1;

 FUNC_1(*VAR_0, VAR_2);
 return 0;
}
