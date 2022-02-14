
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ changingPosition; int window; } ;
typedef TYPE_1__ uiWindow ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int) ;

void FUNC_2(uiWindow *VAR_1, int VAR_2, int VAR_3)
{
 VAR_1->changingPosition = VAR_0;
 FUNC_0(VAR_1->window, VAR_2, VAR_3);



 while (VAR_1->changingPosition)
  if (!FUNC_1(1))
   break;
}
