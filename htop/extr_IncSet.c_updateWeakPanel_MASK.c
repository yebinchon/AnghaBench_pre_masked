
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_7__ {TYPE_1__* modes; scalar_t__ filtering; } ;
struct TYPE_6__ {int value; } ;
struct TYPE_5__ {char* buffer; } ;
typedef int Panel ;
typedef int Object ;
typedef TYPE_2__ ListItem ;
typedef TYPE_3__ IncSet ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int ,char const*) ;
 int * FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(IncSet* VAR_1, Panel* VAR_2, Vector* VAR_3) {
   Object* VAR_4 = FUNC_1(VAR_2);
   FUNC_2(VAR_2);
   if (VAR_1->filtering) {
      int VAR_5 = 0;
      const char* VAR_6 = VAR_1->modes[VAR_0].buffer;
      for (int VAR_7 = 0; VAR_7 < FUNC_6(VAR_3); VAR_7++) {
         ListItem* VAR_8 = (ListItem*)FUNC_5(VAR_3, VAR_7);
         if (FUNC_4(VAR_8->value, VAR_6)) {
            FUNC_0(VAR_2, (Object*)VAR_8);
            if (VAR_4 == (Object*)VAR_8) FUNC_3(VAR_2, VAR_5);
            VAR_5++;
         }
      }
   } else {
      for (int VAR_9 = 0; VAR_9 < FUNC_6(VAR_3); VAR_9++) {
         Object* VAR_10 = FUNC_5(VAR_3, VAR_9);
         FUNC_0(VAR_2, VAR_10);
         if (VAR_4 == VAR_10) FUNC_3(VAR_2, VAR_9);
      }
   }
}
