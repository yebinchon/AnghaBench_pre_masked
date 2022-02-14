
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double propself; double propchild; char* name; scalar_t__ cycleno; scalar_t__ ncall; } ;
typedef TYPE_1__ nltype ;


 int FUNC_0 (char*,char*) ;

int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
    const nltype **VAR_2 = (const nltype **)VAR_0;
    const nltype **VAR_3 = (const nltype **)VAR_1;
    register const nltype *VAR_4 = *VAR_2;
    register const nltype *VAR_5 = *VAR_3;
    double VAR_6;

    VAR_6 = ( VAR_4 -> propself + VAR_4 -> propchild )
     - ( VAR_5 -> propself + VAR_5 -> propchild );
    if ( VAR_6 < 0.0 )
     return 1;
    if ( VAR_6 > 0.0 )
     return -1;
    if ( VAR_4 -> name == 0 && VAR_4 -> cycleno != 0 )
 return -1;
    if ( VAR_5 -> name == 0 && VAR_5 -> cycleno != 0 )
 return 1;
    if ( VAR_4 -> name == 0 )
 return -1;
    if ( VAR_5 -> name == 0 )
 return 1;
    if ( *(VAR_4 -> name) != '_' && *(VAR_5 -> name) == '_' )
 return -1;
    if ( *(VAR_4 -> name) == '_' && *(VAR_5 -> name) != '_' )
 return 1;
    if ( VAR_4 -> ncall > VAR_5 -> ncall )
 return -1;
    if ( VAR_4 -> ncall < VAR_5 -> ncall )
 return 1;
    return FUNC_0( VAR_4 -> name , VAR_5 -> name );
}
