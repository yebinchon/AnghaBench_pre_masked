
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int (* defsymbol ) (TYPE_2__*) ;} ;
struct TYPE_6__ {int name; } ;
struct TYPE_7__ {int name; TYPE_1__ x; } ;
typedef TYPE_2__* Symbol ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_5__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(Symbol VAR_4) {
 (*VAR_1->defsymbol)(VAR_4);
 FUNC_0(VAR_3,FUNC_2("#%s", VAR_4->x.name)); FUNC_1(VAR_2); FUNC_2("%s", VAR_4->name); VAR_0; VAR_0;
}
