
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int panel; } ;
typedef TYPE_1__ State ;
typedef int Process ;
typedef int Object ;
typedef int InfoScreen ;
typedef int Htop_Reaction ;
typedef int EnvScreen ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;

__attribute__((used)) static Htop_Reaction FUNC_6(State* VAR_3) {
   Process* VAR_4 = (Process*) FUNC_4(VAR_3->panel);
   if (!VAR_4) return VAR_0;
   EnvScreen* VAR_5 = FUNC_2(VAR_4);
   FUNC_3((InfoScreen*)VAR_5);
   FUNC_1((Object*)VAR_5);
   FUNC_5();
   FUNC_0();
   return VAR_2 | VAR_1;
}
