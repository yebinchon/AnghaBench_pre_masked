
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ panel; TYPE_1__* pl; } ;
struct TYPE_4__ {int following; } ;
typedef TYPE_2__ State ;
typedef int MainPanel ;
typedef int Htop_Reaction ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 size_t VAR_2 ;
 int FUNC_1 (scalar_t__,int ) ;

Htop_Reaction FUNC_2(State* VAR_3) {
   VAR_3->pl->following = FUNC_0((MainPanel*)VAR_3->panel);
   FUNC_1(VAR_3->panel, VAR_0[VAR_2]);
   return VAR_1;
}
