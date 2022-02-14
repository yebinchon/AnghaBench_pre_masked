
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double propself; double propchild; long ncall; long selfcalls; } ;
typedef TYPE_1__ nltype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_0(nltype *VAR_3, nltype *VAR_4)
{
    double VAR_5 = VAR_3 -> propself + VAR_3 -> propchild;
    double VAR_6 = VAR_4 -> propself + VAR_4 -> propchild;
    long VAR_7 = VAR_3 -> ncall + VAR_3 -> selfcalls;
    long VAR_8 = VAR_4 -> ncall + VAR_4 -> selfcalls;

    if ( VAR_5 > VAR_6 ) {
 return VAR_1;
    }
    if ( VAR_5 < VAR_6 ) {
 return VAR_2;
    }
    if ( VAR_7 > VAR_8 ) {
 return VAR_1;
    }
    if ( VAR_7 < VAR_8 ) {
 return VAR_2;
    }
    return VAR_0;
}
