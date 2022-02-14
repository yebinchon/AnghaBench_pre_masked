
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uiTab ;
struct TYPE_2__ {int (* f ) () ;int * name; } ;


 int * FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *,int ) ;

uiTab *FUNC_3(void)
{
 uiTab *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0();

 for (VAR_2 = 0; VAR_0[VAR_2].name != ((void*)0); VAR_2++)
  FUNC_2(VAR_1,
   VAR_0[VAR_2].name,
   (*(VAR_0[VAR_2].f))());

 return VAR_1;
}
