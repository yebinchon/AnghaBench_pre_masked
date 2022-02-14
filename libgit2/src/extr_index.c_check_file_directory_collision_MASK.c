
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int path; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*,size_t,int) ;

__attribute__((used)) static int FUNC_3(git_index *VAR_1,
  git_index_entry *VAR_2, size_t VAR_3, int VAR_4)
{
 if (FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4) < 0 ||
     FUNC_1(VAR_1, VAR_2, VAR_4) < 0) {
  FUNC_0(VAR_0,
   "'%s' appears as both a file and a directory", VAR_2->path);
  return -1;
 }

 return 0;
}
