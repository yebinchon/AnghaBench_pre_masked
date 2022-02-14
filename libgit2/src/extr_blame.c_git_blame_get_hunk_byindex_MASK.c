
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int const git_blame_hunk ;
struct TYPE_4__ {int hunks; } ;
typedef TYPE_1__ git_blame ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int ) ;

const git_blame_hunk *FUNC_2(git_blame *VAR_0, uint32_t VAR_1)
{
 FUNC_0(VAR_0);
 return (git_blame_hunk*)FUNC_1(&VAR_0->hunks, VAR_1);
}
