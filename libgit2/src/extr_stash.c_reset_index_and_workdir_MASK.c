
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int git_repository ;
typedef int git_object ;
typedef int git_commit ;
struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(git_repository *VAR_6, git_commit *VAR_7, uint32_t VAR_8)
{
 git_checkout_options VAR_9 = VAR_1;

 VAR_9.checkout_strategy = VAR_0;
 if (VAR_8 & VAR_5)
  VAR_9.checkout_strategy |= VAR_3;
 if (VAR_8 & VAR_4)
  VAR_9.checkout_strategy |= VAR_2;

 return FUNC_0(VAR_6, (git_object *)VAR_7, &VAR_9);
}
