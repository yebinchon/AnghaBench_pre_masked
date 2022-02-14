
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int panel; int header; int pl; int settings; } ;
typedef TYPE_1__ State ;
typedef int Htop_Reaction ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static Htop_Reaction FUNC_4(State* VAR_5) {
   FUNC_0(VAR_5->settings, VAR_5->header, VAR_5->pl);

   int VAR_6 = FUNC_1(VAR_5->header);
   FUNC_2(VAR_5->panel, 0, VAR_6);
   FUNC_3(VAR_5->panel, VAR_0, VAR_4-VAR_6-1);
   return VAR_2 | VAR_1 | VAR_3;
}
