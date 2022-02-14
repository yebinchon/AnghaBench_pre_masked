
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cr; } ;
typedef TYPE_1__ surface_t ;
struct TYPE_7__ {int alpha; int blue; int green; int red; } ;
typedef TYPE_2__ color_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(surface_t *VAR_0, color_t VAR_1) {
    FUNC_0(VAR_0);

    FUNC_1(VAR_0->cr, VAR_1.red, VAR_1.green, VAR_1.blue, VAR_1.alpha);
}
