
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * mouse; int * keyboard; int window; } ;
typedef TYPE_1__ uiprivDateTimePickerWidget ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(uiprivDateTimePickerWidget *VAR_1)
{
 if (VAR_1->keyboard != ((void*)0))
  FUNC_0(VAR_1->keyboard, VAR_0);
 FUNC_0(VAR_1->mouse, VAR_0);
 FUNC_1(VAR_1->window, VAR_1->mouse);
 VAR_1->keyboard = ((void*)0);
 VAR_1->mouse = ((void*)0);
}
