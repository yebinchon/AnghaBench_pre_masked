
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ y; } ;
struct TYPE_4__ {TYPE_3__* panel; } ;
typedef TYPE_1__ State ;
typedef int Htop_Reaction ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,scalar_t__) ;
 int FUNC_1 () ;

__attribute__((used)) static Htop_Reaction FUNC_2(State* VAR_3) {
   FUNC_1();
   FUNC_0(VAR_3->panel, VAR_0, VAR_2-(VAR_3->panel->y)-1);
   return VAR_1;
}
