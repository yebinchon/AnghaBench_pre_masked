
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int display; int inc; int lines; } ;
typedef int Object ;
typedef int ListItem ;
typedef TYPE_1__ InfoScreen ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int ,int *) ;
 int * FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;

void FUNC_8(InfoScreen* VAR_0, const char* VAR_1) {
   ListItem* VAR_2 = (ListItem*)FUNC_6(VAR_0->lines, FUNC_7(VAR_0->lines)-1);
   FUNC_1(VAR_2, VAR_1);
   const char* VAR_3 = FUNC_0(VAR_0->inc);
   if (VAR_3 && FUNC_3(VAR_0->display, FUNC_4(VAR_0->display)-1) != (Object*)VAR_2 && FUNC_5(VAR_1, VAR_3))
      FUNC_2(VAR_0->display, (Object*)VAR_2);
}
