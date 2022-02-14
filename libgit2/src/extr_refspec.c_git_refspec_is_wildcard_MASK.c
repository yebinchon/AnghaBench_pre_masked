
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* src; } ;
typedef TYPE_1__ git_refspec ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

int FUNC_2(const git_refspec *VAR_0)
{
 FUNC_0(VAR_0 && VAR_0->src);

 return (VAR_0->src[FUNC_1(VAR_0->src) - 1] == '*');
}
