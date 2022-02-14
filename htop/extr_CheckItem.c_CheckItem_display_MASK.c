
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* text; } ;
typedef int RichString ;
typedef int Object ;
typedef TYPE_1__ CheckItem ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(Object* VAR_4, RichString* VAR_5) {
   CheckItem* VAR_6 = (CheckItem*)VAR_4;
   FUNC_3 (VAR_6 != ((void*)0));
   FUNC_2(VAR_5, VAR_3[VAR_0], "[");
   if (FUNC_0(VAR_6))
      FUNC_1(VAR_5, VAR_3[VAR_1], "x");
   else
      FUNC_1(VAR_5, VAR_3[VAR_1], " ");
   FUNC_1(VAR_5, VAR_3[VAR_0], "] ");
   FUNC_1(VAR_5, VAR_3[VAR_2], VAR_6->text);
}
