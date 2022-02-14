
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dst; int src; int string; } ;
typedef TYPE_1__ git_refspec ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;

void FUNC_4(void)
{
 git_refspec VAR_0;

 FUNC_1(FUNC_3(&VAR_0, ":", 0));
 FUNC_0(":", VAR_0.string);
 FUNC_0("", VAR_0.src);
 FUNC_0("", VAR_0.dst);

 FUNC_2(&VAR_0);
}
