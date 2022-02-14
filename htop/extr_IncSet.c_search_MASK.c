
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buffer; int bar; } ;
typedef int Panel ;
typedef int (* IncMode_GetPanelValue ) (int *,int) ;
typedef TYPE_1__ IncMode ;


 int * VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static bool FUNC_5(IncMode* VAR_2, Panel* VAR_3, IncMode_GetPanelValue VAR_4) {
   int VAR_5 = FUNC_3(VAR_3);
   bool VAR_6 = 0;
   for (int VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
      if (FUNC_4(VAR_4(VAR_3, VAR_7), VAR_2->buffer)) {
         FUNC_2(VAR_3, VAR_7);
         VAR_6 = 1;
         break;
      }
   }
   if (VAR_6)
      FUNC_0(VAR_2->bar, VAR_2->buffer);
   else
      FUNC_1(VAR_2->bar, VAR_2->buffer, VAR_0[VAR_1]);
   return VAR_6;
}
