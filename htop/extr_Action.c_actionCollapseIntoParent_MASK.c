
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int panel; TYPE_1__* settings; } ;
struct TYPE_4__ {int treeView; } ;
typedef TYPE_2__ State ;
typedef int Htop_Reaction ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static Htop_Reaction FUNC_1(State* VAR_2) {
   if (!VAR_2->settings->treeView) {
      return VAR_0;
   }
   bool VAR_3 = FUNC_0(VAR_2->panel);
   return VAR_3 ? VAR_1 : VAR_0;
}
