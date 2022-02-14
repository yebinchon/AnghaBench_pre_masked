
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_hashsig_option_t ;
struct TYPE_4__ {int opt; int maxs; int mins; } ;
typedef TYPE_1__ git_hashsig ;


 TYPE_1__* FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static git_hashsig *FUNC_2(git_hashsig_option_t VAR_2)
{
 git_hashsig *VAR_3 = FUNC_0(1, sizeof(git_hashsig));
 if (!VAR_3)
  return ((void*)0);

 FUNC_1(&VAR_3->mins, VAR_1);
 FUNC_1(&VAR_3->maxs, VAR_0);
 VAR_3->opt = VAR_2;

 return VAR_3;
}
