
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* hashnext; int dist; } ;
typedef TYPE_1__ th_plane_t ;
struct TYPE_5__ {TYPE_1__** planehash; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__ VAR_1 ;

void FUNC_1(th_plane_t *VAR_2)
{
 int VAR_3;

 VAR_3 = (int)FUNC_0(VAR_2->dist) / 8;
 VAR_3 &= (VAR_0-1);

 VAR_2->hashnext = VAR_1.planehash[VAR_3];
 VAR_1.planehash[VAR_3] = VAR_2;
}
