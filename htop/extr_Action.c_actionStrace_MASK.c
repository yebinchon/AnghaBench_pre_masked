
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TraceScreen ;
struct TYPE_3__ {int panel; } ;
typedef TYPE_1__ State ;
typedef int Process ;
typedef int Object ;
typedef int InfoScreen ;
typedef int Htop_Reaction ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 () ;

__attribute__((used)) static Htop_Reaction FUNC_7(State* VAR_3) {
   Process* VAR_4 = (Process*) FUNC_2(VAR_3->panel);
   if (!VAR_4) return VAR_0;
   TraceScreen* VAR_5 = FUNC_5(VAR_4);
   bool VAR_6 = FUNC_4(VAR_5);
   if (VAR_6) {
      FUNC_1((InfoScreen*)VAR_5);
   }
   FUNC_3((Object*)VAR_5);
   FUNC_6();
   FUNC_0();
   return VAR_2 | VAR_1;
}
