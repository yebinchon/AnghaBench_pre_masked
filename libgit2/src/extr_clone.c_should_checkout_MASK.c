
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_3__ {scalar_t__ checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(
 git_repository *VAR_1,
 bool VAR_2,
 const git_checkout_options *VAR_3)
{
 if (VAR_2)
  return 0;

 if (!VAR_3)
  return 0;

 if (VAR_3->checkout_strategy == VAR_0)
  return 0;

 return !FUNC_0(VAR_1);
}
