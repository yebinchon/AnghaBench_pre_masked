
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_3__ {int areanum; int traveltype; } ;
typedef TYPE_1__ aas_reachability_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_2(vec3_t VAR_2, aas_reachability_t *VAR_3, int VAR_4)
{

 if (FUNC_1(VAR_3->traveltype) & ~VAR_4) return VAR_0;

 if (FUNC_0(VAR_3->areanum) & ~VAR_4) return VAR_0;
 return VAR_1;
}
