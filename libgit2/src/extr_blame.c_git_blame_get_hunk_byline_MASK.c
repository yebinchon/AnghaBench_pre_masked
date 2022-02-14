
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int git_blame_hunk ;
struct TYPE_5__ {int hunks; } ;
typedef TYPE_1__ git_blame ;


 int FUNC_0 (TYPE_1__*) ;
 int const* FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (size_t*,int *,int ,size_t*) ;
 int VAR_0 ;

const git_blame_hunk *FUNC_3(git_blame *VAR_1, size_t VAR_2)
{
 size_t VAR_3, VAR_4 = VAR_2;
 FUNC_0(VAR_1);

 if (!FUNC_2(&VAR_3, &VAR_1->hunks, VAR_0, &VAR_4)) {
  return FUNC_1(VAR_1, (uint32_t)VAR_3);
 }

 return ((void*)0);
}
