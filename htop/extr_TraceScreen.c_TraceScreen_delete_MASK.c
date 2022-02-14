
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ child; int strace; } ;
typedef TYPE_1__ TraceScreen ;
typedef int Object ;
typedef int InfoScreen ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,int *,int ) ;

void FUNC_6(Object* VAR_1) {
   TraceScreen* VAR_2 = (TraceScreen*) VAR_1;
   if (VAR_2->child > 0) {
      FUNC_4(VAR_2->child, VAR_0);
      FUNC_5(VAR_2->child, ((void*)0), 0);
      FUNC_2(VAR_2->strace);
   }
   FUNC_0();
   FUNC_3(FUNC_1((InfoScreen*)VAR_1));
}
