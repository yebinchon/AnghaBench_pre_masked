
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mode; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__ const*,int *) ;

__attribute__((used)) static bool FUNC_2(git_index *VAR_0, const git_index_entry *VAR_1)
{

 if (FUNC_0(VAR_1->mode))
  return 0;

 return FUNC_1(VAR_1, VAR_0);
}
