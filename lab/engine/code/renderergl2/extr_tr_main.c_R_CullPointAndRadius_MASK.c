
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_3__ {int flags; int frustum; } ;
struct TYPE_4__ {TYPE_1__ viewParms; } ;


 int FUNC_0 (int const,float,int ,int) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;

int FUNC_1( const vec3_t VAR_2, float VAR_3 )
{
 return FUNC_0(VAR_2, VAR_3, VAR_1.viewParms.frustum, (VAR_1.viewParms.flags & VAR_0) ? 5 : 4);
}
