
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fullscreen; int window; } ;
typedef TYPE_1__ uiWindow ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(uiWindow *VAR_0, int VAR_1)
{
 VAR_0->fullscreen = VAR_1;
 if (VAR_0->fullscreen)
  FUNC_0(VAR_0->window);
 else
  FUNC_1(VAR_0->window);
}
