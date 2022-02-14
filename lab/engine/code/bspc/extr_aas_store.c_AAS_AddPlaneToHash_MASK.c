
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dist; } ;
typedef TYPE_1__ aas_plane_t ;
struct TYPE_4__ {TYPE_1__* planes; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 TYPE_2__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;

void FUNC_1(int VAR_4)
{
 int VAR_5;
 aas_plane_t *VAR_6;

 VAR_6 = &VAR_3.planes[VAR_4];

 VAR_5 = (int)FUNC_0(VAR_6->dist) / 8;
 VAR_5 &= (VAR_0-1);

 VAR_2[VAR_4] = VAR_1[VAR_5];
 VAR_1[VAR_5] = VAR_4;
}
