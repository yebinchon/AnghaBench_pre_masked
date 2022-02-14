
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; scalar_t__ moving; } ;
typedef int RichString ;
typedef int Object ;
typedef TYPE_1__ ListItem ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(Object* VAR_3, RichString* VAR_4) {
   ListItem* const VAR_5 = (ListItem*)VAR_3;
   FUNC_3 (VAR_5 != ((void*)0));





   if (VAR_5->moving) {
      FUNC_2(VAR_4, VAR_0[VAR_2],



            "+ ");
   } else {
      FUNC_1(VAR_4);
   }
   FUNC_0(VAR_4, VAR_0[VAR_2], VAR_5->value );
}
