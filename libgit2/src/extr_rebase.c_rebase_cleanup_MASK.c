
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state_path; scalar_t__ inmemory; } ;
typedef TYPE_1__ git_rebase ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(git_rebase *VAR_1)
{
 if (!VAR_1 || VAR_1->inmemory)
  return 0;

 return FUNC_1(VAR_1->state_path) ?
  FUNC_0(VAR_1->state_path, ((void*)0), VAR_0) :
  0;
}
