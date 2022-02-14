
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lines; int display; int inc; } ;
typedef int Object ;
typedef TYPE_1__ InfoScreen ;


 char* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;

void FUNC_7(InfoScreen* VAR_0, const char* VAR_1) {
   FUNC_4(VAR_0->lines, (Object*) FUNC_1(VAR_1, 0));
   const char* VAR_2 = FUNC_0(VAR_0->inc);
   if (!VAR_2 || FUNC_3(VAR_1, VAR_2))
      FUNC_2(VAR_0->display, (Object*)FUNC_5(VAR_0->lines, FUNC_6(VAR_0->lines)-1));
}
