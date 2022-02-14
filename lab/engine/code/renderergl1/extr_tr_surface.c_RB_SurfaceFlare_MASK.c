
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int normal; int color; int origin; } ;
typedef TYPE_1__ srfFlare_t ;
struct TYPE_8__ {scalar_t__ integer; } ;
struct TYPE_7__ {int fogNum; } ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ,int ) ;
 TYPE_3__* VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_1(srfFlare_t *VAR_2)
{
 if (VAR_0->integer)
  FUNC_0(VAR_2, VAR_1.fogNum, VAR_2->origin, VAR_2->color, VAR_2->normal);
}
