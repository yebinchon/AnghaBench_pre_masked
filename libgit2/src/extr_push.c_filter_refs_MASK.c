
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_remote_head ;
struct TYPE_4__ {int refs; } ;
typedef TYPE_1__ git_remote ;


 scalar_t__ FUNC_0 (int const***,size_t*,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,void*) ;

__attribute__((used)) static int FUNC_3(git_remote *VAR_0)
{
 const git_remote_head **VAR_1;
 size_t VAR_2, VAR_3;

 FUNC_1(&VAR_0->refs);

 if (FUNC_0(&VAR_1, &VAR_2, VAR_0) < 0)
  return -1;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (FUNC_2(&VAR_0->refs, (void *)VAR_1[VAR_3]) < 0)
   return -1;
 }

 return 0;
}
