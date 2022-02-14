
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tag; } ;
struct TYPE_4__ {int panel; } ;
typedef TYPE_1__ State ;
typedef TYPE_2__ Process ;
typedef int Htop_Reaction ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static Htop_Reaction FUNC_2(State* VAR_1) {
   for (int VAR_2 = 0; VAR_2 < FUNC_1(VAR_1->panel); VAR_2++) {
      Process* VAR_3 = (Process*) FUNC_0(VAR_1->panel, VAR_2);
      VAR_3->tag = 0;
   }
   return VAR_0;
}
