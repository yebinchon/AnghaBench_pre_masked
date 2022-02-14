
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int inc; } ;
struct TYPE_4__ {scalar_t__ panel; } ;
typedef TYPE_1__ State ;
typedef TYPE_2__ MainPanel ;
typedef int Htop_Reaction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static Htop_Reaction FUNC_1(State* VAR_3) {
   FUNC_0(((MainPanel*)VAR_3->panel)->inc, VAR_2, VAR_3->panel);
   return VAR_1 | VAR_0;
}
