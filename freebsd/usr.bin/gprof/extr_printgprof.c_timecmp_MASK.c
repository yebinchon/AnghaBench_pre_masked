
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double time; long ncall; int name; } ;
typedef TYPE_1__ nltype ;


 int FUNC_0 (int ,int ) ;

int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
    const nltype **VAR_2 = (const nltype **)VAR_0;
    const nltype **VAR_3 = (const nltype **)VAR_1;
    double VAR_4;
    long VAR_5;

    VAR_4 = (*VAR_3) -> time - (*VAR_2) -> time;
    if ( VAR_4 > 0.0 )
 return 1 ;
    if ( VAR_4 < 0.0 )
 return -1;
    VAR_5 = (*VAR_3) -> ncall - (*VAR_2) -> ncall;
    if ( VAR_5 > 0 )
 return 1;
    if ( VAR_5 < 0 )
 return -1;
    return( FUNC_0( (*VAR_2) -> name , (*VAR_3) -> name ) );
}
