
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pl; TYPE_1__* settings; } ;
struct TYPE_4__ {int treeView; int direction; } ;
typedef TYPE_2__ State ;
typedef int Htop_Reaction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static Htop_Reaction FUNC_1(State* VAR_5) {
   VAR_5->settings->treeView = !VAR_5->settings->treeView;
   if (VAR_5->settings->treeView) VAR_5->settings->direction = 1;
   FUNC_0(VAR_5->pl);
   return VAR_2 | VAR_3 | VAR_0 | VAR_1 | VAR_4;
}
