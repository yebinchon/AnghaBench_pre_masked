
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_diff_delta ;
struct TYPE_4__ {int deltas; } ;
typedef TYPE_1__ git_diff ;


 int FUNC_0 (TYPE_1__ const*) ;
 int const* FUNC_1 (int *,size_t) ;

const git_diff_delta *FUNC_2(const git_diff *VAR_0, size_t VAR_1)
{
 FUNC_0(VAR_0);
 return FUNC_1(&VAR_0->deltas, VAR_1);
}
