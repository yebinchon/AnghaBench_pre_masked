
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_12__ {scalar_t__ inst; } ;
struct TYPE_14__ {TYPE_1__ x; } ;
struct TYPE_13__ {int (* _label ) (TYPE_3__*) ;} ;
struct TYPE_11__ {TYPE_2__ x; } ;
typedef TYPE_3__* Node ;


 TYPE_10__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int VAR_1 ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_8(Node VAR_2) {
 FUNC_0(VAR_2->x.inst == 0);
 FUNC_5(VAR_2);
 FUNC_1(FUNC_3(VAR_2));
 FUNC_1(FUNC_4(VAR_1, "\n"));
 (*VAR_0->x._label)(VAR_2);
 FUNC_1(FUNC_2(VAR_2, 1, 0));
 FUNC_6(VAR_2, 1);
}
