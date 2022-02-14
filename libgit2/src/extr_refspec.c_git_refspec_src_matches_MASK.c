
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * src; } ;
typedef TYPE_1__ git_refspec ;


 scalar_t__ FUNC_0 (int *,char const*,int ) ;

int FUNC_1(const git_refspec *VAR_0, const char *VAR_1)
{
 if (VAR_0 == ((void*)0) || VAR_0->src == ((void*)0))
  return 0;

 return (FUNC_0(VAR_0->src, VAR_1, 0) == 0);
}
