
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int string; int dst; int src; } ;
typedef TYPE_1__ git_refspec ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int,int) ;

void FUNC_2(git_refspec *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 FUNC_0(VAR_0->src);
 FUNC_0(VAR_0->dst);
 FUNC_0(VAR_0->string);

 FUNC_1(VAR_0, 0x0, sizeof(git_refspec));
}
