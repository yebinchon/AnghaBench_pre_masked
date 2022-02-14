
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int margined; int * child; } ;
typedef TYPE_1__ uiGroup ;


 int FUNC_0 (int *,int) ;

void FUNC_1(uiGroup *VAR_0, int VAR_1)
{
 VAR_0->margined = VAR_1;
 if (VAR_0->child != ((void*)0))
  FUNC_0(VAR_0->child, VAR_0->margined);
}
