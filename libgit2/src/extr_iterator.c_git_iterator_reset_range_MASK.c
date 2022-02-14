
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* cb; } ;
typedef TYPE_2__ git_iterator ;
struct TYPE_6__ {int (* reset ) (TYPE_2__*) ;} ;


 scalar_t__ FUNC_0 (TYPE_2__*,char const*,char const*) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2(
 git_iterator *VAR_0, const char *VAR_1, const char *VAR_2)
{
 if (FUNC_0(VAR_0, VAR_1, VAR_2) < 0)
  return -1;

 return VAR_0->cb->reset(VAR_0);
}
