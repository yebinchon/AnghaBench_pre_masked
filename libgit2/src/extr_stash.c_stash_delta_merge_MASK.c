
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int git_pool ;
struct TYPE_10__ {scalar_t__ status; } ;
typedef TYPE_1__ git_diff_delta ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_1__ const*,int *) ;
 TYPE_1__* FUNC_1 (TYPE_1__ const*,TYPE_1__ const*,int *) ;

__attribute__((used)) static git_diff_delta *FUNC_2(
 const git_diff_delta *VAR_3,
 const git_diff_delta *VAR_4,
 git_pool *VAR_5)
{



 if (VAR_3->status == VAR_0 && VAR_4->status == VAR_2) {
  git_diff_delta *VAR_6 = FUNC_0(VAR_4, VAR_5);

  if (VAR_6)
   VAR_6->status = VAR_1;
  return VAR_6;
 }

 return FUNC_1(VAR_3, VAR_4, VAR_5);
}
